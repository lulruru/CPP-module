/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: russelenc <russelenc@student.42.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/21 18:01:03 by russelenc         #+#    #+#             */
/*   Updated: 2024/01/21 19:26:05 by russelenc        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cat.hpp"

// CANONIQUE FORM
Cat::Cat() : Animal("Cat"){
	std::cout << "Cat Constructor Called" << std::endl;
}

Cat::Cat(const Cat &og) : Animal(og.type){
	std::cout << "Cat Copy Constructor Called" << std::endl;
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