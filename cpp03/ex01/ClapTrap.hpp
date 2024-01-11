/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adgutier <adgutier@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/11 13:40:03 by adgutier          #+#    #+#             */
/*   Updated: 2024/01/11 15:06:41 by adgutier         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CLAPTRAP_HPP
# define CLAPTRAP_HPP

# include <iostream>

class ClapTrap
{
   protected:
        std::string _name;
        int _hitpoints;
        int _energypoints;
        int _attack;
    public:
        ClapTrap(void);
        ~ClapTrap(void);
        ClapTrap(ClapTrap const &copy);
        ClapTrap &operator=(const ClapTrap &copy);
        ClapTrap(std::string const &name);
        void attack(const std::string& target);
        void takeDamage(unsigned int amount);
        void beRepaired(unsigned int amount);  
        void				set_name(std::string const &name);
		void				set_hp(int const &value);
		void				set_energy_points(int const &value);
		void				set_damage(int const &value);
        std::string const	&get_name(void) const;
		int const			&get_hp(void) const;
		int const			&get_energy_points(void) const;
		int const			&get_damage(void) const;
    
};





#endif

