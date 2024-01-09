/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Phonebook.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adgutier <adgutier@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/09 10:28:25 by adgutier          #+#    #+#             */
/*   Updated: 2024/01/09 12:43:05 by adgutier         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Phonebook.hpp"
#include "Contact.hpp"

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

std::string	add_spaces(int n)
{
	std::string	str;

	while (n--)
		str.append(" ");
	return (str);
}

std::string	fix_width(std::string str, long unsigned max)
{
	if (str.size() > max)
	{
		str.resize(max);
		str[str.size() - 1] = '.';
	}
	return (str);
}

int	search_ui(Contact contacts[8])
{
	char		c;
	int			i;
	std::string	str;

	std::cout << " ___________________________________________ " << std::endl;
	std::cout << "|     Index|First Name| Last Name|  Nickname|" << std::endl;
	std::cout << "|----------|----------|----------|----------|" << std::endl;
	c = '0';
	i = 0;
	while (++c <= '8')
	{
		if (contacts[c - 1 - '0'].get_name().size() && ++i)
		{
			str = c;
			str = fix_width(str, 10);
			std::cout << "|" << add_spaces(10 - str.size()) << str;
			str = fix_width(contacts[c - 1  - '0'].get_name(), 10);
			std::cout << "|" << add_spaces(10 - str.size()) << str;
			str = fix_width(contacts[c - 1 - '0'].get_scname(), 10);
			std::cout << "|" << add_spaces(10 - str.size()) << str;
			str = fix_width(contacts[c - 1 - '0'].get_nick(), 10);
			std::cout << "|" << add_spaces(10 - str.size()) << str;
			std::cout << "|" << std::endl;
		}
	}
	std::cout << " ------------------------------------------- " << std::endl;
	return (i);
}

Contact	Phonebook::get_contact(int index)
{
	return (this->_contacts[index % 8]);
}

void Phonebook::search(void)
{
    std::string str;

    if(!search_ui(this->_contacts))
    {
        std::cout << "Phonebook is empty"<< std::endl;
        return ;
    }
    while(!std::cin.eof())
    {
        std::cout << "Introduce a contact index: " << std::endl;
        
        if(std::getline(std::cin, str) && str != "")
        {
            if(str.size() == 1 && (str[0] >= '1' && str[0] <= '8') && this->_contacts[str[0] - 1 - '0'].get_name().size())
                break;
        }
        if(str != "")
        {
            std::cout << "Wrong conatct index." << std::endl;
        }
    }
    if(!std::cin.eof())
        this->print(this->_contacts[str[0] - 1 - '0']);
    
}
