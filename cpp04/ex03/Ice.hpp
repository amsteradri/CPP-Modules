/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Ice.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adgutier <adgutier@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/18 14:52:12 by adgutier          #+#    #+#             */
/*   Updated: 2024/01/23 10:27:45 by adgutier         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once 

#include "ICharacter.hpp"
#include "AMateria.hpp"

class Ice: public AMateria
{
	public:
		Ice(void);
		Ice(Ice const &copy);
		~Ice(void);

		Ice const	&operator=(Ice const &copy);

		virtual AMateria	*clone(void) const;
		void				use(ICharacter &target);
};
