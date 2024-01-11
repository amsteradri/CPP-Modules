/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adgutier <adgutier@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/11 14:13:46 by adgutier          #+#    #+#             */
/*   Updated: 2024/01/11 15:13:54 by adgutier         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"

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
    ClapTrap paco("Paco");

    int i = 50;
    while(i-- >= 0)
        paco.attack("juan");
    
}
