/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fragtrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: russelenc <russelenc@student.42.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/19 13:37:55 by russelenc         #+#    #+#             */
/*   Updated: 2024/01/19 13:53:53 by russelenc        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "FragTrap.hpp"

FragTrap::FragTrap() : ClapTrap(){
	std::cout << "ScaveTrap Constructor Called" << std::endl;
	this->_name = "FragTrap";
	this->_hitPoint = 100;
	this->_energyPoint = 100;
	this->_attackDamage = 30;
}

FragTrap::FragTrap(const FragTrap &og) : ClapTrap(og){
	std::cout << "ScaveTrap Copy Constructor Called" << std::endl;
	*this = og;
}

// • Name, which is passed as parameter to a constructor
// • Hit points (10), represent the health of the FragTrap 
// • Energy points (10)
// • Attack damage (0)

FragTrap& FragTrap::operator=(const FragTrap &og){
	_name = og._name;
	_hitPoint = og._hitPoint;
	_energyPoint = og._energyPoint;
	_attackDamage = og._attackDamage;
	return(*this);
}

FragTrap::FragTrap(const std::string& name) : ClapTrap(name){
	std::cout << "ScaveTrap Constructor Called" << std::endl;
	this->_name = name;
	this->_hitPoint = 100;
	this->_energyPoint = 100;
	this->_attackDamage = 30;
};

FragTrap::~FragTrap(){
	std::cout << "ScaveTrap Destructor Called" << std::endl;
}

//FragTrap <name> attacks <target>, causing <damage> points of damage!
void FragTrap::attack(const std::string& target){
	if(_energyPoint > 0)
	{
		if(_hitPoint > 0){
			std::cout << "FragTrap " << _name << " attacks " << target << " causing " << _attackDamage << " points of damage!" << std::endl;
			_energyPoint--;
			std::cout << "FragTrap " << _name << " have " << _energyPoint << " energy left !" << std::endl;
		}
		else
			std::cout << "FragTrap " << _name << " is dead :o RIP ;(" << std::endl;
	}
	else
		std::cout << "FragTrap " << _name << " runs out of energy brother" << std::endl;
};

void FragTrap::takeDamage(unsigned int amount){
	if(_hitPoint > 0)
	{	
		std::cout << "FragTrap " << _name << " took " << amount << " amout of damage !" << std::endl;
		_hitPoint -= amount;
		std::cout << "FragTrap " << _name << " has " << _hitPoint << "HP left !" << std::endl;
	}
	else
		std::cout << "bruh FragTrap " << _name << " is dead already :(" << std::endl;
};

void FragTrap::beRepaired(unsigned int amount){
	if(_energyPoint > 0)
	{
		if(_hitPoint > 0){
			std::cout << "FragTrap " << _name << " has a Chug Jug he healed " << amount << "HP" << std::endl;
			_energyPoint--;
			_hitPoint += amount;
			std::cout << "FragTrap " << _name << " has " << _hitPoint << "HP now ! and have " << _energyPoint << " energy left !" << std::endl;
		}
		else
			std::cout << "FragTrap " << _name << " is dead he can't be healed HAHA :o RIP ;(" << std::endl;
	}
	else
		std::cout << "FragTrap " << _name << " runs out of energy brother he need some mil" << std::endl;
};


void FragTrap::highFivesGuys(void){
	std::cout << "FragTrap " << _name << " HighFive !" << std::endl;
}