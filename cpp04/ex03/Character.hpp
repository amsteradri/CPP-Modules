/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Character.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adgutier <adgutier@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/18 15:50:17 by adgutier          #+#    #+#             */
/*   Updated: 2024/01/18 15:58:52 by adgutier         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include "ICharacter.hpp"

class Character: public ICharacter
{
    private:
        std::string _name;
        AMateria *_materias[4];
        
    public:
        Character(void);
        Character(std::string const &name);
        Character(Character const &copy);
        Character	const &operator=(const Character &copy);
        ~Character(void);
        
        std::string const	&getName(void) const;
		void				setName(std::string const &name);
        
        virtual void equip(AMateria* m) = 0;
        virtual void unequip(int idx) = 0;
        virtual void use(int idx, Character& target) = 0;
        
};
