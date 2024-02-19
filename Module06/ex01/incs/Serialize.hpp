/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Serialize.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: russelenc <russelenc@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/16 13:11:37 by russelenc          #+#    #+#             */
/*   Updated: 2024/02/16 13:11:37 by russelenc         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include <iostream>
#include <string>
#include "Data.hpp"
#include <stdint.h>
class Serialize
{
	public:

	// Constructeurs & Destructeurs
    Serialize();
    Serialize(Serialize const &src);
    ~Serialize();
    static uintptr_t    serialize(Data* ptr);
    static Data*        deserialize(uintptr_t raw);
    Serialize& operator=(Serialize const &rhs);
	private:
};

