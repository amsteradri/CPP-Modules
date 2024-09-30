/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adgutier <adgutier@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/02 19:37:40 by adgutier          #+#    #+#             */
/*   Updated: 2024/09/02 19:37:40 by adgutier         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "iter.hpp"

int main( void )
{
    int n = 5;
    int arr1[] = { 1, 2, 3, 4, 5 };

    std::cout << "arr1: " << std::endl;
    iter(arr1, n, &print);

    n = 5;
    double arr2[] = { 1.1, 2.2, 3.3, 4.4, 5.5 };

    std::cout << "\narr2: " << std::endl;
    iter(arr2, n, &print);

    n = 5;
    char arr3[] = { 'a', 'b', 'c', 'd', 'e' };

    std::cout << "\narr3: " << std::endl;
    iter(arr3, n, &print);

    n = 5;
    std::string arr4[] = { "one", "two", "three", "four", "five" };

    std::cout << "\narr4: " << std::endl;
    iter(arr4, n, &print);

    return 0;
}