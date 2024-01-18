/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adgutier <adgutier@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/18 10:22:37 by adgutier          #+#    #+#             */
/*   Updated: 2024/01/18 11:34:25 by adgutier         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Animal.hpp"

Animal::Animal(void): type("default")
{
    std::cout << "Animal of type " << this->type << " created with default constructor" << std::endl;
}

Animal::Animal(std::string const &type): type(type)
{
    std::cout << "Animal of type " << this->type << " created with name constructor" << std::endl;
}

Animal::~Animal(void)
{
    std::cout << "Animal of type " << this->type << " destructed succesfully" << std::endl;
}

Animal::Animal(Animal const &copy)
{
	std::cout << "Animal of type " << this->type << " created with copy constructor" << std::endl;
	*this = copy;
}

Animal	&Animal::operator=(const Animal &copy)
{
	std::cout << "Assignment operator for Animal called." << std::endl;
	this->type = copy.getType();
	return (*this);
}

std::string const	&Animal::getType(void) const
{
	return (this->type);
}

void	Animal::setType(const std::string &type)
{
	this->type = type;
}

void	Animal::makeSound(void) const
{
	std::cout << "Animal " << this->type << " made a sound!" << std::endl;
}
