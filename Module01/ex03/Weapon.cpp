/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Weapon.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: russelenc <russelenc@student.42.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/19 12:10:43 by russelenc         #+#    #+#             */
/*   Updated: 2023/10/19 12:14:31 by russelenc        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Weapon.hpp"

Weapon::Weapon( std::string type) {
    this->setType(type);
}

Weapon::~Weapon() {
}

std::string& Weapon::getType(){
	return this->type;
}

void Weapon::setType(std::string typestr){
	this->type = typestr;
}