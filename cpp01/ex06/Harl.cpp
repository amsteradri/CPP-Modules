/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Harl.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adgutier <adgutier@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/11 10:28:12 by adgutier          #+#    #+#             */
/*   Updated: 2024/06/16 11:34:22 by adgutier         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Harl.hpp"
Harl::Harl(void)
{
    std::cout << "Created succesfully!" << std::endl;
}

Harl::~Harl(void)
{
    std::cout << "Destroyed succesfully!" << std::endl;
}

void Harl::debug(void)
{
    std::cout << "\033[33m" << "ENTERING DEBUG MODE" << "\033[0m" << std::endl;

}

void Harl::info(void)
{
    std::cout << "\033[34m" << "ENTERING INFO MODE" << "\033[0m" << std::endl;
}

void Harl::warning(void)
{
    std::cout << "\033[35m" << "ENTERING WARNING MODE" << "\033[0m" << std::endl;
}

void Harl::error(void)
{
    std::cout << "\033[31m" << "ENTERING ERROR MODE" << "\033[0m" << std::endl;
}

void Harl::complain(std::string level) 
{
    void (Harl::*complainPtr[])(void) = {&Harl::debug, &Harl::info, &Harl::warning, &Harl::error};
    std::string levels[] = {"DEBUG", "INFO", "WARNING", "ERROR"};
    
    for (int i = 0; i < 4; ++i)
    {
        if (level == levels[i])
        {
            (this->*complainPtr[i])();
            return;
        }
    }
    std::cout << "[ Probably complaining about insignificant problems ]" << std::endl;
}
