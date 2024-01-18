/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Wrong.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adgutier <adgutier@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/18 12:00:04 by adgutier          #+#    #+#             */
/*   Updated: 2024/01/18 12:10:55 by adgutier         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Wrong.hpp"

WrongCat::WrongCat(void): type("WrongCat")
{
    std::cout << "WrongCat from WrongAnimal " << WrongAnimal::type << " created with default constructor" << std::endl;
}

WrongCat::WrongCat(std::string const &type): WrongAnimal(type), type("WrongCat")
{
    std::cout << "WrongCat from WrongAnimal " << WrongAnimal::type << " created with name constructor" << std::endl;
}

WrongCat::~WrongCat(void)
{
    std::cout << "WrongCat from WrongAnimal " << this->type << " destructed succesfully" << std::endl;
}

WrongCat::WrongCat(WrongCat const &copy): WrongAnimal(copy)
{
	std::cout << "WrongCat from WrongAnimal " << this->type << " created with copy constructor" << std::endl;
	*this = copy;
}

WrongCat	&WrongCat::operator=(const WrongCat &copy)
{
	std::cout << "Assignment operator for WrongCat called." << std::endl;
	this->type = copy.getType();
	return (*this);
}

std::string const	&WrongCat::getType(void) const
{
	return (this->type);
}

void	WrongCat::setType(const std::string &type)
{
	this->type = type;
}

void	WrongCat::makeSound(void) const
{
	std::cout << "WrongCat From WrongAnimal " << WrongAnimal::type << " does WOUF WOUF" << std::endl;
}

WrongAnimal::WrongAnimal(void): type("default")
{
    std::cout << "WrongAnimal of type " << this->type << " created with default constructor" << std::endl;
}

WrongAnimal::WrongAnimal(std::string const &type): type(type)
{
    std::cout << "WrongAnimal of type " << this->type << " created with name constructor" << std::endl;
}

WrongAnimal::~WrongAnimal(void)
{
    std::cout << "WrongAnimal of type " << this->type << " destructed succesfully" << std::endl;
}

WrongAnimal::WrongAnimal(WrongAnimal const &copy)
{
	std::cout << "WrongAnimal of type " << this->type << " created with copy constructor" << std::endl;
	*this = copy;
}

WrongAnimal	&WrongAnimal::operator=(const WrongAnimal &copy)
{
	std::cout << "Assignment operator for WrongAnimal called." << std::endl;
	this->type = copy.getType();
	return (*this);
}

std::string const	&WrongAnimal::getType(void) const
{
	return (this->type);
}

void	WrongAnimal::setType(const std::string &type)
{
	this->type = type;
}

void	WrongAnimal::makeSound(void) const
{
	std::cout << "WrongAnimal " << this->type << " made a sound!" << std::endl;
}
