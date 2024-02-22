/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Span.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: russelenc <russelenc@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/22 13:33:00 by russelenc          #+#    #+#             */
/*   Updated: 2024/02/22 13:33:00 by russelenc         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include <iostream>
#include <string>
#include <vector>
#include <list>
#include <exception>
#include <algorithm>
class Span
{
	public:

	// Constructeurs & Destructeurs
    Span();
	Span(unsigned int n);
    Span(Span const &src);
    ~Span();
	void addNumber(int n);
	void addNumber(std::vector<int> n);
	int	shortestSpan();
	int	longestSpan();
	// Surcharge d'opérateurs
    Span& operator=(Span const &rhs);

	// Getters & Setters
	// Méthodes
	
	private:
	unsigned int _maxsize;
	std::vector<int> _cont;
};

