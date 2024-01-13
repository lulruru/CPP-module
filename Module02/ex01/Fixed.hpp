/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: russelenc <russelenc@student.42.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/26 16:14:57 by russelenc         #+#    #+#             */
/*   Updated: 2024/01/12 17:06:27 by russelenc        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FIXED_HPP
#define FIXED_HPP

#include <cmath>
#include <iostream>

class Fixed{
private:
	int _fixedPointValue;
	static const int _fractionalBits = 8;
public:
	// Constructeur
	Fixed();
	Fixed(const Fixed &og);
	Fixed(const int integer);
	Fixed(const float floating);
	~Fixed();
	
	// Surcharge d'operateur 
	Fixed& operator=(const Fixed& original);

	int getRawBits( void ) const;
	void setRawBits( int const raw );
	float toFloat( void ) const;
	int toInt( void ) const;
};

// Surcharge d'operateur 
std::ostream& operator<<(std::ostream & o, const Fixed& original);

#endif