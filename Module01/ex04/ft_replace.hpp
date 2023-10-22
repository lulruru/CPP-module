/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_replace.hpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: russelenc <russelenc@student.42.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/19 12:53:04 by russelenc         #+#    #+#             */
/*   Updated: 2023/10/22 21:34:59 by russelenc        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_REPLACE_HPP
#define FT_REPLACE_HPP

#include <iostream>
#include <string.h>
#include <fstream>

class ft_Replace{
private:
	std::string _outfile;
	std::string _infile;
public:
	ft_Replace(std::string av);
	~ft_Replace();
	void ft_replace(std::string search, std::string replace);
};
#endif
