/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: russelenc <russelenc@student.42.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/13 07:09:00 by russelenc         #+#    #+#             */
/*   Updated: 2024/01/13 07:19:33 by russelenc        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"

int	main( void ) { 
	Fixed a;
	Fixed const b( Fixed( 5.05f ) * Fixed( 2 ) );
	Fixed c(15);
	Fixed d(3);
	
	std::cout << a << std::endl;
	// std::cout << ++a << std::endl;
	Fixed e(++a);
	std::cout << e << std::endl;
	std::cout << a << std::endl;
	std::cout << a++ << std::endl;
	std::cout << a << std::endl;
	std::cout << b << std::endl;
	std::cout << c + d << std::endl;
	std::cout << c - d << std::endl;
	std::cout << c / d << std::endl;
	std::cout << c * d << std::endl;
	std::cout << Fixed::min(c, d) << std::endl;
	std::cout << Fixed::max( a, b ) << std::endl;
	return 0; 
}