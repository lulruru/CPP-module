/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Span.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: russelenc <russelenc@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/22 13:33:00 by russelenc          #+#    #+#             */
/*   Updated: 2024/02/22 13:33:00 by russelenc         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../incs/Span.hpp"

/* ************************************************************************** */
/*                     Constructeurs & Destructeurs                   		  */
/* ************************************************************************** */

Span::Span() {

	std::cout <<  "Default Constructor called: Span"  << std::endl;
}

Span::Span(unsigned int n) : _maxsize(n) {
	if(_maxsize > _cont.max_size())
		throw std::runtime_error("parametre trop gros");
	std::cout <<  "Default Constructor called: Span"  << std::endl;
}


Span::Span(Span const &src) {
	(void)src;
	std::cout <<  "Copy Constructor called: Span"  << std::endl;
}

Span::~Span() {

	std::cout <<  "Destructor called: Span"  << std::endl;
}

/* ************************************************************************** */
/*                     Surcharges d'opérateurs                  		      */
/* ************************************************************************** */

Span&	Span::operator=(Span const &rhs) {
	if(this != &rhs)
	{
		_maxsize = rhs._maxsize;
		_cont = rhs._cont;
	}
	std::cout <<  "Assignment Operator called: Span"  << std::endl;
	return (*this);
}

void Span::addNumber(int n){
	if (_cont.size() == _maxsize)
		throw std::runtime_error("container est full");
	_cont.push_back(n);

};

void Span::addNumber(std::vector<int> n){
	if(_cont.size() + n.size() >= _maxsize)
	n.insert(_cont.end(), n.begin(), n.end());
};

int	Span::shortestSpan(){
	if(_cont.size() <= 1)
		throw std::runtime_error("Pas assez de nombres pour calculer la plus petite distance.");

	std::vector<int> sortedNumbers = _cont;
	std::sort(sortedNumbers.begin(), sortedNumbers.end());
	 int shortestDistance = sortedNumbers[1] - sortedNumbers[0];
	for (size_t i = 2; i < sortedNumbers.size(); ++i) {
        int currentDistance = sortedNumbers[i] - sortedNumbers[i - 1];
        if (currentDistance < shortestDistance)
            shortestDistance = currentDistance;
    }
	return shortestDistance;
};

int	Span::longestSpan(){
	if(_cont.size() <= 1)
		throw std::runtime_error("Pas assez de nombres pour calculer la plus longue distance.");
	std::vector<int> sortedNumbers = _cont;
	std::sort(sortedNumbers.begin(), sortedNumbers.end());
	int minElement = sortedNumbers.front();
    int maxElement = sortedNumbers.back();
    return maxElement - minElement;
};
