/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongCat.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: russelenc <russelenc@student.42.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/21 18:00:40 by russelenc         #+#    #+#             */
/*   Updated: 2024/01/31 13:32:34 by russelenc        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef WRONGCAT_HPP
#define WRONGCAT_HPP

#include <iostream>
#include "WrongAnimal.hpp"

class WrongCat : public WrongAnimal {

public:

	WrongCat();
	WrongCat(WrongCat const & src);
	WrongCat(std::string type);
	~WrongCat();

	WrongCat 		&operator=( WrongCat const & rhs );

	std::string		getType(void) const;
	void			makeSound() const;

private:
	std::string		_type;
};
#endif