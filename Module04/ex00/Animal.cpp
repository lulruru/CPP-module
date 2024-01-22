/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: russelenc <russelenc@student.42.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/21 18:01:07 by russelenc         #+#    #+#             */
/*   Updated: 2024/01/21 19:25:30 by russelenc        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Animal.hpp"

// CANONIQUE FORM
Animal::Animal() : type("Animal"){
	std::cout << "Animal Constructor Called" << std::endl;
}

Animal::Animal(std::string _type) : type(_type){
	std::cout << "Animal Constructor Called" << std::endl;
}

Animal::Animal(const Animal &og) : type(og.type){
	std::cout << "Animal Copy Constructor Called" << std::endl;
}

Animal::~Animal(){
	std::cout << "Animal Destructor Called" << std::endl;
}

Animal&	Animal::operator=( const Animal &animal ){
	std::cout << "Animal overload operator called" << std::endl;
	if (this != &animal)
		type = animal.type;
	return (*this);
};

//FONCTIONS

void Animal::makeSound() const{
	std::cout << "Animal make a sound" << std::endl;
}

std::string  Animal::getType() const{
	return(type);
}

