/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   iter.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: russelenc <russelenc@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/16 16:33:01 by russelenc          #+#    #+#             */
/*   Updated: 2024/02/16 16:33:01 by russelenc         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include <iostream>
#include <string>

template < typename T >
void	iter(T *addr, size_t length, void (*foo)(T &))
{
	if (!addr)
	{
		std::cerr << "Array is a pointer null" << std::endl;
		return ;
	}
	for (size_t i = 0; i < length; ++i)
		foo(addr[i]);
};