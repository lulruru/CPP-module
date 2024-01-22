/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: russelenc <russelenc@student.42.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/13 07:40:26 by russelenc         #+#    #+#             */
/*   Updated: 2024/01/19 13:53:42 by russelenc        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"
#include "ScavTrap.hpp"
#include "FragTrap.hpp"

int main()
{
	ClapTrap tom("tom");
	ScavTrap alain("Alain");
	std::cout << std::endl;
	tom.attack("pere");
	tom.takeDamage(8);
	tom.beRepaired(1);
	std::cout << std::endl;
	alain.attack("verre");
	alain.takeDamage(8);
	alain.beRepaired(3);
	std::cout << std::endl;
	ScavTrap amer(alain);
	amer.attack("verre");
	amer.takeDamage(9);
	amer.beRepaired(4);
	std::cout << std::endl;
	ScavTrap biere = amer;
	biere.attack("verre");
	biere.takeDamage(1);
	biere.beRepaired(11);
	biere.guardGate();
	std::cout << std::endl;
	FragTrap titi("titi");
	titi.attack("bruh");
	titi.highFivesGuys();
}