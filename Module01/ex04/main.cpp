/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: russelenc <russelenc@student.42.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/19 12:51:32 by russelenc         #+#    #+#             */
/*   Updated: 2023/10/22 21:37:57 by russelenc        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_replace.hpp"

int main(int ac, char **av){
	(void)ac;
	if(ac != 4)
	{
		std::cout << "Error : Wrong number of argument" << std::endl;
		return(1);
	}
	ft_Replace replace(av[1]);
	replace.ft_replace(av[2], av[3]);
}
	// if(ac != 4)
		// std::cerr << "Wrong number of Argument" << std::endl;
	// std::ifstream file(av[1]);
	// std::string str;
	// std::string in = av[1];
	// std::ofstream outfile(in + ".replace");
	// while(std::getline(file, str)){
	// 	outfile << str << std::endl;
	// }
	// file.close();
	// outfile.close();