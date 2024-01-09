/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Phonebook.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adgutier <adgutier@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/09 10:13:30 by adgutier          #+#    #+#             */
/*   Updated: 2024/01/09 12:43:31 by adgutier         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PHONEBOOK_HPP
# define PHONEBOOK_HPP

#include "Contact.hpp"

class Phonebook{

    private:
        Contact _contacts[8];
        int _index;
        
    public:
    Phonebook(void);
    ~Phonebook(void);
    void add(void);
    void print(Contact contact);
    void search(void);
    Contact	get_contact(int index);
    
};



#endif
