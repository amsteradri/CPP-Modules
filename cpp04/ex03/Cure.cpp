/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cure.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adgutier <adgutier@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/18 15:00:35 by adgutier          #+#    #+#             */
/*   Updated: 2024/01/18 15:04:23 by adgutier         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cure.hpp"

Cure::Cure(void) : AMateria("cure")
{
    std::cout << "Cure created with default constructor" << std::endl;
}

Cure::~Cure(void)
{
    std::cout << "Cure destroyed succesfully" << std::endl;
}

Cure::Cure(Cure const &copy): AMateria("cure")
{
	std::cout << "Cure created with copy constructor" << std::endl;
	*this = copy;
}

Cure	const &Cure::operator=(const Cure &copy)
{
	std::cout << "Assignment operator for Cure called." << std::endl;
	this->type = copy.type;
	return (*this);
}

AMateria	*Cure::clone(void) const
{
	return (new Cure(*this));
}

void	Cure::use(ICharacter &target)
{
	std::cout << "* heals " << target.getName() << "'s wounds *" << std::endl;
}