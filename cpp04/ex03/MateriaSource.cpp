/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   MateriaSource.cpp                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adgutier <adgutier@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/23 10:09:23 by adgutier          #+#    #+#             */
/*   Updated: 2024/01/23 10:28:01 by adgutier         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "MateriaSource.hpp"

MateriaSource::MateriaSource(void): _learnInventory()
{
	std::cout << "MateriaSource created with default constructor" << std::endl;
}

MateriaSource::~MateriaSource(void)
{
	for (int i = 0; i < 4; i++)
	{
		if (this->_learnInventory[i])
			delete this->_learnInventory[i];
	}
	std::cout << "MateriaSource destroyed" << std::endl;
}

MateriaSource::MateriaSource(MateriaSource const &copy): IMateriaSource(copy), _learnInventory()
{
	for (int i = 0; i < 4; i++)
	{
		if (copy._learnInventory[i])
			this->_learnInventory[i] = copy._learnInventory[i];
	}
	std::cout << "MateriaSource copied" << std::endl;
}

MateriaSource const	&MateriaSource::operator=(const MateriaSource &copy)
{
	(void)copy;
    std::cout << "MateriaSource Assignment Operator Called" << std::endl;
	return (*this);
}

void	MateriaSource::learnMateria(AMateria *materia)
{
	for (int i = 0; i < 4; i++)
	{
		if (materia && this->_learnInventory[i] == NULL)
		{
			if (this->exist(materia))
				this->_learnInventory[i] = materia;
			else
				this->_learnInventory[i] = materia;
			std::cout << "Materia " << this->_learnInventory[i]->getType() << " learned at index " << i << std::endl;
			return ;
		}
	}
	if (materia)
		std::cout << "Cannot learn materia, inventory for MateriaSource is full!" << std::endl;
	else
		std::cout << "Cannot learn invalid materia" << std::endl;
	if (!this->exist(materia))
		delete materia;
}

AMateria	*MateriaSource::createMateria(const std::string &type)
{
	for (int i = 0; i < 4; i++)
	{
		if (this->_learnInventory[i] && this->_learnInventory[i]->getType() == type)
			return (this->_learnInventory[i]->clone());
	}
	std::cout << "Cannot create materia, " << type << " is invalid!" << std::endl;
	return (0);
}

int MateriaSource::exist(AMateria *materia)
{
	for (int i = 0; i < 4; i++)
	{
		if (this->_learnInventory[i] == materia)
			return (1);
	}
	return (0);
}
