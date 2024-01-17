/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adgutier <adgutier@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/11 14:13:46 by adgutier          #+#    #+#             */
/*   Updated: 2024/01/16 12:20:05 by adgutier         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScavTrap.hpp"

// int main(void)
// {
//     ClapTrap paco("Paco");

//     paco.attack("juan");
//     paco.attack("juan");
//     paco.attack("juan");
//     paco.attack("juan");
//     paco.attack("juan");
//     paco.attack("juan");
//     paco.attack("juan");
//     paco.attack("juan");
//     paco.attack("juan");
//     paco.attack("juan");
//     paco.attack("juan");
// }

int main(void)
{
    ScavTrap paco("Paco");

    int i = 50;
    while(i-- >= 0)
        paco.attack("juan");
    
}
