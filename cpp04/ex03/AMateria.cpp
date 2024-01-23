/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AMateria.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adgutier <adgutier@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/18 14:39:48 by adgutier          #+#    #+#             */
/*   Updated: 2024/01/23 10:37:20 by adgutier         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "AMateria.hpp"


AMateria::~AMateria(void)
{
    std::cout << "Materia destroyed succesfully" << std::endl;
}

AMateria::AMateria(std::string const &type): type(type)
{
    std::cout << "Materia created with name constructor" << std::endl;
}

AMateria::AMateria(AMateria const &copy)
{
	std::cout << "Materia created with copy constructor" << std::endl;
	*this = copy;
}

AMateria const	&AMateria::operator=(AMateria const &copy)
{
	this->type = copy.type;
	std::cout << "AMateria Assignment Operator Called" << std::endl;
	return (*this);
}

std::string const &AMateria::getType(void) const
{
    return(this->type);
}



