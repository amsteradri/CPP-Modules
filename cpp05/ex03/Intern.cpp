/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Intern.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adgutier <adgutier@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/27 12:53:07 by adgutier          #+#    #+#             */
/*   Updated: 2024/02/27 13:00:43 by adgutier         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Intern.hpp"

Intern::Intern(void) {}

Intern::Intern(Intern const &copy)
{
	*this = copy;
}

Intern::~Intern(void) {}

Intern const	&Intern::operator=(const Intern &copy)
{
	(void)copy;
	return (*this);
}

AForm	*Intern::makeForm(const std::string &type, const std::string &target)
{
	AForm *form = NULL;

	// Array con los nombres de los formularios
	std::string formTypes[3] = {
		"robotomy request",
		"shrubbery creation",
		"presidential pardon"
	};

	// Array con los formularios correspondientes
	AForm *forms[3] = {
		new RobotomyRequestForm(target),
		new ShrubberyCreationForm(target),
		new PresidentialPardonForm(target)
	};

	for (int i = 0; i < 3; i++)
	{
		if (type == formTypes[i])
		{
			form = forms[i];
			std::cout << "Intern creates " << form->getName() << " targeting " << target << std::endl;
			// Eliminar las otras instancias creadas para evitar fugas de memoria
			for (int j = 0; j < 3; j++)
			{
				if (j != i)
					delete forms[j];
			}
			return form;
		}
	}

	// Si no se encontró el formulario, eliminar las instancias creadas y lanzar excepción
	for (int i = 0; i < 3; i++)
		delete forms[i];

	throw std::invalid_argument("Invalid form type: " + type);
}
