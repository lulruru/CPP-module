/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   easyfind.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rencarna <rencarna@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/21 16:45:18 by rencarna          #+#    #+#             */
/*   Updated: 2024/02/21 18:20:56 by rencarna         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include <iostream>
#include <string>
#include <list>
#include <vector>
#include <exception>
#include <algorithm>

template<typename T>
void easyfind(T &container, int to_find)
{
	typename T::iterator it = std::find(container.begin(), container.end(), to_find);
	if(it != container.end())
		std::cout << to_find << " have been found" << std::endl;
	else
		throw std::exception();
}

