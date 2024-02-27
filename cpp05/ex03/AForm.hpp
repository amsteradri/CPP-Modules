/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AForm.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adgutier <adgutier@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/27 10:50:41 by adgutier          #+#    #+#             */
/*   Updated: 2024/02/27 11:52:16 by adgutier         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include <iostream>


class Bureaucrat;

class AForm {
	private:
		std::string const	_name;
		bool				_isSigned;
		int const			_gradeRequiredToSign;
		int const			_gradeRequiredToExecute;

public:
    AForm(void);
    AForm(std::string const &name, int const &gradeRequiredToSign, int const &gradeRequiredToExecute);
    AForm(AForm const &copy);
	~AForm(void);
    AForm const	&operator=(AForm const &copy);
    std::string const	&getName(void) const;
		bool const			&getIsSigned(void) const;
		int const			&getSignGrade(void) const;
		int const			&getExecGrade(void) const;
        virtual std::string const	&getTarget(void) const = 0;
        void			execute(Bureaucrat const &executor) const;
        void	beSigned(Bureaucrat &bureaucrat);
        virtual void	beExecuted(Bureaucrat const &bureaucrat) const = 0;
        static AForm		*makeForm(std::string const &type, std::string const &target);
    // Exception classes for grade too high and too low
    class GradeTooHighException : public std::exception {
    public:
        const char* what() const throw();
    };

    class GradeTooLowException : public std::exception {
    public:
        const char* what() const throw();
    };
    class SignedException : public std::exception
		{
			public:
				virtual const char* what() const throw();
		};

    class NotSignedException : public std::exception
    {
        public:
            virtual const char* what() const throw();
    };
    class InvalidFormException: public std::exception
		{
			public:
				virtual char const	*what(void) const throw();
		};
};

std::ostream	&operator<<(std::ostream &str, AForm const &AForm);
