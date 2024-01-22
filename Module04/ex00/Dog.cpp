/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: russelenc <russelenc@student.42.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/21 18:01:00 by russelenc         #+#    #+#             */
/*   Updated: 2024/01/21 19:26:58 by russelenc        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Dog.hpp"

// CANONIQUE FORM
Dog::Dog() : Animal("Dog"){
	std::cout << "Dog Constructor Called" << std::endl;
}

Dog::Dog(const Dog &og) : Animal(og.type){
	std::cout << "Dog Copy Constructor Called" << std::endl;
}

Dog::~Dog(){
	std::cout << "Dog Destructor Called" << std::endl;
}

Dog&	Dog::operator=( const Dog &dog ){
	std::cout << "Dog overload operator called" << std::endl;
	if (this != &dog)
		type = dog.type;
	return (*this);
};

//FONCTIONS

void Dog::makeSound() const{
	std::cout << "WAFWAF :3" << std::endl;
}