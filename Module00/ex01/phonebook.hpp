/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   phonebook.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: russelenc <russelenc@student.42.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/10 13:51:37 by russelenc         #+#    #+#             */
/*   Updated: 2023/10/16 16:51:28 by russelenc        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PHONEBOOK_HPP
# define PHONEBOOK_HPP

#include "contact.hpp"
#include <iostream>
#include <string>
#include <cstring>
#include <iomanip>

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