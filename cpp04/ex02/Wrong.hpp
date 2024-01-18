/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Wrong.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adgutier <adgutier@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/18 12:00:47 by adgutier          #+#    #+#             */
/*   Updated: 2024/01/18 12:08:52 by adgutier         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include <iostream>

class WrongAnimal
{
    protected:
        std::string type;
    public:
            WrongAnimal(void);
            WrongAnimal(WrongAnimal const &copy);
            WrongAnimal(std::string const &type);
            virtual ~WrongAnimal(void);
            WrongAnimal &operator=(const WrongAnimal &copy);
            std::string const	&getType(void) const;
            void				setType(std::string const &type);
            virtual void	makeSound(void) const;
            
};

class WrongCat: public WrongAnimal
{
    private:
        std::string type;
    public:
            WrongCat(void);
            WrongCat(WrongCat const &copy);
            WrongCat(std::string const &type);
            ~WrongCat(void);
            WrongCat &operator=(const WrongCat &copy);
            std::string const	&getType(void) const;
            void				setType(std::string const &type);
            void	makeSound(void) const;
            

};
