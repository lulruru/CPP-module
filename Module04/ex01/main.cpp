/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: russelenc <russelenc@student.42.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/21 18:00:54 by russelenc         #+#    #+#             */
/*   Updated: 2024/01/31 14:11:15 by russelenc        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Dog.hpp"
#include "Cat.hpp"
#include "Animal.hpp"
#include "WrongAnimal.hpp"
#include "WrongCat.hpp"


int main()
{
	const Animal* kitcat = new Cat("croquette");
	const Animal* dog = new Dog("os dur");
    const Animal	**listAnimal = new const Animal*[10];
	std::cout << "\nDog thought " << dog->getIdea(8) << std::endl;
	std::cout << "Cat thought " << kitcat->getIdea(9) << "\n" << std::endl;
	
	delete kitcat;	
	delete dog;
	
	for (int i = 0; i < 10; i++)
	{
		if (i % 2)
			listAnimal[i] = new Dog();
		else
			listAnimal[i] = new Cat();
	}
	for (int i = 0; i < 10; i++){
		std::cout << i << " : ";
		listAnimal[i]->makeSound();
	}
	for (int i = 0; i < 10; i++)
		delete listAnimal[i];
	delete[]	listAnimal;
	return 0;
}