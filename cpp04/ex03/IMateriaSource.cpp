/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   IMateriaSource.cpp                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adgutier <adgutier@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/23 10:13:38 by adgutier          #+#    #+#             */
/*   Updated: 2024/01/23 10:27:51 by adgutier         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "IMateriaSource.hpp"

IMateriaSource::IMateriaSource(void)
{
    std::cout << "IMateriaSource created with default constructor" << std::endl;
}

IMateriaSource::IMateriaSource(IMateriaSource const &copy)
{
	std::cout << "IMateriaSource created with copy constructor" << std::endl;
	*this = copy;
}

IMateriaSource const	&IMateriaSource::operator=(IMateriaSource const &copy)
{
	(void)copy;
	std::cout << "IMateriaSource Assignment Operator Called" << std::endl;
	return (*this);
}
