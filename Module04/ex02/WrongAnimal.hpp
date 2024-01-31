/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongAnimal.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: russelenc <russelenc@student.42.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/21 18:00:47 by russelenc         #+#    #+#             */
/*   Updated: 2024/01/31 13:31:22 by russelenc        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef WRONGANIMAL_HPP
#define WRONGANIMAL_HPP

#include <iostream>
#include <string>

class WrongAnimal {
	protected :
	std::string type;
	
	public :
	WrongAnimal();
	WrongAnimal(std::string _type);
	WrongAnimal(const WrongAnimal &og);
	~WrongAnimal();
	WrongAnimal& operator=(const WrongAnimal& WrongAnimal);
	
	//FONCTIONS
	void makeSound() const;
	std::string getType() const;
};

#endif