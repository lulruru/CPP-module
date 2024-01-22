/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: russelenc <russelenc@student.42.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/13 08:55:54 by russelenc         #+#    #+#             */
/*   Updated: 2024/01/13 09:30:53 by russelenc        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SCAVTRAP_HPP
#define SCAVTRAP_HPP

#include "ClapTrap.hpp"

class ScavTrap : public ClapTrap {
	public :
	// Constructeur
	ScavTrap();
	ScavTrap(const std::string& name);
	ScavTrap(const ScavTrap &og);
	~ScavTrap();
	ScavTrap& operator=(const ScavTrap &og);
	// Fonction
	
	void attack(const std::string& target); 
	void takeDamage(unsigned int amount);
	void beRepaired(unsigned int amount);
	void guardGate();
};

#endif