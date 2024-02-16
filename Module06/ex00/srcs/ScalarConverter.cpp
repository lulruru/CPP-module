/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScalarConverter.cpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: russelenc <russelenc@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/08 00:04:04 by russelenc          #+#    #+#             */
/*   Updated: 2024/02/08 00:04:04 by russelenc         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../incs/ScalarConverter.hpp"

/* ************************************************************************** */
/*                     Constructeurs & Destructeurs                   		  */
/* ************************************************************************** */

bool ScalarConverter::_negative = false;
bool ScalarConverter::_int_ov = false;
bool ScalarConverter::_double_ov = false;
bool ScalarConverter::_float_ov = false;
bool ScalarConverter::_char_ov = false;
int	ScalarConverter::_type = -1;

ScalarConverter::ScalarConverter() {

	std::cout <<  "Default Constructor called: ScalarConverter"  << std::endl;
}

ScalarConverter::~ScalarConverter() {

	std::cout <<  "Destructor called: ScalarConverter"  << std::endl;
	return;
}

/* ************************************************************************** */
/*                     Surcharges d'opérateurs                  		      */
/* ************************************************************************** */


void ScalarConverter::find_type(const std::string &str)
{
	int i = 0;
	int		len = str.length();
	bool point = false;

	if(str.at(0) == '-')
	{
		ScalarConverter::_negative = true;
		i++;
	}
	if (str.length() == 1 && std::isprint(str.at(0)) != 0
			&& !std::isdigit(str.at(0))){
		ScalarConverter::_type = _CHAR;
		return ;
	}
	else if (str == "nan" || str == "nanf")
	{
		ScalarConverter::_type = _NAN;
		return ;
	}
	else if (str == "+inf" || str == "+inff"
		|| str == "-inf" || str == "-inff")
	{
		ScalarConverter::_type = _INF;
		return ;
	}
	while(i < len)
	{
		if (str.at(i) == 'f' && std::isdigit(str.at(i - 1))
				&& ((i + 1) == len)) {
				ScalarConverter::_type = _FLOAT;
				return ;
			}
			else if (str.at(i) == '.') {
				if (point == false)
					point = true;
				else
				{
					ScalarConverter::_type = _NAN;
					return ;
				}
			}
			else if (!std::isdigit(str.at(i)))
			{
				ScalarConverter::_type = _NAN;
				return ;
			}
			i++;
	}
	if(point == true)
		ScalarConverter::_type = _DOUBLE;
	else
		ScalarConverter::_type = _INT;
	
}

void		ScalarConverter::print_char(std::string str){
		char c = str.at(0);

		std::cout << "char	:  "	<< c << std::endl;
		std::cout << "int	:  "	<< static_cast<int>(c) << std::endl;
		std::cout << "float	:  "	<<  static_cast<float>(c)<< ".0f" << std::endl;
		std::cout << "double  :  "	<<  static_cast<double>(c) << ".0"<< std::endl;
};

void		ScalarConverter::print_int(std::string str){

	long i = atol(str.c_str());
	if (i < 0 || i > 126)
		std::cout << "char = IMPOSSIBLE" << std::endl;
	else
		std::cout << "char	:  '"	<< static_cast<char>(i) << "'" << std::endl;
	if (i < std::numeric_limits<int>::min() || i > std::numeric_limits<int>::max())
			std::cout << "int	:  "	<< "overflow" << std::endl;
	else
		std::cout << "int	:  "<< static_cast<int>(i) << std::endl;
	std::cout << "float	:  "	<< static_cast<float>(i) << ".0f" << std::endl;
	std::cout << "double  :  "	<< static_cast<double>(i)  << ".0" << std::endl;
};

void		ScalarConverter::print_float(std::string str){
	float _float = static_cast<float>(std::atof(str.c_str()));
	if (_float < 0 || _float > 126)
		std::cout << "char = IMPOSSIBLE" << std::endl;
	else
		std::cout << "char	:  '"	<< static_cast<char>(_float) << "'" << std::endl;
	if (_float < std::numeric_limits<int>::min()
		|| _float > std::numeric_limits<int>::max())
		std::cout << "int	:  "	<< "overflow" << std::endl;
	else
		std::cout << "int	:  "	<< static_cast<int>(_float) << std::endl;
	if (_float == static_cast<int>(_float))
		std::cout << "float	:  "	<< _float << ".0f" << std::endl;
	else
		std::cout << "float	:  "	<< _float << "f" << std::endl;
	std::cout << "double  :  "	<< static_cast<double>(_float);
	std::cout << (str.find_first_of(".") == std::string::npos?".0":"") << std::endl;
};

void		ScalarConverter::print_double(std::string str){
		double _double = static_cast<double>(std::atof(str.c_str()));
	if (_double < 0 || _double > 126)
		std::cout << "char = IMPOSSIBLE" << std::endl;
	else
		std::cout << "char	:  '"	<< static_cast<char>(_double) << "'" << std::endl;
	if (_double < std::numeric_limits<int>::min()
		|| _double > std::numeric_limits<int>::max())
		std::cout << "int	:  "	<< "overflow" << std::endl;
	else
		std::cout << "int	:  "	<< static_cast<int>(_double) << std::endl;
	if (_double == static_cast<int>(_double))
		std::cout << "float	:  "	<< _double << ".0f" << std::endl;
	else
		std::cout << "float	:  "	<< _double << "f" << std::endl;
	std::cout << "double  :  "	<< static_cast<double>(_double);
	std::cout << (str.find_first_of(".") == std::string::npos?".0":"") << std::endl;
};

void		ScalarConverter::print_nan(std::string str){
	(void)str;
	std::cout << "char	:  "	<< "impossible" << std::endl;
	std::cout << "int	:  "	<< "impossible" << std::endl;
	std::cout << "float	:  "	<< "nanf" << std::endl;
	std::cout << "double  :  "	<< "nan" << std::endl;
};

void		ScalarConverter::print_inf(std::string str){
	(void)str;
	std::cout << "char	:  "	<< "impossible" << std::endl;
	std::cout << "int	:  "	<< "impossible" << std::endl;
	if(_negative == true)
	{
		std::cout << "float	:  "	<< "-inff" << std::endl;
		std::cout << "double  :  "	<< "inf" << std::endl;
	}
	else{
	std::cout << "float	:  "	<< "inff" << std::endl;
	std::cout << "double  :  "	<< "inf" << std::endl;
	}
};

ScalarConverter::t_funcptr ScalarConverter::ptr[] = {
    &ScalarConverter::print_int, 
    &ScalarConverter::print_char, 
    &ScalarConverter::print_float, 
    &ScalarConverter::print_double, 
    &ScalarConverter::print_nan, 
    &ScalarConverter::print_inf
};


void ScalarConverter::convert(std::string str){
	ScalarConverter::find_type(str);
	if(_type >= 0)
		(ScalarConverter().*ptr[_type])(str);
	else
	{
		std::cout << "Error : Invalid input "<< std::endl;
		return ;
	}
}

/* ************************************************************************** */
/*                   			  Méthodes                 		              */
/* ************************************************************************** */

