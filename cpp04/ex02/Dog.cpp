/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adgutier <adgutier@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/18 11:25:45 by adgutier          #+#    #+#             */
/*   Updated: 2024/01/18 13:09:40 by adgutier         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Dog.hpp"

Dog::Dog(void)
{
	this->_brain = new Brain();
    std::cout << "Dog from Animal " << Animal::type << " created with default constructor" << std::endl;
}

Dog::~Dog(void)
{
	delete this->_brain;
    std::cout << "Dog from Animal " << Animal::type << " destructed succesfully" << std::endl;
}

Dog::Dog(Dog const &copy): Animal(copy)
{
	this->_brain = new Brain(*copy._brain);
	std::cout << "Dog from Animal " << Animal::type << " created with copy constructor" << std::endl;

}

Dog	&Dog::operator=(const Dog &copy)
{
	std::cout << "Assignment operator for Dog from Animal " << std::endl;
	Animal::operator=(copy);
	return (*this);
}

Brain &Dog::getBrain(void) const
{
	return (*this->_brain);
}

void	Dog::setBrain(Brain const &brain)
{
	*this->_brain = brain;
}

void	Dog::makeSound(void) const
{
	std::cout << "Dog From Animal " << Animal::type << " does WOUF WOUF" << std::endl;
}
