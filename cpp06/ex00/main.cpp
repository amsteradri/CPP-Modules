/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adgutier <adgutier@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/12 10:06:51 by adgutier          #+#    #+#             */
/*   Updated: 2024/03/12 11:13:24 by adgutier         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScalarConverter.hpp"

int main(int argc, char** argv) {
    if (argc != 2) {
        std::cout << "Usage: ./converter <value>" << std::endl;
        return 1;
    }

    std::string input = argv[1];
    ScalarConverter converter(input);
    converter.convert(); // Ahora convert es un método no estático y se llama en la instancia

    return 0;
}

