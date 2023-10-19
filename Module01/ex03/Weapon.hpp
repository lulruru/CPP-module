/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Weapon.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: russelenc <russelenc@student.42.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/19 12:08:21 by russelenc         #+#    #+#             */
/*   Updated: 2023/10/19 12:39:08 by russelenc        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef WEAPON_HPP
#define WEAPON_HPP

#include <iostream>
#include <string.h>

class Weapon{
private : 
	std::string type;
public :
	Weapon(std::string s);
    ~Weapon();
	std::string& getType();
	void setType(std::string typestr);	
};

#endif
