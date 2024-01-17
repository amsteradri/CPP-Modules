/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adgutier <adgutier@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/11 14:13:46 by adgutier          #+#    #+#             */
/*   Updated: 2024/01/16 17:19:19 by adgutier         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "FragTrap.hpp"

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
    FragTrap paco("Paco");

    int i = 50;
    while(i-- >= 0)
        paco.attack("juan");
    
}
