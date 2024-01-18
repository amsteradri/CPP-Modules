/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adgutier <adgutier@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/18 10:19:45 by adgutier          #+#    #+#             */
/*   Updated: 2024/01/18 11:50:24 by adgutier         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CAT_HPP

#define CAT_HPP

#include <iostream>
#include "Animal.hpp"

class Cat: public Animal
{
    private:
        std::string type;
    public:
            Cat(void);
            Cat(Cat const &copy);
            Cat(std::string const &type);
            ~Cat(void);
            Cat &operator=(const Cat &copy);
            std::string const	&getType(void) const;
            void				setType(std::string const &type);
            void	makeSound(void) const;
            


};



#endif
