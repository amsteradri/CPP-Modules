/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AForm.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adgutier <adgutier@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/27 10:50:28 by adgutier          #+#    #+#             */
/*   Updated: 2024/02/27 11:49:43 by adgutier         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "AForm.hpp"
#include "Bureaucrat.hpp"
#include "ShrubberyCreationForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "PresidentialPardonForm.hpp"

AForm::AForm(void): _name("default"), _isSigned(0), _gradeRequiredToSign(30), _gradeRequiredToExecute(60) {}

AForm::AForm(std::string const &name, int const &gradeRequiredToSign, int const &gradeRequiredToExecute): _name(name), _isSigned(0), _gradeRequiredToSign(gradeRequiredToSign), _gradeRequiredToExecute(gradeRequiredToExecute)
{
	if (this->_gradeRequiredToSign < 1)
		throw (AForm::GradeTooHighException());
	else if (this->_gradeRequiredToSign > 150)
		throw (AForm::GradeTooLowException());
	if (this->_gradeRequiredToExecute < 1)
		throw (AForm::GradeTooHighException());
	else if (this->_gradeRequiredToExecute > 150)
		throw (AForm::GradeTooLowException());
}

AForm::AForm(AForm const &copy): _name(copy._name), _isSigned(copy._isSigned), _gradeRequiredToSign(copy._gradeRequiredToSign), _gradeRequiredToExecute(copy._gradeRequiredToExecute)
{
	*this = copy;
}

AForm::~AForm(void) {}

AForm const	&AForm::operator=(const AForm &copy)
{
	this->_isSigned = copy._isSigned;
	return (*this);
}

std::string const	&AForm::getName(void) const
{
	return (this->_name);
}

int const	&AForm::getSignGrade(void) const
{
	return (this->_gradeRequiredToSign);
}

int const	&AForm::getExecGrade(void) const
{
	return (this->_gradeRequiredToExecute);
}

bool const	&AForm::getIsSigned(void) const
{
	return (this->_isSigned);
}

void	AForm::beSigned(Bureaucrat &bureaucrat)
{
	if (bureaucrat.getGrade() > this->_gradeRequiredToSign)
		throw (AForm::GradeTooLowException());
	else
	{
		this->_isSigned = 1;
		std::cout << bureaucrat.getName() << " successfully signed " << this->_name << std::endl;
	}
}

void	AForm::execute(Bureaucrat const &executor) const
{
	if (!this->_isSigned)
		throw (AForm::NotSignedException());
	else if (executor.getGrade() > this->_gradeRequiredToSign)
		throw (AForm::GradeTooLowException());
	else
	{
		std::cout << executor.getName() << " executes AForm: " << this->_name << std::endl;
		this->beExecuted(executor);
	}
}

AForm	*AForm::makeForm(const std::string &type, const std::string &target)
{
	AForm	*form;

	form = NULL;
	form = ShrubberyCreationForm::makeForm(form, type, target);
	form = RobotomyRequestForm::makeForm(form, type, target);
	form = PresidentialPardonForm::makeForm(form, type, target);
	return (form);
}

char const	*AForm::GradeTooHighException::what(void) const throw()
{
	return ("Grade is too high");
}

char const	*AForm::GradeTooLowException::what(void) const throw()
{
	return ("Grade is too low");
}

char const	*AForm::InvalidFormException::what(void) const throw()
{
	return ("Invalid Form Request");
}

const char* AForm::SignedException::what() const throw()
{
	return "Form is already signed!";
}

const char* AForm::NotSignedException::what() const throw()
{
	return "Form is not signed already. You need to sign it before execute it!";
}

std::ostream	&operator<<(std::ostream &str, AForm const &AForm)
{
	return (str << AForm.getName() << " AForm, signed: " << AForm.getIsSigned() << ", sign grade: " << AForm.getSignGrade() << ", exec grade: " << AForm.getExecGrade());
}

