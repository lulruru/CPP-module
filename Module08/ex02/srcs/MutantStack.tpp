/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   MutantStack.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: russelenc <russelenc@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/22 14:39:10 by russelenc          #+#    #+#             */
/*   Updated: 2024/02/22 14:39:10 by russelenc         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../incs/MutantStack.hpp"

template < typename T>
MutantStack<T>::MutantStack() :  std::stack<T>(){

	std::cout <<  "Default Constructor called: MutantStack<T>"  << std::endl;
}

template < typename T>
MutantStack<T>::MutantStack(MutantStack<T> const &src) :  std::stack<T>(src) {

	std::cout <<  "Copy Constructor called: MutantStack<T>"  << std::endl;
}

template < typename T>
MutantStack<T>::~MutantStack() {

	std::cout <<  "Destructor called: MutantStack<T>"  << std::endl;
}

/* ************************************************************************** */
/*                     Surcharges d'opérateurs                  		      */
/* ************************************************************************** */
template < typename T>
MutantStack<T>&	MutantStack<T>::operator=(MutantStack<T> const &rhs) {
	if (this != rhs)
		this = std::stack<T>::operator=(rhs);
	return (*this);
}

template < typename T>
typename MutantStack<T>::iterator	MutantStack<T>::begin()
{
	return (this->c.begin());
};

template < typename T>
typename MutantStack<T>::iterator	MutantStack<T>::end()
{
	return (this->c.end());
};