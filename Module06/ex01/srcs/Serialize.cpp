/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Serialize.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: russelenc <russelenc@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/16 13:11:37 by russelenc          #+#    #+#             */
/*   Updated: 2024/02/16 13:11:37 by russelenc         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../incs/Serialize.hpp"

/* ************************************************************************** */
/*                     Constructeurs & Destructeurs                   		  */
/* ************************************************************************** */

Serialize::Serialize() {

	std::cout <<  "Default Constructor called: Serialize"  << std::endl;
}


Serialize::Serialize(Serialize const &src) {

	(void)src;
}

Serialize::~Serialize() {

	std::cout <<  "Destructor called: Serialize"  << std::endl;
}

/* ************************************************************************** */
/*                     Surcharges d'opérateurs                  		      */
/* ************************************************************************** */

Serialize&	Serialize::operator=(Serialize const &rhs) {
	
	(void)rhs;
	return *this;
};

uintptr_t	Serialize::serialize(Data* ptr){
	return (reinterpret_cast<uintptr_t>(ptr));
};

Data*	Serialize::deserialize(uintptr_t raw)
{
	return (reinterpret_cast<Data *>(raw));
};

/* ************************************************************************** */
/*                    		 Getters & Setters                  		      */
/* ************************************************************************** */

/* ************************************************************************** */
/*                   			  Méthodes                 		              */
/* ************************************************************************** */

