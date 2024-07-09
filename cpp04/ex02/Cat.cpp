/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adgutier <adgutier@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/18 10:22:37 by adgutier          #+#    #+#             */
/*   Updated: 2024/01/18 13:11:09 by adgutier         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cat.hpp"

Cat::Cat(void)
{
	this->_brain = new Brain();
    std::cout << "Cat from Animal " << Animal::type << " created with default constructor" << std::endl;
}

Cat::Cat(std::string const &type): Animal(type)
{
    std::cout << "Cat from Animal " << Animal::type << " created with name constructor" << std::endl;
}

Cat::~Cat(void)
{
	delete this->_brain;
    std::cout << "Cat from Animal " << this->type << " destructed succesfully" << std::endl;
}

Cat::Cat(Cat const &copy): Animal(copy)
{
	this->_brain = new Brain(*copy._brain);
	std::cout << "Cat from Animal " << Animal::type << " created with copy constructor" << std::endl;

}

Cat &Cat::operator=(const Cat &other)
{
	if (this != &other)
	{
		Animal::operator=(other);
		Brain *newBrain = new Brain(*other._brain);
		delete this->_brain;
		this->_brain = newBrain;
	}
	std::cout << "Cat type: " << this->type << " = "
			  << "Cat type: " << other.type << std::endl;
	return (*this);
}

Brain &Cat::getBrain(void) const
{
	return (*this->_brain);
}

void	Cat::setBrain(Brain const &brain)
{
	*this->_brain = brain;
}

void	Cat::makeSound(void) const
{
	std::cout << "Cat From Animal " << Animal::type << " does MIAU MIAU" << std::endl;
}

void Cat::changeIdea(const std::string &newIdea, int index)
{
	this->_brain->setIdea(newIdea, index);
}

void Cat::printBrain() const
{
	this->_brain->getIdea();
}