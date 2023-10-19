/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: russelenc <russelenc@student.42.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/17 11:37:58 by russelenc         #+#    #+#             */
/*   Updated: 2023/10/17 12:13:16 by russelenc        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

int main(void)
{
	std::string zimbie;
	std::string	rnd;
	
	std::cout << "Enter a name for the new Zombie" << std::endl;
	std::cout << "> ";
	std::cin >> zimbie;
	Zombie *zomb = newZombie(zimbie);
	zomb->announce();
	delete zomb;

	std::cout << "Enter a name for the randomChump" << std::endl;
	std::cout << "> ";
	std::cin >> rnd;
	randomChump(rnd);
}