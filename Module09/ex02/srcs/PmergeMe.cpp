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
	long long vector_time;
	long long deque_time;
	std::vector<int> vector_sorted;
	timeval start_time, end_time;
	for(int i = 1; i < ac; i++)
	{
		char *endptr;
		n = std::strtol(av[i], &endptr, 10);
		if(*endptr != '\0' || n < 0)
			throw std::invalid_argument("Bad argument");
		else{
			_vectorArg.push_back(n);
			_dequeArg.push_back(n);
		}
	}
	print_container("Before : ", _vectorArg);
    gettimeofday(&start_time, NULL);
	sort_vector(_vectorArg);
	gettimeofday(&end_time, NULL);
 	print_container("After : ", _vectorArg);
	vector_time = (end_time.tv_sec - start_time.tv_sec) * 1000000LL + (end_time.tv_usec - start_time.tv_usec);
	gettimeofday(&start_time, NULL);
	sort_vector(_dequeArg);
	gettimeofday(&end_time, NULL);
	deque_time = (end_time.tv_sec - start_time.tv_sec) * 1000000LL + (end_time.tv_usec - start_time.tv_usec);
	std::cout << "Time to process a range of " << _vectorArg.size() << " elements with std::vector : " << vector_time << " us" << std::endl;
	std::cout << "Time to process a range of " << _dequeArg.size() << " elements with std::deque : " << deque_time << " us" << std::endl;


}


PmergeMe::PmergeMe(PmergeMe const &src) {
	(void)src;
	std::cout <<  "Copy Constructor called: PmergeMe"  << std::endl;
}

PmergeMe::~PmergeMe() {

	std::cout <<  "Destructor called: PmergeMe"  << std::endl;
}

/* ************************************************************************** */
/*                     Surcharges d'opérateurs                  		      */
/* ************************************************************************** */

PmergeMe&	PmergeMe::operator=(PmergeMe const &rhs) {
	(void)rhs;
	std::cout <<  "Assignment Operator called: PmergeMe"  << std::endl;
	return (*this);
}

template <typename cont>
void	PmergeMe::DichotomieInsert(cont &container, int value) {

	int	low = 0;
	int	high = container.size() - 1;

	while (low <= high)
	{
		int mid = low + (high - low) / 2;
		if (container[mid] == value)
			return ;
		else if (container[mid] < value)
			low = mid + 1;
		else
			high = mid - 1;
	}
	container.insert(container.begin() + low, value);
}

template< typename T >
void PmergeMe::print_container(const std::string &str, T &cont) {
	std::cout << str;
	for(typename T::iterator it = cont.begin(); it != cont.end(); it++){
		std::cout << *it;
		if(it != cont.end() - 1)
			std::cout << ", ";			
	}  
	std::cout <<std::endl;
}

template<typename Container>
void PmergeMe::sort_vector(Container& container) {
    
	Container main;
	Container pend;

	for(typename Container::iterator it = container.begin() ; it < container.end() - 1 ; it += 2)
	{
		if(*it > *(it + 1))
			std::swap(*it, *(it+1));
	}
	if(container.size() <= 2)
		return;
	for(typename Container::iterator it = container.begin() ; it < container.end() ; it += 2)
	{
		pend.push_back(*it);
		if(it < container.end() - 1)
			main.push_back(*(it + 1));
	}

	sort_vector(main);
	size_t pend_main = pend.size();
	for (size_t index = 0; index < pend_main; index++)
		DichotomieInsert(main, pend[index]);
	container = main;
}

void PmergeMe::sort_deque()
{}
	
