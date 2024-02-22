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
#include "colors.hpp"

class Span
{
	public:

	// Constructeurs & Destructeurs
    Span();
    Span(Span const &src);
    ~Span();

	// Surcharge d'opérateurs
    Span& operator=(Span const &rhs);

	// Getters & Setters
	
	// Méthodes
	
	private:
};

