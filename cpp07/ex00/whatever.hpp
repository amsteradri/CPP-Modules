/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   whatever.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adgutier <adgutier@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/02 19:26:01 by adgutier          #+#    #+#             */
/*   Updated: 2024/09/02 19:26:01 by adgutier         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include <iostream>

template<typename T>
void		swap(T& a, T& b)
{
	T	tmp;

	tmp = a;
	a = b;
	b = tmp;
}

template<typename T>
const T&	min(T& a, T& b)
{
	return (a < b ? a : b);
}

template<typename T>
const T&	max(T& a, T& b)
{
	return (a > b ? a : b);
}