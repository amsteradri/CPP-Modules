/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ICharacter.cpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adgutier <adgutier@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/18 15:42:12 by adgutier          #+#    #+#             */
/*   Updated: 2024/01/18 15:50:06 by adgutier         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ICharacter.hpp"

ICharacter::ICharacter(void)
{
    std::cout << "ICharacter created with default constructor" << std::endl;
}

ICharacter::ICharacter(ICharacter const &copy)
{
	std::cout << "ICharacter created with copy constructor" << std::endl;
	*this = copy;
}

ICharacter	const &ICharacter::operator=(const ICharacter &copy)
{
	(void)copy;
	std::cout << "ICharacter Assignment Operator Called" << std::endl;
	return (*this);
}
