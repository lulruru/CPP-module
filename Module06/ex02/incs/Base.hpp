/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Base.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: russelenc <russelenc@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/16 16:11:45 by russelenc          #+#    #+#             */
/*   Updated: 2024/02/16 16:11:45 by russelenc         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once
#include <stdint.h>
#include <iostream>
#include <string>
#include <time.h>
#include <ctime>
#include <cstdlib>
class Base
{
	public:
    virtual ~Base(){};
};

class A : virtual public Base {};
class B : virtual public Base {};
class C : virtual public Base {};

Base    *generate(void);
void    identify(Base *p);
void    identify(Base& p);