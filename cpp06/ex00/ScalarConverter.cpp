/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScalarConverter.cpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adgutier <adgutier@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/12 09:54:21 by adgutier          #+#    #+#             */
/*   Updated: 2024/03/12 10:19:10 by adgutier         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScalarConverter.hpp"


// Función	Conversión	Método usado	Manejo de errores
// convertToChar	string → char	strtol()	Valores fuera de rango, caracteres no imprimibles
// convertToInt	string → int	strtol()	Valores fuera de rango
// convertToFloat	string → float	atof()	NaN, inf, precisión .0f
// convertToDouble	string → double	atof()	NaN, inf, precisión .0

ScalarConverter::ScalarConverter(const std::string& str) : _str(str) {}

ScalarConverter::ScalarConverter(const ScalarConverter& other) : _str(other._str) {}

ScalarConverter::~ScalarConverter() {}

ScalarConverter& ScalarConverter::operator=(const ScalarConverter& other)
{
	if (this != &other)
		_str = other._str;
	return *this;
}

void ScalarConverter::convertToChar(const std::string& literal)
{
    errno = 0;
    char *end;
    long int result = std::strtol(literal.c_str(), &end, 10);

    if (literal == end || errno == ERANGE || result < std::numeric_limits<char>::min() || result > std::numeric_limits<char>::max()) {
        std::cout << "char: impossible" << std::endl;
    } else if (std::isprint(static_cast<char>(result))) {
        std::cout << "char: '" << static_cast<char>(result) << "'" << std::endl;
    } else {
        std::cout << "char: Non displayable" << std::endl;
    }
}

void ScalarConverter::convertToInt(const std::string& literal)
{
    errno = 0;
    char *end;
    long int result = std::strtol(literal.c_str(), &end, 10);

    if (literal == end || errno == ERANGE || result < std::numeric_limits<int>::min() || result > std::numeric_limits<int>::max()) {
        std::cout << "int: impossible" << std::endl;
    } else {
        std::cout << "int: " << static_cast<int>(result) << std::endl;
    }
}

void ScalarConverter::convertToFloat(const std::string& literal) 
{
	float floatValue = static_cast<float>(atof(literal.c_str()));

	std::cout << "float: ";
	// atof convierte "nan" y variantes a NaN, que no es igual a sí mismo.
	if (floatValue != floatValue) {
		std::cout << "nan";
	} else if (floatValue == std::numeric_limits<float>::infinity() || floatValue == -std::numeric_limits<float>::infinity()) {
		// Manejar los casos especiales de infinito.
		std::cout << (floatValue < 0 ? "-" : "") << "inf";
	} else {
		// Para números normales, imprime con un decimal asegurando el ".0" para valores enteros.
		std::cout << std::fixed << std::setprecision(1) << floatValue;
	}
	std::cout << "f" << std::endl;
}

void ScalarConverter::convertToDouble(const std::string& literal) 
{
	double doubleValue = atof(literal.c_str());

	std::cout << "double: ";
	// La comprobación de NaN se hace comparando el valor con sí mismo.
	if (doubleValue != doubleValue) {
		std::cout << "nan";
	} else if (doubleValue == std::numeric_limits<double>::infinity() || doubleValue == -std::numeric_limits<double>::infinity()) {
		// Manejar los casos especiales de infinito.
		std::cout << (doubleValue < 0 ? "-" : "") << "inf";
	} else {
		// Para números normales, imprime con un decimal asegurando el ".0" para valores enteros.
		std::cout << std::fixed << std::setprecision(1) << doubleValue;
	}
	std::cout << std::endl;
}

void ScalarConverter::convert() 
{
    convertToChar(_str);   // No usas 'this' aquí
    convertToInt(_str);    // Simplemente pasas '_str'
    convertToFloat(_str);  // como argumento a cada función
    convertToDouble(_str);
}
