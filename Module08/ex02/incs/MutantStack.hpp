/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   MutantStack.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: russelenc <russelenc@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/22 14:39:10 by russelenc          #+#    #+#             */
/*   Updated: 2024/02/22 14:39:10 by russelenc         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include <iostream>
#include <string>
#include <vector>
#include <list>
#include <stack>
#include <algorithm>

template<typename T>
class MutantStack : public std::stack<T>
{
	public:

	// Constructeurs & Destructeurs
    MutantStack();
    MutantStack(MutantStack const &src);
    ~MutantStack();

	// Surcharge d'opérateurs
    MutantStack& operator=(MutantStack const &rhs);
	typedef typename std::deque<T>::iterator iterator;
	iterator	begin();
	iterator	end();
	private:
};

#include "../srcs/MutantStack.tpp"
