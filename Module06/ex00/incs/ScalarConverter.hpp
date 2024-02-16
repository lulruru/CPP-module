/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScalarConverter.hpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: russelenc <russelenc@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/08 00:04:04 by russelenc          #+#    #+#             */
/*   Updated: 2024/02/08 00:04:04 by russelenc         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include <iostream>
#include <string>
enum _TYPE{
	_INT,
	_CHAR,
	_FLOAT,
	_DOUBLE,
	_NAN,
	_INF,
};


class ScalarConverter {
private:
    // Constructeurs & Destructeurs
    ScalarConverter();
	static std::string _str;
    static int _type;
	static bool _int_ov;
	static bool _double_ov;
	static bool _float_ov;
	static bool _char_ov;
    static bool _negative;
    static void find_type(const std::string &str);
     void print_char(std::string str);
     void print_int(std::string str);
     void print_float(std::string str);
     void print_double(std::string str);
     void print_nan(std::string str);
     void print_inf(std::string str);

public:
	~ScalarConverter();
	typedef void (ScalarConverter::*t_funcptr)(std::string);
    static t_funcptr ptr[];
    static void convert( std::string  str);

};

// typedef void (ScalarConverter::*t_funcptr)(const std::string &);


