/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adgutier <adgutier@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/18 11:26:10 by adgutier          #+#    #+#             */
/*   Updated: 2024/01/18 13:10:07 by adgutier         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef DOG_HPP

#define DOG_HPP

#include <iostream>
#include "Animal.hpp"
#include "Brain.hpp"

class Dog: public Animal
{
    private:
        Brain *_brain;
    public:
            Dog(void);
            Dog(Dog const &copy);
            Dog(std::string const &type);
            ~Dog(void);
            Dog &operator=(const Dog &copy);
            Brain &getBrain(void) const;
            void	setBrain(Brain const &brain);
            void	makeSound(void) const;
            void changeIdea(const std::string &newIdea, int index);
	        void printBrain() const;


};



#endif
