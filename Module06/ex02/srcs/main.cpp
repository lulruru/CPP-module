/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: russelenc <russelenc@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/16 16:11:45 by russelenc          #+#    #+#             */
/*   Updated: 2024/02/16 16:11:45 by russelenc         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../incs/Base.hpp"

int main()
{
    Base	*base1 = generate();
	Base	*base2 = generate();
	Base	*base3 = generate();

    identify(base1);
	identify(base2);
	identify(base3);
	std::cout << "=================" << std::endl;
    identify(*base1);
	identify(*base2);
	identify(*base3);
    
    delete base1;
    delete base2;
    delete base3;
}

