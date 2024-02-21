/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rencarna <rencarna@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/21 16:45:18 by rencarna          #+#    #+#             */
/*   Updated: 2024/02/21 18:23:35 by rencarna         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../incs/easyfind.hpp"

int	main(int ac, char **av)
{
	(void)ac;
	int	arg = atoi(av[1]);
	std::list<int> lol;
	for (int i = 10; i >= 0; i--)
		lol.push_back(i);
	try{
		easyfind(lol, arg);
	}
	catch(std::exception &e){
		
	}
}


