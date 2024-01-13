/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: russelenc <russelenc@student.42.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/26 16:14:53 by russelenc         #+#    #+#             */
/*   Updated: 2024/01/12 16:57:22 by russelenc        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"
Fixed::Fixed() : _fixedPointValue(0){
	std::cout << "Default constructor called" << std::endl;
}
Fixed::Fixed(const Fixed &og) {
	std::cout << "Copy constructor called" << std::endl;
	*this = og;
};
Fixed::Fixed(const int integer) : _fixedPointValue(integer << _fractionalBits){
	std::cout << "Int constructor called" << std::endl;
}

Fixed::Fixed(const float floating) : _fixedPointValue(roundf(floating * (1 << _fractionalBits))){
	std::cout << "Float constructor called" << std::endl;
}

Fixed& Fixed::operator=(const Fixed& original){
	if(this != &original)
	{
		this->_fixedPointValue = original.getRawBits();
	}
	return (*this);
}

Fixed::~Fixed(){
	std::cout << "Destructor called" << std::endl;
}

float Fixed::toFloat( void ) const{
	return(static_cast<float> (this->getRawBits()) / (1 << _fractionalBits));
}

int Fixed::toInt( void ) const{
	return((this->getRawBits()) >> _fractionalBits);
}

int Fixed::getRawBits( void ) const {
	return this->_fixedPointValue;
}

std::ostream& operator<<(std::ostream & out, const Fixed& original){
	out << original.toFloat();
	return (out);
}

void Fixed::setRawBits( int const raw ){
	this->_fixedPointValue = raw;
}