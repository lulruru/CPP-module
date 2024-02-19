/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: russelenc <russelenc@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/16 16:33:01 by russelenc          #+#    #+#             */
/*   Updated: 2024/02/16 16:33:01 by russelenc         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../incs/iter.hpp"

void	to_lower(int &i)
{
	i = tolower(i);
}

void	to_upper(int &i)
{
	i = toupper(i);
}
void increment(int &i)
{
	i++;
}
void decrement(int &i)
{
	i--;
}

int	main()
{
	char		a[] = {'a', 'b', 'c'};
	char		b[] = {'A', 'B', 'C'};
	// int		c[] = {1, 2, 3};
	char c;
	size_t i = 0;
	std::cout <<  "\n==============================="  << std::endl;
	std::cout <<  "        b[] BEFORE            "  << std::endl;
	for (i = 0; i < sizeof(b) / sizeof(b[0]); i++) {
		c = b[i];
		std::cout << c ;
		std::cout << std::endl;
	}
	std::cout <<  "\n==============================="  << std::endl;
	std::cout <<  "        b[]AFTER            "  << std::endl;
	::iter(b, sizeof(b) / sizeof(b[0]), &to_lower);
	for (i = 0; i < sizeof(b) / sizeof(b[0]); i++) {
		c = b[i];
		std::cout << c ;
		std::cout << std::endl;
	}
	std::cout <<  "\n==============================="  << std::endl;
	std::cout <<  "        a[] BEFORE            "  << std::endl;
	for (i = 0; i < sizeof(a) / sizeof(a[0]); i++) {
		c = a[i];
		std::cout << c ;
		std::cout << std::endl;
	}
	std::cout <<  "\n==============================="  << std::endl;
		std::cout <<  "        b[]AFTER            "  << std::endl;
	::iter(a, sizeof(a) / sizeof(a[0]), &to_upper);
	for (i = 0; i < sizeof(a) / sizeof(a[0]); i++) {
		c = a[i];
		std::cout << c ;
		std::cout << std::endl;
	}
}

