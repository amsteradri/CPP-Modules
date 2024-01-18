/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adgutier <adgutier@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/18 11:25:45 by adgutier          #+#    #+#             */
/*   Updated: 2024/01/18 12:08:11 by adgutier         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Dog.hpp"

Dog::Dog(void): type("Dog")
{
    std::cout << "Dog from Animal " << Animal::type << " created with default constructor" << std::endl;
}

Dog::Dog(std::string const &type): Animal(type), type("Dog")
{
    std::cout << "Dog from Animal " << Animal::type << " created with name constructor" << std::endl;
}

Dog::~Dog(void)
{
    std::cout << "Dog from Animal " << Animal::type << " destructed succesfully" << std::endl;
}

Dog::Dog(Dog const &copy): Animal(copy)
{
	std::cout << "Dog from Animal " << Animal::type << " created with copy constructor" << std::endl;
	*this = copy;
}

Dog	&Dog::operator=(const Dog &copy)
{
	std::cout << "Assignment operator for Dog from Animal " << std::endl;
	Animal::operator=(copy);
	return (*this);
}

std::string const	&Dog::getType(void) const
{
	return (this->type);
}

void	Dog::setType(const std::string &type)
{
	this->type = type;
}

void	Dog::makeSound(void) const
{
	std::cout << "Dog From Animal " << Animal::type << " does WOUF WOUF" << std::endl;
}
