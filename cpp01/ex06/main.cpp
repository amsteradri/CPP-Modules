/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adgutier <adgutier@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/11 10:45:50 by adgutier          #+#    #+#             */
/*   Updated: 2024/01/11 11:24:13 by adgutier         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Harl.hpp"

void filter(char *mode, Harl& harl)
{
    int level;
    std::string	levels[4] = {"DEBUG", "INFO", "WARNING", "ERROR"};
    
    level = 0;
    if(mode == levels[0])
        level = 1;
    else if(mode == levels[1])
        level = 2;
    else if(mode == levels[2])
        level = 3;
    else if(mode == levels[3])
        level = 4;
    
    switch (level)
    {
        case 1:
            harl.complain("DEBUG");
        case 2:
            harl.complain("INFO");
        case 3:
            harl.complain("WARNING");
        case 4:
            harl.complain("ERROR");
            break;
    
        default:
            std::cout << "[ Probably complaining about insignificant problems ]" << std::endl;
    }
}

int main(int argc, char **argv)
{
    Harl harl;
    if(argc == 2)
    {
        filter(argv[1], harl);
    }
    else
        std::cout << "[ Probably complaining about insignificant problems ]" << std::endl;
}
