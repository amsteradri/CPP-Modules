/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adgutier <adgutier@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/11 10:45:50 by adgutier          #+#    #+#             */
/*   Updated: 2024/06/16 11:42:55 by adgutier         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Harl.hpp"

void filter(const std::string &mode, Harl& harl)
{
    int level = -1;
    std::string levels[4] = {"DEBUG", "INFO", "WARNING", "ERROR"};
    
    for (int i = 0; i < 4; ++i) {
        if (mode == levels[i]) {
            level = i;
            break;
        }
    }

    switch (level)
    {
        case 0:
            harl.complain("DEBUG");
            // fall through
        case 1:
            harl.complain("INFO");
            // fall through
        case 2:
            harl.complain("WARNING");
            // fall through
        case 3:
            harl.complain("ERROR");
            break;
        default:
            std::cout << "[ Probably complaining about insignificant problems ]" << std::endl;
    }
}

int main(int argc, char **argv)
{
    Harl harl;
    if (argc == 2)
    {
        std::string mode = argv[1];
        filter(mode, harl);
    }
    else
    {
        std::cout << "[ Probably complaining about insignificant problems ]" << std::endl;
    }
    return 0;
}