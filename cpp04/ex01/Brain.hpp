/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Brain.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adgutier <adgutier@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/18 12:42:16 by adgutier          #+#    #+#             */
/*   Updated: 2024/01/18 13:16:47 by adgutier         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include <iostream>

class Brain
{
    private:
            std::string _ideas[100];
    public:
                Brain(void);
                Brain(Brain const &copy);
                virtual ~Brain(void);
                Brain &operator=(const Brain &copy);
                std::string const	&getIdea(int const &idea) const;
                void	setIdea(std::string const &idea, int const &index);
        
  
    
};
