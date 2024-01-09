/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adgutier <adgutier@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/09 13:10:12 by adgutier          #+#    #+#             */
/*   Updated: 2024/01/09 13:49:43 by adgutier         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

Zombie* zombieHorde( int N, std::string name );

// int	main(void)
// {
// 	int size = 5;
// 	Zombie	*zom = newZombie("adgutier");
// 	zom->announce();
// 	Zombie *horde = zombieHorde(size, "PACO");
// 	delete zom;
// 	delete [] horde;
// }

int	main(void)
{
	int	size;

	size = 20;
	Zombie *horde = zombieHorde(size, "Zom");
	for (int i = 0; i < size; i++)
		horde[i].announce();
	delete [] horde;
}
