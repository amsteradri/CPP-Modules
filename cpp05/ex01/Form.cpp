/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Form.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adgutier <adgutier@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/27 10:50:28 by adgutier          #+#    #+#             */
/*   Updated: 2024/02/27 11:46:18 by adgutier         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Form.hpp"
#include "Bureaucrat.hpp"

Form::Form(void): _name("default"), _isSigned(0), _gradeRequiredToSign(30), _gradeRequiredToExecute(60) {}

Form::Form(std::string const &name, int const &gradeRequiredToSign, int const &gradeRequiredToExecute): _name(name), _isSigned(0), _gradeRequiredToSign(gradeRequiredToSign), _gradeRequiredToExecute(gradeRequiredToExecute)
{
	if (this->_gradeRequiredToSign < 1)
		throw (Form::GradeTooHighException());
	else if (this->_gradeRequiredToSign > 150)
		throw (Form::GradeTooLowException());
	if (this->_gradeRequiredToExecute < 1)
		throw (Form::GradeTooHighException());
	else if (this->_gradeRequiredToExecute > 150)
		throw (Form::GradeTooLowException());
}

Form::Form(Form const &copy): _name(copy._name), _isSigned(copy._isSigned), _gradeRequiredToSign(copy._gradeRequiredToSign), _gradeRequiredToExecute(copy._gradeRequiredToExecute)
{
	*this = copy;
}

Form::~Form(void) {}

Form const	&Form::operator=(const Form &copy)
{
	this->_isSigned = copy._isSigned;
	return (*this);
}

std::string const	&Form::getName(void) const
{
	return (this->_name);
}

int const	&Form::getSignGrade(void) const
{
	return (this->_gradeRequiredToSign);
}

int const	&Form::getExecGrade(void) const
{
	return (this->_gradeRequiredToExecute);
}

bool const	&Form::getIsSigned(void) const
{
	return (this->_isSigned);
}

void	Form::beSigned(Bureaucrat &bureaucrat)
{
	if (bureaucrat.getGrade() > this->_gradeRequiredToSign)
		throw (Form::GradeTooLowException());
	else
	{
		this->_isSigned = 1;
		std::cout << bureaucrat.getName() << " successfully signed " << this->_name << std::endl;
	}
}

char const	*Form::GradeTooHighException::what(void) const throw()
{
	return ("Grade is too high");
}

char const	*Form::GradeTooLowException::what(void) const throw()
{
	return ("Grade is too low");
}

std::ostream	&operator<<(std::ostream &str, Form const &form)
{
	return (str << form.getName() << " form, signed: " << form.getIsSigned() << ", sign grade: " << form.getSignGrade() << ", exec grade: " << form.getExecGrade());
}

