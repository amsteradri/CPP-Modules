/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adgutier <adgutier@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/18 10:19:45 by adgutier          #+#    #+#             */
/*   Updated: 2024/01/18 12:02:44 by adgutier         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ANIMAL_HPP

#define ANIMAL_HPP

#include <iostream>

class Animal
{
    protected:
        std::string type;
    public:
            Animal(void);
            Animal(Animal const &copy);
            Animal(std::string const &type);
            virtual ~Animal(void);
            Animal &operator=(const Animal &copy);
            std::string const	&getType(void) const;
            void				setType(std::string const &type);
            virtual void	makeSound(void) const;
            


};



#endif
