/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: russelenc <russelenc@student.42.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/04 14:57:25 by rencarna          #+#    #+#             */
/*   Updated: 2024/03/06 14:16:46 by russelenc        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../incs/RPN.hpp"

// int evaluateRPN(const std::string& expression) {
//     std::istringstream iss(expression);
//     std::stack<int> stack;
//     std::string token;

//     while (iss >> token) {
//         if (isdigit(token[0]) || (token.size() > 1 && isdigit(token[1]))) {
//             stack.push(atoi(token.c_str()));
//         } else {
//             if (stack.size() < 2) {
//                 throw std::invalid_argument("Pas assez d'opérandes pour l'opération.");
//             }

//             int operand2 = stack.top();
//             stack.pop();
//             int operand1 = stack.top();
//             stack.pop();

//             if (token == "+")
//                 stack.push(operand1 + operand2);
//             else if (token == "-")
//                 stack.push(operand1 - operand2);
//             else if (token == "*")
//                 stack.push(operand1 * operand2);
//             else if (token == "/") {
//                 if (operand2 == 0) {
//                     throw std::invalid_argument("Division par zéro.");
//                 }
//                 stack.push(operand1 / operand2);
//             } else {
//                 throw std::invalid_argument("Opération inconnue.");
//             }
//         }
//     }

//     if (stack.size() != 1) {
//         throw std::invalid_argument("Expression invalide.");
//     }

//     return stack.top();
// }

int main(int argc, char* argv[]) {
	// std::cout << argv[1][1] << std::endl;
    if (argc != 2 || !isdigit(argv[1][0]) || argv[1][1] != 32) {
        std::cerr << "Usage: " << argv[0] << " <expression in RPN>" << std::endl;
        return 1;
    }
	RPN rpn;
    std::string expression = argv[1];
	try{
    	int result = rpn.evaluateRPN(expression);
	
	std::cout << "Result: " << result << std::endl;
	}catch (const std::invalid_argument& e) {
        std::cerr << "Erreur : " << e.what() << std::endl;
    }
    return 0;
}
