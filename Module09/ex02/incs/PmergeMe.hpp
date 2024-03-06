/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PmergeMe.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: russelenc <russelenc@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/06 14:23:40 by russelenc          #+#    #+#             */
/*   Updated: 2024/03/06 14:23:40 by russelenc         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include <iostream>
#include <string>
#include "colors.hpp"

class PmergeMe
{
	public:

	// Constructeurs & Destructeurs
    PmergeMe();
    PmergeMe(PmergeMe const &src);
    ~PmergeMe();

	// Surcharge d'opérateurs
    PmergeMe& operator=(PmergeMe const &rhs);

	// Getters & Setters
	
	// Méthodes
	
	private:
};

