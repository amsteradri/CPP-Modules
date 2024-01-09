/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanA.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adgutier <adgutier@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/09 14:26:42 by adgutier          #+#    #+#             */
/*   Updated: 2024/01/09 14:52:45 by adgutier         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef HUMANA_HPP
# define HUMANA_HPP

#include "Weapon.hpp"

class HumanA{
    private:
        std::string _name;
        Weapon &_weapon;
    
    public:
        HumanA(std::string name, Weapon &weapon);
		~HumanA(void);
		void	attack(void);
        void	setWeapon(Weapon weapon);
        
};

#endif
