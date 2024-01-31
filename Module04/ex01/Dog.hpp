/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: russelenc <russelenc@student.42.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/21 18:00:57 by russelenc         #+#    #+#             */
/*   Updated: 2024/01/31 14:07:46 by russelenc        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef DOG_HPP
#define DOG_HPP

#include "Animal.hpp"
#include "Brain.hpp"

class Dog : public Animal{
	private:
	Brain*	_brain;
	
	public :
	Dog();
	Dog(std::string type);
	Dog(const Dog &og);
	~Dog();
	Dog& operator=(const Dog& dog);
	std::string		getIdea(int index) const;

	//FONCTIONS
	void makeSound() const;
};
#endif