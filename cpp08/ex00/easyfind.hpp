/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   easyfind.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adgutier <adgutier@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/04 16:35:44 by adgutier          #+#    #+#             */
/*   Updated: 2024/09/04 16:35:44 by adgutier         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include <iostream>
#include <algorithm>
#include <vector>
#include <list>

template < typename T >
void    easyfind( T& container, int value )
{
    if ( std::find( container.begin(), container.end(), value ) != container.end() )
        std::cout << "Found." << std::endl;
    else
        std::cout << "Not found." << std::endl;
}