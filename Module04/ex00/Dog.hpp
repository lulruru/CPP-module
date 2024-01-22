/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: russelenc <russelenc@student.42.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/21 18:00:57 by russelenc         #+#    #+#             */
/*   Updated: 2024/01/21 19:26:13 by russelenc        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef DOG_HPP
#define DOG_HPP

#include "Animal.hpp"
class Dog : public Animal{
	public :
	Dog();
	Dog(const Dog &og);
	~Dog();
	Dog& operator=(const Dog& dog);

	//FONCTIONS
	void makeSound() const;
};
#endif