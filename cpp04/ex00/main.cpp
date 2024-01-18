/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adgutier <adgutier@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/18 11:27:39 by adgutier          #+#    #+#             */
/*   Updated: 2024/01/18 12:08:42 by adgutier         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Dog.hpp"
#include "Cat.hpp"
#include "Animal.hpp"
#include "Wrong.hpp"

int	main(void)
{
	const Animal		*meta = new Animal();
	const Animal		*j = new Dog("Carnivore");
	const Animal		*i = new Cat("GATITO");
	const WrongAnimal	*k = new WrongCat();

	i->makeSound();
	j->makeSound();
	k->makeSound();
	meta->makeSound();
	delete meta;
	delete i;
	delete j;
	delete k;
}
