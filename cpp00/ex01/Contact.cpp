/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contact.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adgutier <adgutier@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/09 10:27:46 by adgutier          #+#    #+#             */
/*   Updated: 2024/01/09 11:31:28 by adgutier         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include"Phonebook.hpp"
#include "Contact.hpp"

Contact::Contact(void)
{
}

Contact::~Contact(void)
{
}

std::string Contact::get_name(void)const
{
    return(this->_name);
}

std::string Contact::get_scname(void)const
{
    return(this->_scname);
}

std::string Contact::get_nick(void)const
{
    return(this->_nick);
}

std::string Contact::get_age(void)const
{
    return(this->_age);
}

std::string Contact::get_num(void)const
{
    return(this->_num);
}

void Contact::set_name(std::string str)
{
    this->_name = str;
}

void Contact::set_scname(std::string str)
{
    this->_scname = str;
}

void Contact::set_nick(std::string str)
{
    this->_nick = str;
}

void Contact::set_age(std::string str)
{
    this->_age = str;
}

void Contact::set_num(std::string str)
{
    this->_num = str;
}
