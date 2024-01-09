/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Weapon.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adgutier <adgutier@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/09 14:12:02 by adgutier          #+#    #+#             */
/*   Updated: 2024/01/09 14:50:18 by adgutier         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef WEAPON_HPP
# define WEAPON_HPP

#include <iostream>
#include <string>
# include <algorithm>


class Weapon{
    private:
    std::string _type;
    
    public:
    Weapon(std::string type);
	~Weapon(void);
    const std::string&	getType(void);
    void setType(std::string type);

    
};

#endif
