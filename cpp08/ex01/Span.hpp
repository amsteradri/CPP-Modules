/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Span.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adgutier <adgutier@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/10 13:05:08 by adgutier          #+#    #+#             */
/*   Updated: 2024/09/10 13:05:08 by adgutier         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include <iostream>
#include <list>
#include <exception>
#include <algorithm>
#include <cstdlib>
#include <ctime>


class Span
{
private:
    std::list<int>  _list;
    unsigned int    _n;

    Span( void );

public:
    Span( unsigned int );
    Span( const Span& );
    ~Span( void );

    Span&               operator=( const Span& );
    void                addNumber( int );
    void                addNumber( std::list<int>::const_iterator, std::list<int>::const_iterator );
    unsigned int        longestSpan( void ) const;
    unsigned int        shortestSpan( void ) const;

    const std::list< int >*   getList( void ) const;
};

std::ostream& operator<<( std::ostream&, const Span& );

void fillSpanWithRandomNumbers(Span& span, size_t numElements);