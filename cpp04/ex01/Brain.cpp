/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Brain.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adgutier <adgutier@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/18 12:42:27 by adgutier          #+#    #+#             */
/*   Updated: 2024/01/18 13:00:01 by adgutier         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Brain.hpp"

Brain::Brain(void)
{
    std::cout << "Brain created with default constructor" << std::endl;
	for (int i = 0; i < 100; ++i)
		this->_ideas[i] = "Default idea";
}

Brain::~Brain(void)
{
    std::cout << "Brain destructed succesfully" << std::endl;
}

Brain::Brain(Brain const &copy)
{
	for (int i = 0; i < 100; ++i)
		this->_ideas[i] = copy._ideas[i];
	std::cout << "Brain copy was created" << std::endl;
}

Brain	&Brain::operator=(const Brain &copy)
{
	if (this != &copy)
	{
		for (int i = 0; i < 100; ++i)
			this->_ideas[i] = copy._ideas[i];
	}
	std::cout
		<< "Brain ideas: " << this->_ideas << " = "
		<< "Brain ideas: " << this->_ideas << std::endl;
	return (*this);
}

void Brain::getIdea() const
{
    for (int i = 0; i < 100; ++i)
		std::cout << "Idea " << i << ": " << this->_ideas[i] << std::endl;
}


void	Brain::setIdea(std::string const &idea, int const &index)
{
	if (index >= 0 && index < 100)
		this->_ideas[index] = idea;
}

