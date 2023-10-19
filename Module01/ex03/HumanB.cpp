/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanB.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: russelenc <russelenc@student.42.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/19 12:28:55 by russelenc         #+#    #+#             */
/*   Updated: 2023/10/19 12:43:18 by russelenc        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "HumanB.hpp"

HumanB::HumanB(std::string name) : _name(name){
	this->_weapon = NULL;
}

HumanB::~HumanB(){
	
}

void HumanB::setWeapon(Weapon& weapon){
	this->_weapon = &weapon;
}

void HumanB::attack(){
	if(!this->_weapon)
		std::cout << this->_name << " attacks with no weapon" << std::endl;
	else
		std::cout << this->_name << " attacks with their " << this->_weapon->getType() << std::endl;
}