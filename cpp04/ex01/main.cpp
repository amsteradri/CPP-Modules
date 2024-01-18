/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adgutier <adgutier@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/18 11:27:39 by adgutier          #+#    #+#             */
/*   Updated: 2024/01/18 14:22:19 by adgutier         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Dog.hpp"
#include "Cat.hpp"
#include "Wrong.hpp"
#include "Animal.hpp"
#include <cstdlib> 

// void leaks(void)
// 	{
// 		system("leaks -q animal");
// 	}

int main()
{
	// const Animal* j = new Dog();
	// const Animal* i = new Cat();
	// delete j;//should not create a leak
	// delete i;
	const Animal* animals[4] = { new Dog(), new Dog(), new Cat(), new Cat() };
		for ( int i = 0; i < 4; i++ ) {
			delete animals[i];
		}
	return 0;
}
