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
#include <vector>
#include <deque>
#include <algorithm>
#include <sys/time.h>

class PmergeMe
{
	public:

	// Constructeurs & Destructeurs
    PmergeMe();
	PmergeMe(int ac, char **av);
    PmergeMe(PmergeMe const &src);
    ~PmergeMe();
	// Surcharge d'opérateurs
    PmergeMe& operator=(PmergeMe const &rhs);

	template <typename cont>
	void DichotomieInsert(cont &container, int value);
	
	unsigned int	jacobsthal(unsigned int n);
	template< typename T>
	void print_container(const std::string &str,T &cont);
	// Méthodes
	template<typename Container>
	void sort_vector(Container& cont) ;
	void sort_deque();
	private:
	std::vector<int> _argument;
	std::vector<int> _vectorArg;
	std::deque<int> _dequeArg;
	
};

