/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScalarConverter.hpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adgutier <adgutier@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/12 09:54:24 by adgutier          #+#    #+#             */
/*   Updated: 2024/03/12 10:20:13 by adgutier         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include <iostream>
#include <sstream>
#include <string>
#include <cstdlib>
#include <iomanip> 

class ScalarConverter {

    private:
        std::string _str;
		 // Asegúrate de que esta línea esté presente
		void convertToChar(const std::string& literal);
		void convertToInt(const std::string& literal);
		void convertToFloat(const std::string& literal);
		void convertToDouble(const std::string& literal);

	public:

		ScalarConverter(const std::string& str);
		ScalarConverter(const ScalarConverter& other);
		~ScalarConverter();
		ScalarConverter& operator=(const ScalarConverter& other);
		void convert();


		
};
