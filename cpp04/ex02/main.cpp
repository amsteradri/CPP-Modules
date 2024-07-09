/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adgutier <adgutier@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/18 11:27:39 by adgutier          #+#    #+#             */
/*   Updated: 2024/01/18 14:28:23 by adgutier         ###   ########.fr       */
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
	// Esto dará error de compilación:
	// Animal animal;

	// Esto dará también error:
	// Animal *animal = new Animal();

	// Dan error ya que estamos instanciando una clase abstracta, tiene un método puro virtual
	// (no tiene implementación propia) y no se puede instanciar directamente.

	// Lo que si podemos hacer ahora es instanciar a sus clases derivadas que si tienen implementación:
	Animal *dog = new Dog();
	Animal *cat = new Cat();

	dog->makeSound();
	cat->makeSound();
	return (0);
}