/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bureaucrat.hpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adgutier <adgutier@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/18 14:34:30 by adgutier          #+#    #+#             */
/*   Updated: 2024/02/27 12:06:57 by adgutier         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include <iostream>

class AForm;

class Bureaucrat
{
    private:
        std::string _name;
        int					_grade;

    public:
        Bureaucrat(void);
        Bureaucrat(std::string const &name, int grade);
        Bureaucrat(Bureaucrat const &copy);
        Bureaucrat	const &operator=(const Bureaucrat &copy);
        ~Bureaucrat(void);
        
        void    gradeUp(void);
        void	gradeDown(void);
        std::string const	&getName(void) const;
        int const &getGrade(void) const;
        void	signForm(AForm &AForm);
        void	executeForm(AForm const &AForm);
        class GradeTooHighException: public std::exception
		{
			public:
				virtual char const	*what(void) const throw();
		};
		class GradeTooLowException: public std::exception
		{
			public:
				virtual char const	*what(void) const throw();
		};
};

std::ostream	&operator<<(std::ostream &str, Bureaucrat const &bureaucrat);
