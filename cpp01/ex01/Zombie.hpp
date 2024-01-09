/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adgutier <adgutier@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/09 12:54:27 by adgutier          #+#    #+#             */
/*   Updated: 2024/01/09 13:44:00 by adgutier         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ZOMBIE_HPP
# define ZOMBIE_HPP

#include <iostream>
#include <string>
# include <algorithm>

class Zombie{

    private:
    std::string _name;

    public:
        void announce( void );
        void    setName(std::string name);
        Zombie(void);
        Zombie(std::string name);
		~Zombie(void);
};
void	randomChump(std::string name);
Zombie* newZombie( std::string name );



#endif
