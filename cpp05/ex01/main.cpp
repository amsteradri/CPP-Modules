/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adgutier <adgutier@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/27 10:22:22 by adgutier          #+#    #+#             */
/*   Updated: 2024/02/27 11:14:46 by adgutier         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"
#include "Form.hpp"

int main(void)
{
    /* Crear un formulario con un grado demasiado alto */
    {
        try
        {
            Form formularioAlto("FormularioAlto", 0, 5); // Cambiando el nombre del formulario y el grado
            std::cout << formularioAlto << std::endl;
        }
        catch(std::exception &e)
        {
            std::cerr << e.what() << std::endl;
        }
        
    }

    std::cout << "\n --------------------- \n\n";

    /* Crear formulario y firmarlo sin excepciones */
    {
        try
        {
            Bureaucrat sara("Sara", 10); // Cambiando el nombre del burócrata y el grado
            Form formularioEstandar("FormularioEstandar", 15, 30); // Cambiando el nombre del formulario y el grado
            std::cout << sara << std::endl;
            std::cout << formularioEstandar << std::endl;
            sara.signForm(formularioEstandar);
            std::cout << formularioEstandar << std::endl;
        }
        catch (std::exception &e)
        {
            std::cout << e.what() << std::endl;
        }
    }
    
    std::cout << "\n --------------------- \n\n";

    /* Crear formulario e intentar firmarlo pero el grado no es suficiente */
    {
        try
        {
            Bureaucrat alex("Alex", 40); // Cambiando el nombre del burócrata y el grado
            Form formularioDificil("FormularioDificil", 25, 50); // Cambiando el nombre del formulario y el grado
            std::cout << alex << std::endl;
            std::cout << formularioDificil << std::endl;
            alex.signForm(formularioDificil);
            std::cout << formularioDificil << std::endl;
        }
        catch (std::exception &e)
        {
            std::cout << e.what() << std::endl;
        }
    }
    return (0);
}
