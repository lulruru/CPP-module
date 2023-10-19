/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanA.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: russelenc <russelenc@student.42.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/19 12:15:22 by russelenc         #+#    #+#             */
/*   Updated: 2023/10/19 12:29:31 by russelenc        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef HUMANA_HPP
#define HUMANA_HPP

#include <iostream>
#include <string.h>
#include "Weapon.hpp"
class HumanA{
private : 
	Weapon* _weapon;
	std::string _name;
public :
	HumanA(std::string name, Weapon& weapon);
	~HumanA();
	void attack();
};
#endif
