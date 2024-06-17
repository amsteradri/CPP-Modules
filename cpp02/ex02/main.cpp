/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adgutier <adgutier@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/11 11:49:28 by adgutier          #+#    #+#             */
/*   Updated: 2024/06/17 18:53:06 by adgutier         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"

int main( void )
{
	Fixed a;
	Fixed const b( Fixed( 5 ) * Fixed( 2 ) );

	std::cout << "a: " << a << std::endl;
	std::cout << "++a: " << ++a << std::endl;
	std::cout << "a: " << a << std::endl;
	std::cout << "a++: " << a++ << std::endl;
	std::cout << "a: " << a << std::endl;
	std::cout << "b: " << b << std::endl;
	std::cout << "max: " << Fixed::max( a, b ) << std::endl;
	std::cout << "min: " << Fixed::min( a, b ) << std::endl;

	Fixed d(8);
	Fixed c(2);
	std::cout << "d/c: " << d/c << std::endl;
	std::cout << "d*c: " << d*c << std::endl;
	std::cout << "d+c: " << d+c << std::endl;
	std::cout << "d-c: " << d-c << std::endl;
	
	if (a != c)
		std::cout << "a != c " << std::endl;
	if (!(a == c))
		std::cout << "!(a == c) " << std::endl;
	
	return 0;
}
