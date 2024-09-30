/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adgutier <adgutier@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/02 19:55:49 by adgutier          #+#    #+#             */
/*   Updated: 2024/09/02 19:55:49 by adgutier         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Array.hpp"
#include <iostream>
#include <cstdlib>

int	main()
{
	Array<int>			intArray;
	Array<int>			copy(5);
	Array<std::string>	strArray(5);

	for (int i = 0; i < 5; i++)
		copy[i] = rand() % 100;

	std::cout << "intArray size: " << intArray.size() << std::endl;
	std::cout << "strArray size: " << strArray.size() << std::endl;
	std::cout << "copy size: " << copy.size() << std::endl;

	std::cout << "\nAsignamos copy a intarray" << std::endl;
	intArray = copy;
	std::cout << intArray << std::endl;

	std::cout << "\nRellenamos strarray" << std::endl;
	strArray[0] = "hola1";
	strArray[1] = "hola2";
	strArray[2] = "hola3";
	strArray[3] = "hola4";
	strArray[4] = "hola5";
	std::cout << strArray << std::endl;

	std::cout << "\nAhora probamos fuera de límites de intarray" <<std::endl;
	try
	{
		std::cout << intArray[59] << std::endl;
	}
	catch (std::exception &e)
	{
		std::cout << "59: " << e.what() << std::endl;
	}

	try
	{
		std::cout << intArray[-3] << std::endl;
	}
	catch (std::exception &e)
	{
		std::cout << "-3: " << e.what() << std::endl;
	}

	return (0);
}