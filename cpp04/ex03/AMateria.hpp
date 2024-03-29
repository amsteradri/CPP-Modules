/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AMateria.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adgutier <adgutier@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/18 14:34:30 by adgutier          #+#    #+#             */
/*   Updated: 2024/01/23 10:49:54 by adgutier         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include <iostream>

class ICharacter;

class AMateria
{
    protected:
            std::string type;
            AMateria(AMateria const &copy);
            AMateria(std::string const & type);
    public:
        virtual ~AMateria(void);
        
        AMateria const	&operator=(AMateria const &copy);
        std::string const & getType() const; //Returns the materia type
       virtual AMateria	*clone(void) const = 0;
		virtual void		use(ICharacter &target) = 0;
};
