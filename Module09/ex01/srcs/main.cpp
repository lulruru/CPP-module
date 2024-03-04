/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rencarna <rencarna@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/04 14:57:25 by rencarna          #+#    #+#             */
/*   Updated: 2024/03/04 15:28:57 by rencarna         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../incs/RPN.hpp"
#include <iostream>
#include <stack>
#include <string>
#include <sstream>
#include <cctype>
#include <stdlib.h>

int evaluateRPN(const std::string& expression) {
    std::istringstream iss(expression);
    std::stack<int> stack;
    std::string token;

    while (iss >> token) {
        if (isdigit(token[0]) || (token.size() > 1 && isdigit(token[1]))) {
            stack.push(atoi(token.c_str()));
        } else {
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
            else if (token == "/")
                stack.push(operand1 / operand2);
        }
    }

    return stack.top();
}

int main(int argc, char* argv[]) {
	std::cout << argv[1][1] << std::endl;
    if (argc != 2 || !isdigit(argv[1][0]) || argv[1][1] != 32 || argv[1][1]) {
        std::cerr << "Usage: " << argv[0] << " <expression in RPN>" << std::endl;
        return 1;
    }

    std::string expression = argv[1];
    int result = evaluateRPN(expression);
    std::cout << "Result: " << result << std::endl;

    return 0;
}
