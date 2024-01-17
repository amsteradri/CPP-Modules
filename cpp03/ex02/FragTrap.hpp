/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fragtrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adgutier <adgutier@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/16 17:06:08 by adgutier          #+#    #+#             */
/*   Updated: 2024/01/16 17:06:08 by adgutier         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FRAPTRAP_HPP

#define FRAPTRAP_HPP

#include "ScavTrap.hpp"

class FragTrap: public ScavTrap
{

    public:
        FragTrap(void);
		FragTrap(std::string const &name);
		FragTrap(FragTrap const &copy);
		~FragTrap(void);
		FragTrap	&operator=(FragTrap const &copy);
        void highFivesGuys(void);
};





#endif
