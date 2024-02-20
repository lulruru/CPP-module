/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Array.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rencarna <rencarna@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/19 20:18:28 by rencarna          #+#    #+#             */
/*   Updated: 2024/02/20 19:43:57 by rencarna         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include <iostream>
#include <string>

template <typename T> 
class Array
{
	public:

	// Constructeurs & Destructeurs
    Array();
	Array(unsigned int n);
    Array(Array<T> const &src);
    ~Array();
	// Surcharge d'opérateurs
    Array& operator=(Array const &rhs);
	T& operator[](unsigned int i) const;
	// Exception
	class WrongIndex : public std::exception
	{  
		public :
			virtual const char *what() const throw();
	};
	void size();
	private:
	T *array;
	size_t _len;
};


