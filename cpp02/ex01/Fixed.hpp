/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adgutier <adgutier@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/11 11:30:58 by adgutier          #+#    #+#             */
/*   Updated: 2024/01/11 12:35:36 by adgutier         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FIXED_HPP
#define FIXED_HPP

# include <iostream>
# include <cmath>

// Por ejemplo, si value = 3 y _frac = 8 (representando 8 bits fraccionales), la conversión sería como sigue:

// 3 en binario es 11.
// ft_pow(2, 8) es 256 (o 100000000 en binario).
// Al multiplicar 3 * 256, obtenemos 768 (o 1100000000 en binario), que coloca el 11 en la parte entera y deja 00000000 en la parte fraccionaria.
class Fixed
{
	private:
			int _fixed;
			static const int _bits;
	public:
		Fixed(void);
		~Fixed(void);
		Fixed(Fixed const &copy);
		Fixed(const int value);
		Fixed(const float value);
		Fixed	&operator=(Fixed const &copy);
		int getRawBits( void ) const;
		void setRawBits( int const raw );
		int	toInt(void) const;
		float toFloat(void) const;
	
};

std::ostream	&operator<<(std::ostream &str, Fixed const &fixed_nbr);

#endif

