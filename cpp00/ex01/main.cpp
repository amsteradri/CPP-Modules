/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adgutier <adgutier@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/09 10:29:06 by adgutier          #+#    #+#             */
/*   Updated: 2024/01/09 12:35:36 by adgutier         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include"Phonebook.hpp"

int main(void)
{
    Phonebook phone1;
    std::string str;
    
    while(str != "EXIT")
    {
        std::cout << "Enter a command for the phonebook:";
        std::getline(std::cin, str);
        if(str == "ADD")
        {
            phone1.add();
        }
        else if(str == "SEARCH")
            phone1.search();
        if(std::cin.eof())
        {
            std::cout << std::endl;
            return(0);
        }
    }
    return(0);
}
