/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: russelenc <russelenc@student.42.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/13 08:55:56 by russelenc         #+#    #+#             */
/*   Updated: 2024/01/13 09:33:29 by russelenc        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScavTrap.hpp"

ScavTrap::ScavTrap() : ClapTrap(){
	std::cout << "ScaveTrap Constructor Called" << std::endl;
}

ScavTrap::ScavTrap(const ScavTrap &og) : ClapTrap(og){
	std::cout << "ScaveTrap Copy Constructor Called" << std::endl;
	*this = og;
}

// • Name, which is passed as parameter to a constructor
// • Hit points (10), represent the health of the ScavTrap 
// • Energy points (10)
// • Attack damage (0)

ScavTrap& ScavTrap::operator=(const ScavTrap &og){
	_name = og._name;
	_hitPoint = og._hitPoint;
	_energyPoint = og._energyPoint;
	_attackDamage = og._attackDamage;
	return(*this);
}

ScavTrap::ScavTrap(const std::string& name) : ClapTrap(name){
	std::cout << "ScaveTrap Constructor Called" << std::endl;
	this->_name = name;
	this->_hitPoint = 100;
	this->_energyPoint = 50;
	this->_attackDamage = 20;
};

ScavTrap::~ScavTrap(){
	std::cout << "ScaveTrap Destructor Called" << std::endl;
}

//ScavTrap <name> attacks <target>, causing <damage> points of damage!
void ScavTrap::attack(const std::string& target){
	if(_energyPoint > 0)
	{
		if(_hitPoint > 0){
			std::cout << "ScavTrap " << _name << " attacks " << target << " causing " << _attackDamage << " points of damage!" << std::endl;
			_energyPoint--;
			std::cout << "ScavTrap " << _name << " have " << _energyPoint << " energy left !" << std::endl;
		}
		else
			std::cout << "ScavTrap " << _name << " is dead :o RIP ;(" << std::endl;
	}
	else
		std::cout << "ScavTrap " << _name << " runs out of energy brother" << std::endl;
};

void ScavTrap::takeDamage(unsigned int amount){
	if(_hitPoint > 0)
	{	
		std::cout << "ScavTrap " << _name << " took " << amount << " amout of damage !" << std::endl;
		_hitPoint -= amount;
		std::cout << "ScavTrap " << _name << " has " << _hitPoint << "HP left !" << std::endl;
	}
	else
		std::cout << "bruh ScavTrap " << _name << " is dead already :(" << std::endl;
};

void ScavTrap::beRepaired(unsigned int amount){
	if(_energyPoint > 0)
	{
		if(_hitPoint > 0){
			std::cout << "ScavTrap " << _name << " has a Chug Jug he healed " << amount << "HP" << std::endl;
			_energyPoint--;
			_hitPoint += amount;
			std::cout << "ScavTrap " << _name << " has " << _hitPoint << "HP now ! and have " << _energyPoint << " energy left !" << std::endl;
		}
		else
			std::cout << "ScavTrap " << _name << " is dead he can't be healed HAHA :o RIP ;(" << std::endl;
	}
	else
		std::cout << "ScavTrap " << _name << " runs out of energy brother he need some mil" << std::endl;
};

void ScavTrap::guardGate(){
	std::cout << "ScavTrap " << _name << " is now in guardGate mode youhou he is super fort now" << std::endl;
};