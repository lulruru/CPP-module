/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   phonebook.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: russelenc <russelenc@student.42.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/10 13:43:10 by russelenc         #+#    #+#             */
/*   Updated: 2023/10/16 20:40:58 by russelenc        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "phonebook.hpp"

Phonebook::Phonebook()
{
    this->i = 0;
    std::cout << "PhoneBook constructor called!" << std::endl;
}

Phonebook::~Phonebook()
{
    std::cout << "PhoneBook destructor called!" << std::endl;
}

void Phonebook::menu()
{
    std::cout << "|***********************Phonebook***********************|" << std::endl;
    std::cout << "|                        ADD                            |" << std::endl;
    std::cout << "|                        SEARCH                         |" << std::endl;
    std::cout << "|                        EXIT                           |" << std::endl;
    std::cout << "|*******************************************************|" << std::endl;
}

/* ◦ Un contact possède les champs suivants : first
 name (prénom), last name (nom de famille), nickname (surnom), phone number (numéro de téléphone),
  et darkest secret (son plus lourd secret). Les champs d’un contact enregistré ne peuvent être vides. */
  
void Phonebook::AddContact()
{
	this->_contact[i % 8].init();
	i++;
}
std::string Phonebook::_printcontact(std::string str) const{
	if(str.length() > 10)
	{
		std::string trunc = str.substr(0, 9) + ".";
		return trunc;
	}
	else
		return str;
}
/* ◦ Affiche les contacts enregistrés sous la forme d’une liste de 4 colonnes : index,
first name, last name et nickname. */
void Phonebook::display_contact()
{
    std::cout << "|####################SEARCH#################|" << std::endl;
    std::cout  << "|" << std::setw(10) << std::right << "Index" << "|";
    std::cout  << std::setw(10) << std::right << "First Name" << "|";
    std::cout  << std::setw(10) << std::right << "Last Name" << "|";
    std::cout  << std::setw(10) << std::right << "Nickname" << "|" << std::endl;
    for (int i = 0; i < 8; i++) {
        std::cout << "|" << std::setw(10) << std::right << i ;
        std::cout << "|" << std::setw(10) << std::right << _printcontact(_contact[i].get_first_name()) ;
        std::cout << "|" << std::setw(10) << std::right << _printcontact(_contact[i].get_last_name()) ;
        std::cout << "|" << std::setw(10) << std::right << _printcontact(_contact[i].get_nick_name()) << "|" << std::endl;
    }
    std::cout << "|###########################################|" << std::endl;
}

void Phonebook::search()
{
	display_contact();
	std::string str;
    std::getline(std::cin, str);
	if (str.empty()) {
		menu();
        return;
    }
	int input = -1;
    if (std::all_of(str.begin(), str.end(), ::isdigit)) {
        input = std::stoi(str);
    } else {
        std::cout << "Saisie invalide. Veuillez entrer un nombre entier." << std::endl;
    }
	if(input > 7)
	{
		std::cout << "Erreur de saisie, contact inexistant" << std::endl;
		search();
    }
	if(_contact[input].get_first_name().empty())
		return ;
	std::cout << "|#################-INFORMATION-###############|" << std::endl;
	std::cout << "First Name : " <<  _contact[input].get_first_name() << std::endl ;
    std::cout << "Last Name : " <<  _contact[input].get_last_name() << std::endl ;
    std::cout << "Nick Name : " << _contact[input].get_nick_name() << std::endl;
    std::cout << "Phone Number : " << _contact[input].get_phone_number() << std::endl;
    std::cout << "Darkest secret : " << _contact[input].get_darkest_secret() << std::endl;
}

int main()
{
	Phonebook Phonebook;
	Phonebook.menu();
	std::cout << "Appuyez sur Ctrl+L pour effacer l'écran et Ctrl+D pour quitter." << std::endl;
	std::cout << "> ";
	std::string s;
	
	while(getline(std::cin, s))
	{
		if (s.compare("EXIT") == 0)
			break ;
		if (s.compare("ADD") == 0)
			Phonebook.AddContact();
		else if (s.compare("SEARCH") == 0)
			Phonebook.search();
		else
			std::cout << "Erreur : Veuillez entrer un choix valide" << std::endl;
		std::cout << "> ";
	}
}

			// std::cout << "Are you sure you want to exit the phonebook [y/n]" << std::endl << "> ";
			// 	if(getline(std::cin, s)){
			// 		if(s.compare("y") == 0)
			// 			break;