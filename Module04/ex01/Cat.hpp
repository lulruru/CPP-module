/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: russelenc <russelenc@student.42.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/21 18:01:01 by russelenc         #+#    #+#             */
/*   Updated: 2024/01/31 14:07:25 by russelenc        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CAT_HPP
#define CAT_HPP

#include "Animal.hpp"
#include "Brain.hpp"

class Cat : public Animal{
	private:
	Brain*	_brain;
	
	public :
	Cat();
	Cat(std::string ideas);
	Cat(const Cat &og);
	~Cat();
	Cat& operator=(const Cat& Cat);
	std::string		getIdea(int index) const;

	//FONCTIONS
	void makeSound() const;
};
#endif