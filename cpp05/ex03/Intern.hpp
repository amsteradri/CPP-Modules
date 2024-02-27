/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Intern.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adgutier <adgutier@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/27 12:53:43 by adgutier          #+#    #+#             */
/*   Updated: 2024/02/27 13:00:48 by adgutier         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include <iostream>
#include "ShrubberyCreationForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "PresidentialPardonForm.hpp"

class Form;

class Intern
{
	public:
		/* Constructors & Destructors */
		Intern(void);
		Intern(Intern const &copy);
		~Intern(void);

		/* Basic Operators */
		Intern const	&operator=(Intern const &copy);

		/* Main Member Functions */
		AForm	*makeForm(std::string const &type, std::string const &target);
};
