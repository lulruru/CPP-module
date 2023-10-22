/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_replace.cpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: russelenc <russelenc@student.42.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/19 13:01:34 by russelenc         #+#    #+#             */
/*   Updated: 2023/10/22 21:39:12 by russelenc        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_replace.hpp"

ft_Replace::ft_Replace(std::string av) : _infile(av){
	this->_outfile = this->_infile + ".replace";
}

ft_Replace::~ft_Replace(){
	
}

void ft_Replace::ft_replace(std::string search, std::string replace){
	if(search.empty()){
			std::cerr << "Error : av[2] is empty"<< std::endl;
		exit(2);
	}
	std::ifstream file(this->_infile);
	if(!file.is_open())
	{
		std::cerr << "Error : Can't open infile"<< std::endl;
		exit(2);
	}
	std::ofstream outfile(this->_outfile);
	if(!outfile.is_open())
	{
		std::cerr << "Error : Can't open outfile"<< std::endl;
		exit(2);
	}
	std::string content;
	std::getline(file,content, '\0');
	file.close();
	size_t nfind = content.find(search);
	while(nfind != std::string::npos){
		content.erase(nfind, search.size());
		content.insert(nfind, replace);
		nfind = content.find(search);
	}
	outfile << content;
	outfile.close();
}
