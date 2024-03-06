/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   RPN.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: russelenc <russelenc@student.42.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/04 14:57:25 by rencarna          #+#    #+#             */
/*   Updated: 2024/03/06 14:18:00 by russelenc        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../incs/RPN.hpp"

/* ************************************************************************** */
/*                     Constructeurs & Destructeurs                   		  */
/* ************************************************************************** */

RPN::RPN() {

	std::cout << "Default Constructor called: RPN"  << std::endl;
}

RPN::RPN(RPN const &src) {
	(void)src;
	std::cout << "Copy Constructor called: RPN"  << std::endl;
}

RPN::~RPN() {

	std::cout << "Destructor called: RPN" << std::endl;
}

/* ************************************************************************** */
/*                     Surcharges d'opérateurs                  		      */
/* ************************************************************************** */

RPN&	RPN::operator=(RPN const &rhs) {
	(void)rhs;
	std::cout <<  "Assignment Operator called: RPN"  << std::endl;
	return (*this);
}

int RPN::evaluateRPN(const std::string& expression) {
    std::istringstream iss(expression);
    std::stack<int> stack;
    std::string token;

    while (iss >> token) {
        if (isdigit(token[0]) || (token.size() > 1 && isdigit(token[1]))) {
            stack.push(atoi(token.c_str()));
        } else {
            if (stack.size() < 2) {
                throw std::invalid_argument("Pas assez de valeur pour l'opération.");
            }

            int operand2 = stack.top();
            stack.pop();
            int operand1 = stack.top();
            stack.pop();
            if (token == "+")
                stack.push(operand1 + operand2);
            else if (token == "-")
                stack.push(operand1 - operand2);
            else if (token == "*")
                stack.push(operand1 * operand2);
            else if (token == "/") {
                if (operand2 == 0) {
                    throw std::invalid_argument("Division par zéro.");
                }
                stack.push(operand1 / operand2);
            } else {
                throw std::invalid_argument("Opération inconnue.");
            }
        }
    }

    if (stack.size() != 1) {
        throw std::invalid_argument("Expression invalide.");
    }

    return stack.top();
}