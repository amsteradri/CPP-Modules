/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Ice.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adgutier <adgutier@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/18 14:54:23 by adgutier          #+#    #+#             */
/*   Updated: 2024/01/18 15:02:44 by adgutier         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Ice.hpp"

Ice::Ice(void) : AMateria("ice")
{
    std::cout << "Ice created with default constructor" << std::endl;
}

Ice::~Ice(void)
{
    std::cout << "Ice destroyed succesfully" << std::endl;
}

Ice::Ice(Ice const &copy): AMateria("ice")
{
	std::cout << "Ice created with copy constructor" << std::endl;
	*this = copy;
}

Ice	const &Ice::operator=(const Ice &copy)
{
	std::cout << "Assignment operator for Ice called." << std::endl;
	this->type = copy.type;
	return (*this);
}

AMateria	*Ice::clone(void) const
{
	return (new Ice(*this));
}

void	Ice::use(ICharacter &target)
{
	std::cout << "* shoots an ice bolt at " << target.getName() << " *" << std::endl;
}