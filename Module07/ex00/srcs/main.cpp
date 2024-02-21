/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: russelenc <russelenc@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/16 16:29:57 by russelenc          #+#    #+#             */
/*   Updated: 2024/02/16 16:29:57 by russelenc         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../incs/whatever.hpp"

int main()
{
    int a = 12;
    int b = 46;

    std::cout << "min : " << min<int>(a,b) << std::endl;
    std::cout << "max : " << max<int>(a,b) << std::endl;
    std::cout << "a = " << a << " et b = " << b << std::endl;
    ::swap(a,b);
    std::cout << "swaaap" << std::endl;
    std::cout << "a = " << a << " et b = " << b << std::endl;
    std::cout << "=======================" << std::endl;
    std::string c = "chaine1";
    std::string d = "chaine2";
    std::cout << "c = " << c << ", d = " << d << std::endl;
    ::swap(c, d);
    std::cout << "c = " << c << ", d = " << d << std::endl;
    std::cout << "min( c, d ) = " << ::min( c, d ) << std::endl;
    std::cout << "max( c, d ) = " << ::max( c, d ) << std::endl;
}