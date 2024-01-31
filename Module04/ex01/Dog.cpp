/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: russelenc <russelenc@student.42.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/21 18:01:00 by russelenc         #+#    #+#             */
/*   Updated: 2024/01/31 14:08:09 by russelenc        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Dog.hpp"

// CANONIQUE FORM
Dog::Dog() : Animal("Dog"){
	std::cout << "Dog Constructor Called" << std::endl;
	_brain = new Brain();
}

Dog::Dog(const Dog &og) : Animal(og.type){
	std::cout << "Dog Copy Constructor Called" << std::endl;
	_brain = new Brain(*og._brain);
}

Dog::Dog(std::string idea) : Animal("Dog") {

	_brain = new Brain(idea);
	std::cout << "Dog String Parametric Constructor called"<< std::endl;
	return;
}

Dog::~Dog(){
	std::cout << "Dog Destructor Called" << std::endl;
	delete _brain;
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

std::string	Dog::getIdea(int index) const {
	return _brain->getIdea(index);
}