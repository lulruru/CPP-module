/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: russelenc <russelenc@student.42.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/21 18:01:03 by russelenc         #+#    #+#             */
/*   Updated: 2024/01/31 14:07:05 by russelenc        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cat.hpp"

// CANONIQUE FORM
Cat::Cat() : Animal("Cat"){
	std::cout << "Cat Constructor Called" << std::endl;
	_brain = new Brain();
}

Cat::Cat(const Cat &og){
	std::cout << "Cat Copy Constructor Called" << std::endl;
	*this = og;
	_brain = new Brain(*og._brain);
}
Cat::Cat(std::string idea) : Animal("Cat") {

	_brain = new Brain(idea);
	std::cout << "Cat String Parametric Constructor called"<< std::endl;
	return;
}
Cat::~Cat(){
	std::cout << "Cat Destructor Called" << std::endl;
}

Cat&	Cat::operator=( const Cat &cat ){
	std::cout << "Cat overload operator called" << std::endl;
	if (this != &cat)
		type = cat.type;
	return (*this);
};

//FONCTIONS

void Cat::makeSound() const{
	std::cout << "miaw miaw :3" << std::endl;
}
std::string	Cat::getIdea(int index) const {
	return _brain->getIdea(index);
}