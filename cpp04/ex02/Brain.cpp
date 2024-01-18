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
}

Brain::~Brain(void)
{
    std::cout << "Brain destructed succesfully" << std::endl;
}

Brain::Brain(Brain const &copy)
{
	std::cout << "Brain created with copy constructor" << std::endl;
	*this = copy;
}

Brain	&Brain::operator=(const Brain &copy)
{
	std::cout << "Assignment operator for Brain called." << std::endl;
	std::copy(copy._ideas, copy._ideas + 100, this->_ideas);
	return (*this);
}

std::string const	&Brain::getIdea(int const &idea) const
{
    if(idea >= 0 && idea <= 100)
        return(this->_ideas[idea]);
	return (this->_ideas[0]);
}

void	Brain::setIdea(std::string const &idea, int const &index)
{
	if (index >= 0 && index < 100)
		this->_ideas[index] = idea;
}

