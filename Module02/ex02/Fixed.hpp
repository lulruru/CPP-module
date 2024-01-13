/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: russelenc <russelenc@student.42.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/26 16:14:57 by russelenc         #+#    #+#             */
/*   Updated: 2024/01/13 07:04:06 by russelenc        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FIXED_HPP
#define FIXED_HPP

#include <cmath>
#include <iostream>

class Fixed{
private:
	int					_fixedPointValue;
	static const int	_fractionalBits = 8;
public:
	// Constructeur
	Fixed();
	Fixed(const Fixed &og);
	Fixed(const int integer);
	Fixed(const float floating);
	~Fixed();
	
	// Surcharge d'operateur 
	Fixed&	operator=(const Fixed& original);
	
	//   - 4 OPERATEURS ARITHMETIQUES
	Fixed	operator/(const Fixed& original) const;
	Fixed	operator*(const Fixed& original) const;
	Fixed	operator+(const Fixed& original) const;
	Fixed	operator-(const Fixed& original) const;
	//	 - 6 OPERATEURS DE COMPARAISON
	bool	operator==(const Fixed& fixed) const;
	bool	operator!=(const Fixed& fixed) const;
	bool	operator>=(const Fixed& fixed) const;
	bool	operator<=(const Fixed& fixed) const;
	bool	operator>(const Fixed& fixed) const;
	bool	operator<(const Fixed& fixed) const;
	//	 - 4 OPERATEUR D'INCREMENTATION
	Fixed	operator++(int);
	Fixed&	operator++(void);
	Fixed	operator--(int);
	Fixed&	operator--(void);
	
	// Fonction
	int					getRawBits( void ) const;
	void				setRawBits( int const raw );
	float				toFloat( void ) const;
	int					toInt( void ) const;
	static Fixed&		min(Fixed& n1, Fixed& n2 );
	static const Fixed&	min(const Fixed& n1, const Fixed& n2 );
	static Fixed&		max(Fixed& n1, Fixed& n2 );
	static const Fixed&	max(const Fixed& n1, const Fixed& n2 );
};

// Surcharge d'operateur 
std::ostream& operator<<(std::ostream & o, const Fixed& original);

#endif