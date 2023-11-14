/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   phonebook.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rencarna <rencarna@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/10 13:51:37 by russelenc         #+#    #+#             */
/*   Updated: 2023/11/14 16:00:46 by rencarna         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PHONEBOOK_HPP
# define PHONEBOOK_HPP

#include "contact.hpp"
#include <iostream>
#include <string>
#include <cstring>
#include <iomanip>
#include <sstream>

#define MAX 8

class Phonebook
{
private :
	Contact _contact[8];
	int	i;
public :
	Phonebook();
	~Phonebook();
	void menu();
	void AddContact();
	void search();
	void display_contact();
	// void contact_info();
	std::string _printcontact(std::string str) const;
	// void display_menu();
};
# endif