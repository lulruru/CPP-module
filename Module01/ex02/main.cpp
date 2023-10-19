/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: russelenc <russelenc@student.42.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/19 11:43:16 by russelenc         #+#    #+#             */
/*   Updated: 2023/10/19 12:00:59 by russelenc        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <string.h>

int main(void){
	std::string str = "HI THIS IS BRAIN";
	std::string *stringPTR = &str;
	std::string &stringREF = str;
	
	std::cout << "----ADRESS----"<< std::endl;
	std::cout << "String Adresse : " << &str << std::endl;
	std::cout << "String pointer Adresse : " << stringPTR << std::endl;
	std::cout << "String reference Adresse : " << &stringREF << std::endl;
	std::cout << std::endl;
	std::cout << "----VALUE----"<< std::endl;
	std::cout << "String value : " << str << std::endl;
	std::cout << "String pointer value : " << *stringPTR << std::endl;
	std::cout << "String reference value : " << stringREF << std::endl;

}