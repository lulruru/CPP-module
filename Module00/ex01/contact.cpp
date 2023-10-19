/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   contact.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: russelenc <russelenc@student.42.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/10 13:57:47 by russelenc         #+#    #+#             */
/*   Updated: 2023/10/16 16:39:50 by russelenc        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "contact.hpp"

Contact::Contact(/* args */)
{
}

Contact::~Contact()
{
}

/* ◦ Un contact possède les champs suivants : first
 name (prénom), last name (nom de famille), nickname (surnom), phone number (numéro de téléphone),
  et darkest secret (son plus lourd secret). Les champs d’un contact enregistré ne peuvent être vides. */
std::string Contact::get_first_name() const{
	return (this->first_name);
}
std::string Contact::get_last_name() const{
	return (this->last_name);
}
std::string Contact::get_nick_name() const{
	return (this->nick_name);
}
std::string Contact::get_phone_number() const{
	return (this->phone_number);
}
std::string Contact::get_darkest_secret() const{
	return (this->darkest_secret);
}

std::string Contact::get_non_empty_info(const std::string& content) {
    std::string input = "";
    bool err = true;
	
    do {
		
        std::cout << content << std::flush;
		err = false;
		if (!getline(std::cin, input)){
            if (std::cin.eof()) {
                std::cin.clear();
				exit(0);
            }
		}
        if (input.empty()) {
            std::cout << "ERROR: empty input" << std::endl;
            err = true; // Définissez le drapeau d'erreur à true en cas de champ vide
        }
    } while (err);
	std::cin.clear();
    return input;
}

std::string Contact::get_numeric_info(const std::string& content) {
    std::string input = "";
    bool err = false;
	
    do {
        err = false; // Réinitialisez le drapeau d'erreur
        std::cout << content << std::flush;
        if (!getline(std::cin, input)){
            if (std::cin.eof()) {
                std::cin.clear();
				exit(0);
            }
		}
        for (std::string::size_type i = 0; i < input.size(); i++) {
            if (!std::isdigit(input[i])) {
                err = true;
                std::cout << "ERROR: Phone number has a non-numeric character" << std::endl;
                break; // Sortez de la boucle dès qu'une erreur est détectée
            }
        }
        if (input.empty()) {
            std::cout << "ERROR: empty input" << std::endl;
            err = true; // Définissez le drapeau d'erreur à true en cas de champ vide
        }
    } while (err);
	std::cin.clear();
    return input;
}


void Contact::init() {
    this->first_name = this->get_non_empty_info("First Name > ");
    this->last_name = this->get_non_empty_info("Last Name > ");
    this->nick_name = this->get_non_empty_info("Nickname > ");
    this->phone_number = this->get_numeric_info("Phone number > ");
    this->darkest_secret = this->get_non_empty_info("Darkest secret > ");
}