/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: russelenc <russelenc@student.42.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/22 23:02:17 by russelenc         #+#    #+#             */
/*   Updated: 2023/10/23 00:30:34 by russelenc        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Harl.hpp"

int main(void)
{
	Harl harl;

	std::cout << "type : DEBUG , INFO, WARNING, ERROR" << std::endl;
	while(1){
		std::cout << "> ";
		std::string input;
		std::cin >> input;
		if(input.empty())
			exit(1);
		harl.complain(input);
	}
}