/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongCat.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: russelenc <russelenc@student.42.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/21 18:00:45 by russelenc         #+#    #+#             */
/*   Updated: 2024/01/31 13:33:56 by russelenc        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "WrongCat.hpp"

// CANONIQUE FORM
WrongCat::WrongCat() : WrongAnimal("WrongCat"){
	std::cout << "WrongCat Constructor Called" << std::endl;
}

WrongCat::WrongCat(const WrongCat &og) : WrongAnimal(og.type){
	std::cout << "WrongCat Copy Constructor Called" << std::endl;
}

WrongCat::~WrongCat(){
	std::cout << "WrongCat Destructor Called" << std::endl;
}

WrongCat&	WrongCat::operator=( const WrongCat &WrongCat ){
	std::cout << "WrongCat overload operator called" << std::endl;
	if (this != &WrongCat)
		type = WrongCat.type;
	return (*this);
};

//FONCTIONS

void WrongCat::makeSound() const{
	std::cout << "miaw miaw :3" << std::endl;
}