/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fragtrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: russelenc <russelenc@student.42.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/19 13:37:50 by russelenc         #+#    #+#             */
/*   Updated: 2024/01/19 13:52:40 by russelenc        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FragTrap_HPP
#define FragTrap_HPP

#include "ClapTrap.hpp"

class FragTrap : public ClapTrap {
	public :
	// Constructeur
	FragTrap();
	FragTrap(const std::string& name);
	FragTrap(const FragTrap &og);
	~FragTrap();
	FragTrap& operator=(const FragTrap &og);
	// Fonction
	
	void attack(const std::string& target); 
	void takeDamage(unsigned int amount);
	void beRepaired(unsigned int amount);
	void highFivesGuys(void);
};

#endif