/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   contact.hpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: russelenc <russelenc@student.42.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/10 13:57:50 by russelenc         #+#    #+#             */
/*   Updated: 2023/10/16 20:34:55 by russelenc        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CONTACT_HPP
# define CONTACT_HPP

#include <iostream>
#include <string>
#include <cstring>
#include <iomanip>
#include <csignal>
#include <ncurses.h>
class Contact
{
private :
	std::string first_name;
	std::string last_name;
	std::string nick_name;
	std::string phone_number;
	std::string darkest_secret;
	
public :
	Contact();
	~Contact();
	void init();
	std::string get_non_empty_info(const std::string& content);
    std::string get_numeric_info(const std::string& content);
	std::string get_first_name() const;
	std::string get_darkest_secret() const;
	std::string get_phone_number() const;
	std::string get_nick_name() const;
	std::string get_last_name() const;
};
# endif