/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: russelenc <russelenc@student.42.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/21 18:01:01 by russelenc         #+#    #+#             */
/*   Updated: 2024/01/21 19:26:01 by russelenc        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CAT_HPP
#define CAT_HPP

#include "Animal.hpp"
class Cat : public Animal{
	public :
	Cat();
	Cat(const Cat &og);
	~Cat();
	Cat& operator=(const Cat& Cat);
	
	//FONCTIONS
	void makeSound() const;
};
#endif