/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: russelenc <russelenc@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/16 13:09:52 by russelenc          #+#    #+#             */
/*   Updated: 2024/02/16 13:09:52 by russelenc         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../incs/Data.hpp"
#include "../incs/Serialize.hpp"

int	main()
{
    Data    *a = new Data();
    std::cout << *a << std::endl;
    std::cout << a << std::endl;
    uintptr_t rawptr = Serialize::serialize(a);
    std::cout << "============================" << std::endl;
    Data *b = Serialize::deserialize(rawptr);
    std::cout << *b << std::endl;
    std::cout << b << std::endl;
    delete a;
    return (0);

}


