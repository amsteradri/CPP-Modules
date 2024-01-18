/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AMateria.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adgutier <adgutier@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/18 14:39:48 by adgutier          #+#    #+#             */
/*   Updated: 2024/01/18 15:02:23 by adgutier         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "AMateria.hpp"

AMateria::AMateria(void) : type("")
{
    std::cout << "Materia created with default constructor" << std::endl;
}

AMateria::~AMateria(void)
{
    std::cout << "Materia destroyed succesfully" << std::endl;
}

AMateria::AMateria(std::string const & type): type("")
{
    std::cout << "Materia created with name constructor" << std::endl;
}

AMateria::AMateria(AMateria const &copy)
{
	std::cout << "Materia created with copy constructor" << std::endl;
	*this = copy;
}

AMateria	&AMateria::operator=(const AMateria &copy)
{
	std::cout << "Assignment operator for Materia called." << std::endl;
	this->type = copy.getType();
	return (*this);
}

std::string const &AMateria::getType() const
{
    return(this->type);
}

AMateria* AMateria::clone() const
{
    return (AMateria*)this;
}

void    AMateria::use( ICharacter& target )
{
    std::cout << "AMateria " << this->type << " used on " << target.getName() << std::endl;
}