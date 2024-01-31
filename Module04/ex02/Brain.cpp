/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Brain.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: russelenc <russelenc@student.42.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/31 13:37:35 by russelenc         #+#    #+#             */
/*   Updated: 2024/01/31 13:58:52 by russelenc        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Brain.hpp"

Brain::Brain() {

	std::cout <<  "Brain Constructor called"  << std::endl;
	return;
}

Brain::Brain(std::string idea) {

	std::cout <<  "Brain String Parametric Constructor called"  << std::endl;
	for (int i = 0; i < 100; i++)
		_ideas[i] = idea;
	return;
}

Brain::Brain( Brain const & src ) {

	std::cout <<  "Brain Copy Constructor called"  << std::endl;
	*this = src;
	return;
}

Brain::~Brain(void) {

	std::cout <<  "Brain Destructor called" << std::endl;
	return;
}

Brain & Brain::operator=( Brain const & og ) {
	
	std::cout <<  "Brain Copy Assignement operator called"  << std::endl;
	for (int i = 0; i < 100; i++)
		this->_ideas[i] = og._ideas[i]; 
	return *this;

}

std::string Brain::getIdea(int index) const
{
	return _ideas[index];
}