/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Array.tpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rencarna <rencarna@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/19 20:18:28 by rencarna          #+#    #+#             */
/*   Updated: 2024/02/20 19:40:32 by rencarna         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Array.hpp"
/* ************************************************************************** */
/*                     Constructeurs & Destructeurs                   		  */
/* ************************************************************************** */
template<typename T>
Array<T>::Array() : _len(0), array = (nullptr){

	std::cout << "Default Constructor called: Array"  << std::endl;
}

template<typename T>
MyArray<T>::Array(unsigned int n) :  _len(n) {
	array = new T[_len];
	for (int i = 0; i < len ; i ++)
		array[i] = T();
	std::cout << "Default Constructor called: Array"  << std::endl;
}

template<typename T>
MyArray<T>::Array(Array const &src) {
	array = new T[size];
    for (size_t i = 0; i < size; ++i) {
        array[i] = src.array[i];
    }
	std::cout << "Copy Constructor called: Array"  << std::endl;
}

template<typename T>
MyArray<T>::~Array() {
	if(array)
		delete [] array;
	std::cout << "Destructor called: Array" << std::endl;
}


/* ************************************************************************** */
/*                     Surcharges d'opérateurs                  		      */
/* ************************************************************************** */
template<typename T>
Array&	MyArray<T>::operator=(Array const &rhs) {
	if(*this != rhs)
	{
		delete array[];
		_len = rhs.len;
		array = new len;
		for(int i = 0 ; i < len ; i++)
			array[i] = rhs.array[i]

	}
	std::cout <<  "Assignment Operator called: Array"  << std::endl;
	return (*this);
}

template<typename T>
T& Array<T>::operator[](size_t index) {
    if (index >= size) {
		throw Array<T>::WrongIndex();
    }
    return array[index];
}

template<typename T>
const char *Array<T>::WrongIndex::what() const throw() {

	return ("INVALID INDEX");
}
template<typename T>
void Array<T>::size(){
	return(_len);
}

