/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Data.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: russelenc <russelenc@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/16 13:09:52 by russelenc          #+#    #+#             */
/*   Updated: 2024/02/16 13:09:52 by russelenc         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../incs/Data.hpp"

/* ************************************************************************** */
/*                     Constructeurs & Destructeurs                   		  */
/* ************************************************************************** */

Data::Data() : _type("Data"), _nb(8) {

}


Data::Data(Data const &src) {
	*this = src;
}

Data::Data(uintptr_t raw) : _type("Data"), _nb(raw) {
	(void)raw;

}

Data::~Data() {

	std::cout <<  "Destructor called: Data"  << std::endl;
}

/* ************************************************************************** */
/*                     Surcharges d'opérateurs                  		      */
/* ************************************************************************** */

const std::string&	Data::getType( void ) const {
	return this->_type;
}
const uintptr_t&	Data::getNb( void ) const {
	return this->_nb;
}

std::ostream &operator<<(std::ostream &o, Data const &i) {
	o << "\n🠮 Data Type is : " << i.getType() << std::endl;
	o << "🠮 Data Nb is : " << i.getNb() << std::endl;
	return o;
}
/* ************************************************************************** */
/*                    		 Getters & Setters                  		      */
/* ************************************************************************** */

/* ************************************************************************** */
/*                   			  Méthodes                 		              */
/* ************************************************************************** */

