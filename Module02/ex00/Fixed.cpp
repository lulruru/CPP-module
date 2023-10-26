/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: russelenc <russelenc@student.42.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/26 15:35:11 by russelenc         #+#    #+#             */
/*   Updated: 2023/10/26 16:10:09 by russelenc        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"

Fixed::Fixed() : _fixedPointValue(0){
	std::cout << "Constructor called" << std::endl;
}

Fixed::Fixed(const Fixed& original) : _fixedPointValue(original._fixedPointValue){
	std::cout << "Copy constructor called" << std::endl; 
}

Fixed& Fixed::operator=(const Fixed& original){
	if(this != &original)
	{
		this->_fixedPointValue = original._fixedPointValue;
	}
	return *this;
}

Fixed::~Fixed(){
	
}

int Fixed::getRawBits( void ) const{
	return this->_fixedPointValue;
}

void Fixed::setRawBits( int const raw )
{
	this->_fixedPointValue = raw;
}