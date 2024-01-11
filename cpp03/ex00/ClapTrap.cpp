/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adgutier <adgutier@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/11 13:45:12 by adgutier          #+#    #+#             */
/*   Updated: 2024/01/11 15:05:28 by adgutier         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"

ClapTrap::ClapTrap(void): _name("default"), _hitpoints(10), _energypoints(10), _attack(0)
{
    std::cout << "ClapTrap class named " << this->_name << " created with default constructor." << std::endl;
}

ClapTrap::ClapTrap(std::string const &name): _name(name), _hitpoints(10), _energypoints(10), _attack(0)
{
    std::cout << "ClapTrap class named " << this->_name << " created with name constructor." << std::endl;
}

ClapTrap::~ClapTrap(void)
{
    std::cout << "ClapTrap class named " << this->_name << " destroyed." << std::endl;
}

ClapTrap::ClapTrap(ClapTrap const &copy)
{
	std::cout << "ClapTrap " << this->_name << " copied." << std::endl;
	*this = copy;
}

ClapTrap	&ClapTrap::operator=(const ClapTrap &copy)
{
	std::cout << "Assignment operator for ClapTrap called." << std::endl;
	this->_name = copy.get_name();
	this->_hitpoints = copy.get_hp();
	this->_energypoints = copy.get_energy_points();
	this->_attack = copy.get_damage();
	return (*this);
}

std::string const	&ClapTrap::get_name(void) const
{
	return (this->_name);
}

int const	&ClapTrap::get_hp(void) const
{
	return (this->_hitpoints);
}

int const	&ClapTrap::get_energy_points(void) const
{
	return (this->_energypoints);
}

int const	&ClapTrap::get_damage(void) const
{
	return (this->_attack);
}

void	ClapTrap::set_name(std::string const &name)
{
	this->_name = name;
}

void	ClapTrap::set_hp(int const &value)
{
	this->_hitpoints = value;
}

void	ClapTrap::set_energy_points(int const &value)
{
	this->_energypoints = value;
}

void	ClapTrap::set_damage(int const &value)
{
	this->_attack = value;
}

void ClapTrap::attack(const std::string& target)
{
    if(this->_energypoints && this->_hitpoints > 0)
    {
        std::cout << "ClapTrap " << this->_name << " attacks " << target << " causing " << this->_attack << " points of damage!" << std::endl;
        this->_energypoints--;
    }
    if(this->_hitpoints <= 0)
        std::cout << "ClapTrap " << this->_name << " is dead!" << std::endl;
    else if (!this->_energypoints)
		std::cout << "ClapTrap " << this->_name << " has 0 energy points!" << std::endl;
}

void ClapTrap::takeDamage(unsigned int amount)
{
    if (this->_hitpoints > 0)
	{
		std::cout << "ClapTrap " << this->_name << " recieved " << amount << " point(s) of damage!" << std::endl;
		this->_hitpoints -= amount;
	}
	else
		std::cout << "ClapTrap " << this->_name << " is already dead :(" << std::endl;
	if (this->_hitpoints < 0)
		this->_hitpoints = 0;
}

void ClapTrap::beRepaired(unsigned int amount)
{
    if (this->_hitpoints > 0 && this->_energypoints)
	{
		std::cout << "ClapTrap " << this->_name << " healed " << amount << " point(s)." << std::endl;
		this->_hitpoints += amount;
		this->_energypoints--;
	}
	if (this->_hitpoints <= 0)
		std::cout << "Cannot repair because: ClapTrap " << this->_name << " is dead." << std::endl;
	else if (!this->_energypoints)
		std::cout << "ClapTrap " << this->_name << " is out of energy points!" << std::endl;
}

