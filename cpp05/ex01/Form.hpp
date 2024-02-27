/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Form.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adgutier <adgutier@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/27 10:50:41 by adgutier          #+#    #+#             */
/*   Updated: 2024/02/27 11:19:28 by adgutier         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include <iostream>


class Bureaucrat;

class Form {
	private:
		std::string const	_name;
		bool				_isSigned;
		int const			_gradeRequiredToSign;
		int const			_gradeRequiredToExecute;

public:
    Form(void);
    Form(std::string const &name, int const &gradeRequiredToSign, int const &gradeRequiredToExecute);
    Form(Form const &copy);
	~Form(void);
    Form const	&operator=(Form const &copy);
    std::string const	&getName(void) const;
		bool const			&getIsSigned(void) const;
		int const			&getSignGrade(void) const;
		int const			&getExecGrade(void) const;
        void	beSigned(Bureaucrat &bureaucrat);
    // Exception classes for grade too high and too low
    class GradeTooHighException : public std::exception {
    public:
        const char* what() const throw();
    };

    class GradeTooLowException : public std::exception {
    public:
        const char* what() const throw();
    };

};

std::ostream	&operator<<(std::ostream &str, Form const &form);
