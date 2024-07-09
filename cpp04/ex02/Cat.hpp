/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adgutier <adgutier@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/18 10:19:45 by adgutier          #+#    #+#             */
/*   Updated: 2024/01/18 13:10:17 by adgutier         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CAT_HPP

#define CAT_HPP

#include <iostream>
#include "Animal.hpp"
#include "Brain.hpp"

class Cat: public Animal
{
    private:
        Brain *_brain;
    public:
            Cat(void);
            Cat(Cat const &copy);
            Cat(std::string const &type);
            ~Cat(void);
            Cat &operator=(const Cat &copy);
            Brain &getBrain(void) const;
            void	setBrain(Brain const &brain);
            void	makeSound(void) const;
            void changeIdea(const std::string &newIdea, int index);
	        void printBrain() const;
            


};




#endif
