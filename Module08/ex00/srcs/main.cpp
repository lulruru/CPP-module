/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: russelenc <russelenc@student.42.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/21 16:45:18 by rencarna          #+#    #+#             */
/*   Updated: 2024/02/22 10:44:12 by russelenc        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../incs/easyfind.hpp"

int	main(int ac, char **av)
{
	if(ac ==2)
	{
		int	arg = atoi(av[1]);
		std::list<int> lol;
		for (int i = 10; i >= 0; i--)
			lol.push_back(i);
		try{
			easyfind(lol, arg);
		}
		catch(std::exception &e){
			std::cout << arg << " is not found " << std::endl;
		}
	}
}


