/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: russelenc <russelenc@student.42.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/26 16:14:53 by russelenc         #+#    #+#             */
/*   Updated: 2024/01/13 07:11:25 by russelenc        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"

// Constructeur

Fixed::Fixed() : _fixedPointValue(0){
}
Fixed::Fixed(const Fixed &og) {
	*this = og;
};
Fixed::Fixed(const int integer) : _fixedPointValue(integer << _fractionalBits){
}

Fixed::Fixed(const float floating) : _fixedPointValue(roundf(floating * (1 << _fractionalBits))){
}

Fixed::~Fixed(){
}

// FONCTION


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

// Surcharge d'operateur

Fixed& Fixed::operator=(const Fixed& original){
	if(this != &original)
	{
		this->_fixedPointValue = original.getRawBits();
	}
	return (*this);
}

//   - 4 OPERATEURS ARITHMETIQUES

Fixed Fixed::operator+(const Fixed& original) const {
	return Fixed(this->toFloat() + original.toFloat());
}
Fixed Fixed::operator-(const Fixed& original) const {
	return Fixed(this->toFloat() - original.toFloat());
}
Fixed Fixed::operator*(const Fixed& original) const {
	return Fixed(this->toFloat() * original.toFloat());
}
Fixed Fixed::operator/(const Fixed& original) const {
	return Fixed(this->toFloat() / original.toFloat());
}

// - 6 OPERATEUR DE COMPARAISON

bool Fixed::operator==(const Fixed& fixed) const {
	return(this->toFloat()== fixed.toFloat());
};
bool Fixed::operator!=(const Fixed& fixed) const {
	return(this->toFloat() !=  fixed.toFloat());
};
bool Fixed::operator>=(const Fixed& fixed) const {
	return(this->toFloat()>= fixed.toFloat());
};
bool Fixed::operator<=(const Fixed& fixed) const {
	return(this->toFloat()<= fixed.toFloat());
};
bool Fixed::operator>(const Fixed& fixed) const {
	return(this->toFloat()> fixed.toFloat());
};
bool Fixed::operator<(const Fixed& fixed) const {
	return(this->toFloat()< fixed.toFloat());
};

//	 - 4 OPERATEUR D'INCREMENTATION
Fixed Fixed::operator++(int){
	Fixed tmp(*this);
	
	_fixedPointValue++;
	return(tmp);	
};
Fixed& Fixed::operator++(void){
	_fixedPointValue++;
	return(*this);
};
Fixed Fixed::operator--(int){
	Fixed tmp(*this);
	
	_fixedPointValue--;
	return(tmp);
};

Fixed& Fixed::operator--(void){
	_fixedPointValue--;
	return(*this);
};

Fixed &Fixed::min(Fixed& n1, Fixed& n2 ){
	return((n1 < n2) ? n1 : n2);
};

Fixed const &Fixed::min(const Fixed& n1, const Fixed& n2 ){
	return((n1 < n2) ? n1 : n2);	
};

Fixed &Fixed::max(Fixed& n1, Fixed& n2 ){
	return((n1 > n2) ? n1 : n2);	
};

Fixed const &Fixed::max(const Fixed& n1, const Fixed& n2 ){
	return((n1 > n2) ? n1 : n2);	
};
