/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: russelenc <russelenc@student.42.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/23 17:51:50 by russelenc         #+#    #+#             */
/*   Updated: 2023/10/26 16:29:42 by russelenc        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FIXED_HPP
#define FIXED_HPP

#include <iostream>
#include <string.h>

class Fixed{
private:
	int _fixedPointValue;
	static const int _fractionalBits= 8;
public:
	Fixed();
	~Fixed();
	Fixed(const Fixed& original);
	Fixed& operator = (const Fixed& original);
	int getRawBits( void ) const;
	void setRawBits( int const raw );
};
#endif