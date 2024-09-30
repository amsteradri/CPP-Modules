/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   iter.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adgutier <adgutier@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/02 19:34:24 by adgutier          #+#    #+#             */
/*   Updated: 2024/09/02 19:34:24 by adgutier         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include <iostream>

template < typename T >
void    iter( T *array, size_t size, void (*f)(T &) )
{
    for ( size_t i = 0; i < size; i++ )
        f( array[i] );
}

template < typename T >
void    print( T &i )
{
    std::cout << i << std::endl;
}