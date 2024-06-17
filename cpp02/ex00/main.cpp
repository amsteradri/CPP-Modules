/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adgutier <adgutier@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/11 11:49:28 by adgutier          #+#    #+#             */
/*   Updated: 2024/06/17 18:10:56 by adgutier         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"

#include <iostream>
int main(void) 
{
    Fixed a;
    Fixed b(a);
    Fixed c;
    
    c = b;

    std::cout << "Initial values:" << std::endl;
    std::cout << "a: " << a.getRawBits() << std::endl;
    std::cout << "b: " << b.getRawBits() << std::endl;
    std::cout << "c: " << c.getRawBits() << std::endl;

    a.setRawBits(42);
    b.setRawBits(84);
    c.setRawBits(168);

    std::cout << "After setting values:" << std::endl;
    std::cout << "a: " << a.getRawBits() << std::endl;
    std::cout << "b: " << b.getRawBits() << std::endl;
    std::cout << "c: " << c.getRawBits() << std::endl;

    return 0;
}
