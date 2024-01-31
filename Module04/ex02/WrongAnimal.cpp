/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongAnimal.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: russelenc <russelenc@student.42.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/21 18:00:49 by russelenc         #+#    #+#             */
/*   Updated: 2024/01/31 13:36:09 by russelenc        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#include "WrongAnimal.hpp"

// CANONIQUE FORM
WrongAnimal::WrongAnimal() : type("WrongAnimal"){
	std::cout << "WrongAnimal Constructor Called" << std::endl;
}

WrongAnimal::WrongAnimal(std::string _type) : type(_type){
	std::cout << "WrongAnimal Constructor Called" << std::endl;
}

WrongAnimal::WrongAnimal(const WrongAnimal &og) : type(og.type){
	std::cout << "WrongAnimal Copy Constructor Called" << std::endl;
}

WrongAnimal::~WrongAnimal(){
	std::cout << "WrongAnimal Destructor Called" << std::endl;
}

WrongAnimal&	WrongAnimal::operator=( const WrongAnimal &WrongAnimal ){
	std::cout << "WrongAnimal overload operator called" << std::endl;
	if (this != &WrongAnimal)
		type = WrongAnimal.type;
	return (*this);
};

//FONCTIONS

void WrongAnimal::makeSound() const{
	std::cout << this->getType() << " make grrrrrr" << std::endl;
}

std::string  WrongAnimal::getType() const{
	return(type);
}
