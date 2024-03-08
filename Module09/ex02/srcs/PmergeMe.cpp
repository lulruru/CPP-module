/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PmergeMe.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: russelenc <russelenc@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/06 14:23:40 by russelenc          #+#    #+#             */
/*   Updated: 2024/03/06 14:23:40 by russelenc         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../incs/PmergeMe.hpp"

/* ************************************************************************** */
/*                     Constructeurs & Destructeurs                   		  */
/* ************************************************************************** */

PmergeMe::PmergeMe() {

	std::cout <<  "Default Constructor called: PmergeMe"  << std::endl;
}

PmergeMe::PmergeMe(int ac,char **av) {
	long int n;
	for(int i = 1; i < ac; i++)
	{
		char *endptr;
		n = std::strtol(av[i], &endptr, 10);
		if(*endptr != '\0' || n < 0)
			throw std::invalid_argument("Bad argument");
		n.
	}
}


PmergeMe::PmergeMe(PmergeMe const &src) {

	std::cout <<  "Copy Constructor called: PmergeMe"  << std::endl;
}

PmergeMe::~PmergeMe() {

	std::cout <<  "Destructor called: PmergeMe"  << std::endl;
}

/* ************************************************************************** */
/*                     Surcharges d'opérateurs                  		      */
/* ************************************************************************** */

PmergeMe&	PmergeMe::operator=(PmergeMe const &rhs) {
	
	std::cout <<  "Assignment Operator called: PmergeMe"  << std::endl;
	return (*this);
}

/* ************************************************************************** */
/*                    		 Getters & Setters                  		      */
/* ************************************************************************** */

/* ************************************************************************** */
/*                   			  Méthodes                 		              */
/* ************************************************************************** */

