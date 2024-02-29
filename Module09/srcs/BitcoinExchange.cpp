/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   BitcoinExchange.cpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: russelenc <russelenc@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/25 21:43:54 by russelenc          #+#    #+#             */
/*   Updated: 2024/02/25 21:43:54 by russelenc         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../incs/BitcoinExchange.hpp"

/* ************************************************************************** */
/*                     Constructeurs & Destructeurs                   		  */
/* ************************************************************************** */

BitcoinExchange::BitcoinExchange() {
	fill_map()
}


BitcoinExchange::BitcoinExchange(BitcoinExchange const &src) {

	std::cout <<  "Copy Constructor called: BitcoinExchange"  << std::endl;
}

BitcoinExchange::~BitcoinExchange() {

	std::cout <<  "Destructor called: BitcoinExchange"  << std::endl;
}

/* ************************************************************************** */
/*                     Surcharges d'opérateurs                  		      */
/* ************************************************************************** */

BitcoinExchange&	BitcoinExchange::operator=(BitcoinExchange const &rhs) {
	
	std::cout <<  "Assignment Operator called: BitcoinExchange"  << std::endl;
	return (*this);
}

void BitcoinExchange::fill_map(){
	size_t pos;
	std::ifstream("data.csv");
	if()
}