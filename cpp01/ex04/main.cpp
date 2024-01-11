/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adgutier <adgutier@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/09 15:01:03 by adgutier          #+#    #+#             */
/*   Updated: 2024/01/11 10:21:06 by adgutier         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <string>
#include <fstream>
#include <sstream>

std::string replaceAll(std::string str, std::string& from, std::string& to) 
{
    size_t start_pos = 0;
    std::string result;

    while (start_pos < str.length()) 
    {
        size_t pos = str.find(from, start_pos);
        if (pos == std::string::npos) 
        {
            result += str.substr(start_pos);
            break;
        }
        result += str.substr(start_pos, pos - start_pos) + to;
        start_pos = pos + from.length();
    }

    return result;
}

int main(int argc, char **argv)
{
    if (argc != 4)
    {
        std::cout << "Warning: execution has format ./sed replace <file> old_word new_word" << std::endl;
    }

    std::string file = argv[1];
    std::string s1 = argv[2];
    std::string s2 = argv[3];

    std::ifstream infile(file);
    if(!infile)
    {
        std::cerr << "Could not open file" << file << std::endl;
        return(1);
    }

    std::ofstream outfile(file + ".replace");
    if(!outfile)
    {
        std::cerr << "Could not create file" << file << std::endl;
        return(1);
    }
    std::stringstream buffer;

    buffer << infile.rdbuf();
    std::string cont = buffer.str();
    
    cont =  replaceAll(cont, s1, s2);
    outfile << cont;
    infile.close();
    outfile.close();
    return(0);
    
     
}
