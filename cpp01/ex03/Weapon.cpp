/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Weapon.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adgutier <adgutier@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/09 14:14:14 by adgutier          #+#    #+#             */
/*   Updated: 2024/01/09 14:53:07 by adgutier         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Weapon.hpp"

Weapon::Weapon(std::string type): _type(type)
{
}

Weapon::~Weapon(void)
{
}


const std::string& Weapon::getType(void)
{
    return(this->_type);
}

void Weapon::setType(std::string type)
{
    this->_type = type;
}
