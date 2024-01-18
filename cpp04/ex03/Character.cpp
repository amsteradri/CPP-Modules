/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Character.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adgutier <adgutier@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/18 15:50:46 by adgutier          #+#    #+#             */
/*   Updated: 2024/01/18 15:59:13 by adgutier         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Character.hpp"

Character::Character(void): _name("default"), _materias()
{
    std::cout << "Character created with default constructor" << std::endl;
}

Character::Character(std::string const &name) : _name("default"), _materias()
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