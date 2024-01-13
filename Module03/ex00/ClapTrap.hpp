/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: russelenc <russelenc@student.42.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/13 07:40:32 by russelenc         #+#    #+#             */
/*   Updated: 2024/01/13 08:31:40 by russelenc        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CLAPTRAP_HPP
#define CLAPTRAP_HPP

#include <string>
#include <iostream>

// It will be called ClapTrap and will have the following private attributes initialized to the values specified in brackets:
// • Name, which is passed as parameter to a constructor
// • Hit points (10), represent the health of the ClapTrap 
// • Energy points (10)
// • Attack damage (0)

//  public member functions so the ClapTrap looks more realistic:
// • void attack(const std::string& target); 
// • void takeDamage(unsigned int amount);
// • void beRepaired(unsigned int amount);

class ClapTrap {
	private : 
	std::string _name;
	int _hitPoint;
	int _energyPoint;
	int _attackDamage;
	
	public :
	// Constructeur
	ClapTrap();
	ClapTrap(const std::string& name);
	ClapTrap(const ClapTrap &og);
	~ClapTrap();

	ClapTrap& operator=(const ClapTrap &og);
	
	// Fonction
	
	void attack(const std::string& target); 
	void takeDamage(unsigned int amount);
	void beRepaired(unsigned int amount);
};

#endif