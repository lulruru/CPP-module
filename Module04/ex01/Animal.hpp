/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: russelenc <russelenc@student.42.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/21 18:01:05 by russelenc         #+#    #+#             */
/*   Updated: 2024/01/31 13:59:38 by russelenc        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ANIMAL_HPP
#define ANIMAL_HPP

#include <iostream>
#include <string>
class Animal {
	protected :
	std::string type;
	
	public :
	Animal();
	Animal(std::string _type);
	Animal(const Animal &og);
	virtual ~Animal();
	Animal& operator=(const Animal& Animal);
	
	//FONCTIONS
	virtual void makeSound() const;
	virtual std::string		getIdea(int index) const;
	virtual std::string getType() const;
};
#endif