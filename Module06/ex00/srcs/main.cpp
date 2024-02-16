/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: russelenc <russelenc@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/08 00:04:04 by russelenc          #+#    #+#             */
/*   Updated: 2024/02/08 00:04:04 by russelenc         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../incs/ScalarConverter.hpp"

int	main()
{
	std::string	input;
	
	while (1)
	{
		std::cout << "Enter input: " ;
		std::getline(std::cin,input);
		if (std::cin.eof() || input.empty())
		{
			std::cout << std::endl << "CTL-D received" << std::endl 
				<< "Programe will close" << std::endl;
			return (0);
		}
		ScalarConverter::convert(input);
		std::cout << "================" << std::endl;
	}
	return (0);
}


