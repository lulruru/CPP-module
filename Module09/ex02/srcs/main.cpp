/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: russelenc <russelenc@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/06 14:23:40 by russelenc          #+#    #+#             */
/*   Updated: 2024/03/06 14:23:40 by russelenc         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../incs/PmergeMe.hpp"

int main(int ac, char **av) {

	try{
		if(ac < 2)
			throw std::invalid_argument("./PmergeME <set of number>");	
		PmergeMe a(ac, av);
	}catch(std::exception &e){
		std::cout << "Error : " << e.what() << std::endl;
 	}
    return 0;
}
