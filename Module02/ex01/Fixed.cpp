/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rencarna <rencarna@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/26 16:14:53 by russelenc         #+#    #+#             */
/*   Updated: 2023/10/31 14:53:05 by rencarna         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"

Fixed::Fixed(){
	
}

Fixed::Fixed(const int entier) : _fixedPointValue(entier << _fractionalBits + 1){
	
}

Fixed::Fixed(const float flottant) : _fixedPointValue(){
	
}