/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rencarna <rencarna@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/26 16:14:57 by russelenc         #+#    #+#             */
/*   Updated: 2023/10/27 14:41:53 by rencarna         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FIXED_HPP
#define FIXED_HPP

#include <cmath>

class Fixed{
private:
	int _fixedPointValue;
	static const int _fractionalBits= 8;
public:
	Fixed();
	Fixed(const int entier);
	Fixed(const float flottant);
	~Fixed();
	float toFloat( void ) const;
	int toInt( void ) const;
};
#endif