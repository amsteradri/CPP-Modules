/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adgutier <adgutier@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/18 11:26:10 by adgutier          #+#    #+#             */
/*   Updated: 2024/01/18 11:50:20 by adgutier         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef DOG_HPP

#define DOG_HPP

#include <iostream>
#include "Animal.hpp"

class Dog: public Animal
{
    private:
        std::string type;
    public:
            Dog(void);
            Dog(Dog const &copy);
            Dog(std::string const &type);
            ~Dog(void);
            Dog &operator=(const Dog &copy);
            std::string const	&getType(void) const;
            void				setType(std::string const &type);
            void	makeSound(void) const;
            


};



#endif
