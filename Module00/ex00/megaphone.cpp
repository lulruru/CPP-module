/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   megaphone.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: russelenc <russelenc@student.42.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/10 01:04:05 by russelenc         #+#    #+#             */
/*   Updated: 2023/10/10 12:59:20 by russelenc        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>

int main(int ac, char **av) 
{
	
	if(ac == 1)
	{
    	std::cout << "* LOUD AND UNBEARABLE FEEDBACK NOISE *" << std::endl;
		return(0);
	}
	for(int i = 1; av[i]; i++)
		for(int	y = 0; av[i][y]; y++)
			std::cout << (char)std::toupper(av[i][y]);
	std::cout << std::endl;
}
