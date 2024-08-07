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

// int main()
// {
// 	Animal **animals = new Animal *[100];
// 	for (int i = 0; i < 50; ++i)
// 		animals[i] = new Dog();
// 	for (int i = 50; i < 100; ++i)
// 		animals[i] = new Cat();
// 	for (int i = 0; i < 100; ++i)
// 		delete animals[i];
// 	delete[] animals;

// 	return (0);
// }

int main()
{

	// Verificación de copias profundas
	 // Creación del Cat original y cambio de una idea
	Cat originalCat;
	originalCat.changeIdea("I love sleeping", 0);
	std::cout << "Original Cat's Brain after changing one idea:" << std::endl;
	originalCat.printBrain();

	// Creación de copiedCat usando el constructor de copia
	Cat copiedCat = originalCat;
	std::cout << "Copied Cat's Brain after copy constructor:" << std::endl;
	copiedCat.printBrain();

	// Cambio de una idea en el originalCat para demostrar que las copias son profundas
	originalCat.changeIdea("I love eating", 0);
	std::cout << "Original Cat's Brain after changing another idea:" << std::endl;
	originalCat.printBrain();
	std::cout << "Copied Cat's Brain after changing original idea:" << std::endl;
	copiedCat.printBrain();

	// Creación de otro Cat usando el constructor por defecto usando el operador de asignación
	Cat anotherCat;
	anotherCat = originalCat;
	std::cout << "Another Cat's Brain after assignment operator:" << std::endl;
	anotherCat.printBrain();

	// Cambio de una idea en anotherCat para demostrar independencia
	anotherCat.changeIdea("I love climbing", 0);
	std::cout << "Another Cat's Brain after changing one idea:" << std::endl;
	anotherCat.printBrain();
	std::cout << "Original Cat's Brain after changing another idea:" << std::endl;
	originalCat.printBrain();

	// Verificación final de los estados para confirmar independencia completa.
	std::cout << "Final State of Original Cat's Brain:" << std::endl;
	originalCat.printBrain();
	std::cout << "Final State of Copied Cat's Brain:" << std::endl;
	copiedCat.printBrain();
	std::cout << "Final State of = Operator Cat's Brain:" << std::endl;
	anotherCat.printBrain();
	return (0);
}
