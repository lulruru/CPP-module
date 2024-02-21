/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   whatever.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: russelenc <russelenc@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/16 16:29:57 by russelenc          #+#    #+#             */
/*   Updated: 2024/02/16 16:29:57 by russelenc         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include <iostream>
#include <string>

template< typename T >
void    swap(T& x, T& y){
    T   tmp;
    tmp = x;
    x = y;
    y = tmp;
}

template< typename T >
T       min(const T &x, const T &y) 
{
    return (x < y ? x : y);
}

template< typename T >
T       max(const T &x, const T &y)
{
    return (x > y ? x : y);
}


