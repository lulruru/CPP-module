/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   BitcoinExchange.hpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: russelenc <russelenc@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/25 21:43:54 by russelenc          #+#    #+#             */
/*   Updated: 2024/02/25 21:43:54 by russelenc         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include <iostream>
#include <string>
#include <algorithm>
#include <map>
#include <fstream>
#include <exception>
#include <string>
#include <cctype>
#include <sstream>
#include <cmath>

class BitcoinExchange {
public:
    BitcoinExchange();
    BitcoinExchange(const BitcoinExchange &src);
    ~BitcoinExchange();
    BitcoinExchange&	operator=(const BitcoinExchange &rhs);
	float		findClosestDate(const std::string& inputDate, float btc);
	float				convertDateToFloat(const std::string& dateStr);

private:
	std::map<std::string, float> _valueMap;
	void fill_map();
};