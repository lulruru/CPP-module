/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: russelenc <russelenc@student.42.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/17 11:46:48 by russelenc         #+#    #+#             */
/*   Updated: 2023/10/17 12:08:45 by russelenc        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

Zombie::Zombie(){
	std::cout << "Creating the zombie... " << std::endl;
}

Zombie::~Zombie(){
	
}


void Zombie::set_name(std::string str)
{
	this->name = str;
}

std::string Zombie::get_name() const{
	return this->name;
}

void Zombie::announce( void ){
	std::cout << this->name << ": BraiiiiiiinnnzzzZ..." << std::endl; 
}