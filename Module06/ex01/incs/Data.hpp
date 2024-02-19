/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Data.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: russelenc <russelenc@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/16 13:09:52 by russelenc          #+#    #+#             */
/*   Updated: 2024/02/16 13:09:52 by russelenc         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include <iostream>
#include <string>
#include <stdint.h>

struct Data {	

	Data( void );
	Data(uintptr_t raw);
	Data(Data const & src);
	~Data( void );
	const std::string&	getType( void ) const;
	const uintptr_t&	getNb( void ) const;

	std::string			_type;
	uintptr_t			_nb;
};
std::ostream & operator<<(std::ostream &o, Data const &rhs);
