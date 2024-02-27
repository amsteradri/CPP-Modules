/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adgutier <adgutier@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/27 10:22:22 by adgutier          #+#    #+#             */
/*   Updated: 2024/02/27 10:32:51 by adgutier         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"

int main(void)
{
        std::cout << "\n --------------------- \n\n";
    /* Lanza una excepción al llamar al constructor con un grado demasiado alto */
    {
        try
        {
            Bureaucrat luis("Luis", 0); // Grado demasiado alto, mínimo permitido es 1
            std::cout << luis << std::endl;
        }
        catch (std::exception &e)
        {
            std::cout << e.what() << std::endl;
        }
    }

    std::cout << "\n --------------------- \n\n";

    /* Lanza una excepción al llamar al constructor con un grado demasiado bajo */
    {
        try
        {
            Bureaucrat ana("Ana", 151); // Grado demasiado bajo, máximo permitido es 150
            std::cout << ana << std::endl;
        }
        catch (std::exception &e)
        {
            std::cout << e.what() << std::endl;
        }
    }

    std::cout << "\n --------------------- \n\n";
    
    /* Lanza una excepción al llamar a gradeUp */
    {   
        try 
        {
            Bureaucrat carlos("Carlos", 2); // Intenta mejorar el grado más allá del límite superior
            std::cout << carlos << std::endl;
            carlos.gradeUp();
            std::cout << carlos << std::endl;
            carlos.gradeUp(); // Debería lanzar una excepción aquí
            std::cout << carlos << std::endl;
        }
        catch (std::exception &e)
        {
            std::cout << e.what() << std::endl;
        }
    }

    std::cout << "\n --------------------- \n\n";

    /* Lanza una excepción al llamar a gradeDown */
    {   
        try 
        {
            Bureaucrat sofia("Sofia", 148); // Intenta reducir el grado más allá del límite inferior
            std::cout << sofia << std::endl;
            sofia.gradeDown();
            std::cout << sofia << std::endl;
            sofia.gradeDown();
            std::cout << sofia << std::endl;
            sofia.gradeDown(); // Debería lanzar una excepción aquí
            std::cout << sofia << std::endl;
        }
        catch (std::exception &e)
        {
            std::cout << e.what() << std::endl;
        }
    }
    return (0);
}
