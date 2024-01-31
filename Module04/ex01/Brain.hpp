/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Brain.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: russelenc <russelenc@student.42.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/31 13:37:30 by russelenc         #+#    #+#             */
/*   Updated: 2024/01/31 13:58:56 by russelenc        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef BRAIN_HPP
#define BRAIN_HPP

#include <iostream>
#include "Animal.hpp"

class Brain {

public:

	Brain();
	Brain(Brain const & src);
	Brain(std::string idea);
	virtual ~Brain();

	Brain & operator=( Brain const & rhs );
	std::string	getIdea(int index) const;

private:
	std::string _ideas[100];

};
#endif