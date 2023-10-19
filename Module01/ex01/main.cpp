/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: russelenc <russelenc@student.42.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/17 11:37:58 by russelenc         #+#    #+#             */
/*   Updated: 2023/10/19 11:36:25 by russelenc        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

int main(void)
{
	size_t n;
	
	std::cout << "Enter the number of new Zombie" << std::endl;
	std::cout << "> ";
	std::cin >> n;
	// std::string *tab = new std::string[n];
	// for(size_t i = 0; i < n; i++)
	// {
	// 	std::cout << "Zombie number " << i+1 << " name :";
	// 	std::cin >> tab[i];
		
	// }
	// Zombie *horde = zombieHorde(n,tab);
	// for(size_t i = 0; i < n; i++)
	// {
	// 	horde[i].announce();
	// }
	Zombie *horde = zombieHorde(n,"Steve");
	for(size_t i = 0; i < n ; i++){
		horde[i].announce();
	}
	delete[] horde;
}