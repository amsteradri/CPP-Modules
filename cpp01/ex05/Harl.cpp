/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Harl.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adgutier <adgutier@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/11 10:28:12 by adgutier          #+#    #+#             */
/*   Updated: 2024/01/11 10:52:19 by adgutier         ###   ########.fr       */
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

void Harl::complain( std::string level )
{
    void (Harl::*ptr_debug)(void) = &Harl::debug;
    void (Harl::*ptr_info)(void) = &Harl::info;
    void (Harl::*ptr_warning)(void) = &Harl::warning;
    void (Harl::*ptr_error)(void) = &Harl::error;
    if(!level.size())
    {
        std::cout << "No mode specified!" << std::endl;
    }
    if(level == "DEBUG")
        (this->*ptr_debug)();
    else if(level == "INFO")
        (this->*ptr_info)();
    else if(level == "WARNING")
        (this->*ptr_warning)();
    else if(level == "ERROR")
        (this->*ptr_error)();
}
