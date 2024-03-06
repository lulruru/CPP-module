/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   RPN.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: russelenc <russelenc@student.42.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/04 14:57:25 by rencarna          #+#    #+#             */
/*   Updated: 2024/03/06 14:16:21 by russelenc        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include <iostream>
#include <string>
#include <iostream>
#include <stack>
#include <string>
#include <sstream>
#include <cctype>
#include <stdlib.h>
#include <stdexcept>

class RPN
{
	public:

	// Constructeurs & Destructeurs
    RPN();
	RPN(const std::string &str);
    RPN(RPN const &src);
    ~RPN();
    RPN& operator=(RPN const &rhs);
	int evaluateRPN(const std::string& expression);
	private:
	// std::string _expression;
};

