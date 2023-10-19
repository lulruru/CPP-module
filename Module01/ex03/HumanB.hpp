/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanB.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: russelenc <russelenc@student.42.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/19 12:29:35 by russelenc         #+#    #+#             */
/*   Updated: 2023/10/19 12:35:36 by russelenc        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef HUMANB_HPP
#define HUMANB_HPP

#include <iostream>
#include <string.h>
#include "Weapon.hpp"

class HumanB{
private : 
	Weapon* _weapon;
	std::string _name;
public :
	HumanB(std::string name);
	~HumanB();
	void attack();
	void setWeapon(Weapon& weapon);
};
#endif