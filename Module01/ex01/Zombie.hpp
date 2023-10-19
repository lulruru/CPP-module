/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: russelenc <russelenc@student.42.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/17 11:38:17 by russelenc         #+#    #+#             */
/*   Updated: 2023/10/19 11:31:52 by russelenc        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ZOMBIE_HPP
#define ZOMBIE_HPP


#include <iostream>
#include <string.h>

class Zombie{
	private :
	std::string name;
	
	public :
	Zombie();
	~Zombie();
	std::string get_name() const;
	void set_name(std::string str);
	void announce( void );
};

Zombie* zombieHorde( int N, std::string name );
#endif