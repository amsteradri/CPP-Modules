/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Ice.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adgutier <adgutier@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/18 14:52:12 by adgutier          #+#    #+#             */
/*   Updated: 2024/01/18 15:09:09 by adgutier         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once 

#include "ICharacter.hpp"
#include "AMateria.hpp"

class Ice: public AMateria
{
	public:
		/* Constructors & Destructors */
		Ice(void);
		Ice(Ice const &copy);
		~Ice(void);

		/* Basic Operators */
		Ice const	&operator=(Ice const &copy);

		/* Main Member Functions */
		virtual AMateria	*clone(void) const;
		void				use(ICharacter &target);
};