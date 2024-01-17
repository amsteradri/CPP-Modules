/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adgutier <adgutier@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/16 17:08:28 by adgutier          #+#    #+#             */
/*   Updated: 2024/01/16 17:08:28 by adgutier         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "FragTrap.hpp"

FragTrap::FragTrap(void)
{
	std::cout << "FragTrap from ScavTrap " << this->_name << " created with default constructor." << std::endl;
}

FragTrap::FragTrap(std::string const &name): ScavTrap(name)
{
	std::cout << "FragTrap from ScavTrap " << this->_name << " created with name." << std::endl;
}

FragTrap::~FragTrap(void)
{
	std::cout << "FragTrap from ScavTrap " << this->_name << " destroyed." << std::endl;
}

FragTrap::FragTrap(FragTrap const &copy): ScavTrap(copy)
{
	std::cout << "FragTrap from ScavTrap " << this->_name << " copied." << std::endl;
}

FragTrap	&FragTrap::operator=(FragTrap const &copy)
{
	std::cout << "Assignment operator for FragTrap called." << std::endl;
	ClapTrap::operator=(copy);
	return (*this);
}

void FragTrap::highFivesGuys(void)
{
    if(this->_hitpoints <= 0)
        std::cout << "FragTrap  " << this->_name << " cant give HIGHT FIVE , he is dead" << std::endl;    
    else
        std::cout << "FragTrap  " << this->_name << " IS GIVING YOU A HIGH FIVE" << std::endl;
}