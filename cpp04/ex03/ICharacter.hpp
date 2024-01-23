/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ICharacter.hpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adgutier <adgutier@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/18 14:59:25 by adgutier          #+#    #+#             */
/*   Updated: 2024/01/23 10:27:49 by adgutier         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once 

#include "AMateria.hpp"

class ICharacter
{
    protected:
        ICharacter(void);
        ICharacter(ICharacter const &copy);
        ICharacter	const &operator=(const ICharacter &copy);
    public:
    virtual ~ICharacter() {}
    virtual std::string const & getName() const = 0;
    virtual void equip(AMateria* m) = 0;
    virtual void unequip(int idx) = 0;
    virtual void use(int idx, ICharacter& target) = 0;
};
