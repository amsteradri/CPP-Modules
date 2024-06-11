/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Phonebook.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adgutier <adgutier@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/09 10:28:25 by adgutier          #+#    #+#             */
/*   Updated: 2024/06/10 17:53:49 by adgutier         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Phonebook.hpp"
#include "Contact.hpp"
#include <iostream>
#include <iomanip>
#define COLUMN_SIZE 10


Phonebook::Phonebook(void)
{
    this->_index = 0;
    std::cout << "Welcome to crappy a phonebook for up to 8 contacts"<< std::endl;
}

Phonebook::~Phonebook(void)
{
    std::cout << "Closing the phonebook" << std::endl;
}

void Phonebook::add(void)
{
    std::string str;
    
    str = "";
    if(this->_index > 7)
        std::cout << "Warning: Your going to overwrite the contact" << this->_contacts[this->_index % 8].get_name() << std::endl;
    while(!std::cin.eof() && str == "")
    {
        std::cout << "Enter the contact name: ";
        if(std::getline(std::cin, str) && str != "")
            this->_contacts[this->_index % 8].set_name(str);     
    }
    str = "";
    while(!std::cin.eof() && str == "")
    {
        std::cout << "Enter " << this->_contacts[this->_index % 8].get_name() << "'s second name: ";
        if(std::getline(std::cin, str) && str != "")
            this->_contacts[this->_index % 8].set_scname(str);     
    }
    str = "";
    while(!std::cin.eof() && str == "")
    {
        std::cout << "Enter " << this->_contacts[this->_index % 8].get_name() << "'s nick: ";
        if(std::getline(std::cin, str) && str != "")
            this->_contacts[this->_index % 8].set_nick(str);     
    }
    str = "";
    while(!std::cin.eof() && str == "")
    {
        std::cout << "Enter " << this->_contacts[this->_index % 8].get_name() << "'s age: ";
        if(std::getline(std::cin, str) && str != "")
            this->_contacts[this->_index % 8].set_age(str);     
    }
    str = "";
    while(!std::cin.eof() && str == "")
    {
        std::cout << "Enter " << this->_contacts[this->_index % 8].get_name() << "'s phone number: ";
        if(std::getline(std::cin, str) && str != "")
            this->_contacts[this->_index % 8].set_num(str);  
        std::cout << this->_contacts[this->_index % 8].get_name() << "Successfully added to the phonebook[" << this->_index % 8 + 1 << "/8]" << std::endl;
    }
    this->_index++;
}

void Phonebook::print(Contact contact)
{
    std::cout << "Printing contact info"<< std::endl;
    
    if (!contact.get_name().size())
	{
		std::cout << "Failed to get info for this contact" << std::endl;
		return ;
	}
    std::cout << "Contact name: " << contact.get_name() << std::endl;
    std::cout << "Contact second name: " << contact.get_scname() << std::endl;
    std::cout << "Contact nikc: " << contact.get_nick() << std::endl;
    std::cout << "Contact age: " << contact.get_age() << std::endl;
    std::cout << "Contact phone nummber: " << contact.get_num() << std::endl;
    
}

static std::string  cutter(std::string str) {
    if (str.length() <= COLUMN_SIZE)
        return str;
    return str.substr(0, COLUMN_SIZE - 1) + ".";
}

int search_ui(Contact contacts[8])
{
    int contact_count = 0;

    std::cout << " ___________________________________________ " << std::endl;
    std::cout << "|     Index|First Name| Last Name|  Nickname|" << std::endl;
    std::cout << "|----------|----------|----------|----------|" << std::endl;

    for (int i = 0; i < 8; i++)
    {
        if (!contacts[i].get_name().empty())
        {
            contact_count++;
            std::cout << "|"
                      << std::setw(COLUMN_SIZE) << i + 1 << "|"
                      << std::setw(COLUMN_SIZE) << cutter(contacts[i].get_name()) << "|"
                      << std::setw(COLUMN_SIZE) << cutter(contacts[i].get_scname()) << "|"
                      << std::setw(COLUMN_SIZE) << cutter(contacts[i].get_nick()) << "|"
                      << std::endl;
        }
    }
    std::cout << " ------------------------------------------- " << std::endl;
    return contact_count;
}



Contact	Phonebook::get_contact(int index)
{
	return (this->_contacts[index % 8]);
}

void Phonebook::search(void)
{
    std::string str;

    if (!search_ui(this->_contacts))
    {
        std::cout << "Phonebook is empty" << std::endl;
        return;
    }
    while (!std::cin.eof())
    {
        std::cout << "Introduce a contact index: " << std::endl;

        if (std::getline(std::cin, str) && !str.empty())
        {
            if (str.size() == 1 && (str[0] >= '1' && str[0] <= '8') && !this->_contacts[str[0] - 1 - '0'].get_name().empty())
                break;
        }
        if (!str.empty())
        {
            std::cout << "Wrong contact index." << std::endl;
        }
    }
    if (!std::cin.eof())
        this->print(this->_contacts[str[0] - 1 - '0']);
}

