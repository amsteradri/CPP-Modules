/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contact.hpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adgutier <adgutier@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/09 10:17:01 by adgutier          #+#    #+#             */
/*   Updated: 2024/06/10 17:15:04 by adgutier         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CONTACT_HPP
# define CONTACT_HPP

#include <iostream>
#include <string>
#include <iomanip>

class Contact{
    private:
        std::string _name;
        std::string _scname;
        std::string _nick;
        std::string _age;
        std::string _num;
        
    public:
        Contact(void);
        ~Contact(void);
        std::string get_name(void) const;
        std::string get_scname(void) const;
        std::string get_nick(void) const;
        std::string get_age(void) const;
        std::string get_num(void) const;
        void        set_name(std::string str);
        void        set_scname(std::string str);
        void        set_nick(std::string str);
        void        set_age(std::string str);
        void        set_num(std::string str);
    
};







#endif
