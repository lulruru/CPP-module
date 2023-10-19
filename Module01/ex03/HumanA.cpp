/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanA.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: russelenc <russelenc@student.42.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/19 12:19:08 by russelenc         #+#    #+#             */
/*   Updated: 2023/10/19 12:43:26 by russelenc        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "HumanA.hpp"

HumanA::HumanA(std::string name, Weapon& weapon) : _weapon(&weapon), _name(name) {
	
}

HumanA::~HumanA(){
	
}

void HumanA::attack(){
	std::cout << this->_name << " attacks with their " << this->_weapon->getType() << std::endl;
}