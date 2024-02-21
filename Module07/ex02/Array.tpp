/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Array.tpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: russelenc <russelenc@student.42.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/19 20:18:28 by rencarna          #+#    #+#             */
/*   Updated: 2024/02/21 11:22:15 by russelenc        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Array.hpp"
/* ************************************************************************** */
/*                     Constructeurs & Destructeurs                   		  */
/* ************************************************************************** */
template<typename T>
Array<T>::Array() : _len(0), array(NULL){

	std::cout << "Default Constructor called: Array"  << std::endl;
}

template<typename T>
Array<T>::Array(unsigned int n) :  _len(n) {
	array = new T[n];
	for (unsigned int i = 0; i < _len ; i ++)
		array[i] = T();
	std::cout << "Default Constructor called: Array"  << std::endl;
}

template<typename T>
Array<T>::Array(Array const &src) {
	array = new T[src._len];
	_len = src._len;
    for (size_t i = 0; i < _len; ++i) {
        array[i] = src.array[i];
    }
	std::cout << "Copy Constructor called: Array"  << std::endl;
}

template<typename T>
Array<T>::~Array() {
	if(array)
		delete [] array;
	std::cout << "Destructor called: Array" << std::endl;
}


/* ************************************************************************** */
/*                     Surcharges d'opérateurs                  		      */
/* ************************************************************************** */
template<typename T>
Array<T>&	Array<T>::operator=(Array const &rhs) {
	if(*this != rhs)
	{
		delete []array;
		_len = rhs.len;
		array = new T[_len];
		for(int i = 0 ; i < _len ; i++)
			array[i] = rhs.array[i];

	}
	std::cout <<  "Assignment Operator called: Array"  << std::endl;
	return (*this);
}

template<typename T>
T& Array<T>::operator[](unsigned int index) {
    if (index >= _len) {
		throw  std::out_of_range("Index out of range");
    }
    return array[index];
}


template<typename T>
void Array<T>::size(){
	return(_len);
}

