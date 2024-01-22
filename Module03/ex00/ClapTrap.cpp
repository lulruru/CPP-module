/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: russelenc <russelenc@student.42.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/13 07:40:30 by russelenc         #+#    #+#             */
/*   Updated: 2024/01/19 13:43:22 by russelenc        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"

ClapTrap::ClapTrap() : _name("ClapTrap"), _hitPoint(10), _energyPoint(10), _attackDamage(0){
	std::cout << "ClapTrap Constructor Called" << std::endl;
}

ClapTrap::ClapTrap(const ClapTrap &og){
	std::cout << "Copy Constructor Called" << std::endl;
	*this = og;
}

// • Name, which is passed as parameter to a constructor
// • Hit points (10), represent the health of the ClapTrap 
// • Energy points (10)
// • Attack damage (0)
ClapTrap& ClapTrap::operator=(const ClapTrap &og){
	this->_name = og._name;
	this->_hitPoint = og._hitPoint;
	this->_energyPoint = og._energyPoint;
	this->_attackDamage = og._attackDamage;
	return(*this);
}

ClapTrap::ClapTrap(const std::string& name) : _name(name), _hitPoint(10), _energyPoint(10), _attackDamage(0){
	std::cout << "Constructor Called" << std::endl;
};
ClapTrap::~ClapTrap(){
	std::cout << "Destructor Called" << std::endl;
}

//ClapTrap <name> attacks <target>, causing <damage> points of damage!
void ClapTrap::attack(const std::string& target){
	if(_energyPoint > 0)
	{
		if(_hitPoint > 0){
			std::cout << "Claptrap " << _name << " attacks " << target << " causing " << _attackDamage << " points of damage!" << std::endl;
			_energyPoint--;
			std::cout << "Claptrap " << _name << " have " << _energyPoint << " energy left !" << std::endl;
		}
		else
			std::cout << "Claptrap " << _name << " is dead :o RIP ;(" << std::endl;
	}
	else
		std::cout << "ClapTrap " << _name << " runs out of energy brother" << std::endl;
};

void ClapTrap::takeDamage(unsigned int amount){
	if(_hitPoint > 0)
	{	
		std::cout << "ClapTrap " << _name << " took " << amount << " amout of damage !" << std::endl;
		_hitPoint -= amount;
		std::cout << "ClapTrap " << _name << " has " << _hitPoint << "HP left !" << std::endl;
	}
	else
		std::cout << "bruh ClapTrap " << _name << " is dead already :(" << std::endl;
};

void ClapTrap::beRepaired(unsigned int amount){
	if(_energyPoint > 0)
	{
		if(_hitPoint > 0){
			std::cout << "Claptrap " << _name << " has a Chug Jug he healed " << amount << "HP" << std::endl;
			_energyPoint--;
			_hitPoint += amount;
			std::cout << "ClapTrap " << _name << " has " << _hitPoint << "HP now ! and have " << _energyPoint << " energy left !" << std::endl;
		}
		else
			std::cout << "Claptrap " << _name << " is dead he can't be healed HAHA :o RIP ;(" << std::endl;
	}
	else
		std::cout << "ClapTrap " << _name << " runs out of energy brother he need some mil" << std::endl;
};