/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Character.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adgutier <adgutier@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/18 15:50:46 by adgutier          #+#    #+#             */
/*   Updated: 2024/01/23 10:46:29 by adgutier         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Character.hpp"

Character::Character(void): _name("default"), _materias()
{
    std::cout << "Character created with default constructor" << std::endl;
}

Character::Character(std::string const &name) : _name(name), _materias()
{
    std::cout << "Character created with default constructor" << std::endl;
}

Character::~Character(void)
{
    for (int i = 0; i < 4; i++)
	{
		if (this->_materias[i])
			delete this->_materias[i];
	}
    std::cout << "Character destroyed succesfully" << std::endl;
}

Character::Character(Character const &copy): ICharacter(copy), _materias()
{
    this->_name = copy._name;
	for (int i = 0; i < 4; i++)
	{
		if (copy._materias[i])
			this->_materias[i] = copy._materias[i];
	}
	std::cout << "Character created with copy constructor" << std::endl;
}

Character	const &Character::operator=(const Character &copy)
{
	this->_name = copy._name;
	std::cout << "Character Assignment Operator Called" << std::endl;
	return (*this);
}

int Character::exist(AMateria *m)
{
	for (int i = 0; i < 4; i++)
	{
		if (this->_materias[i] == m)
			return (1);
	}
	return (0);
}

void	Character::equip(AMateria *m)
{
	for (int i = 0; i < 4; i++)
	{
		if (m && this->_materias[i] == NULL)
		{
			if (this->exist(m))
				this->_materias[i] = m->clone();
			else
				this->_materias[i] = m;
			std::cout << "Materia of type " << this->_materias[i]->getType() << " equipped to " << i << " slot " << std::endl;
			return ;
		}
	}
	if (m)
		std::cout << "Cant equip materia, " << this->_name << " inventory is full" << std::endl;
	else
		std::cout << "Invalid materia" << std::endl;
	if (!this->exist(m))
		delete m;
}

void	Character::unequip(int idx)
{
	if (idx >= 0 && idx < 4 && this->_materias[idx])
	{
		std::cout << "Materia of type  " << this->_materias[idx]->getType() << " unequipped from " << this->_name << " inventory at index " << idx << std::endl;
		this->_materias[idx] = NULL;
	}
	else if (idx < 0 || idx >= 4)
		std::cout << "Cant unequip materia invalid index " << idx << std::endl;
	else
		std::cout << "Cant unequip materia with empty index" << std::endl;
}

void	Character::use(int idx, ICharacter &target)
{
	if (idx >= 0 && idx < 4 && this->_materias[idx])
		this->_materias[idx]->use(target);
	else if (idx < 0 || idx >= 4)
		std::cout << "Cant use materia, invalid index " << idx << std::endl;
	else
		std::cout << "Cant use materia with empty index " << std::endl;
}

std::string const	&Character::getName(void) const
{
	return (this->_name);
}

void	Character::setName(std::string const &name)
{
	this->_name = name;
}
