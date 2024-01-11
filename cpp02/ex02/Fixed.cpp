/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adgutier <adgutier@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/11 11:36:13 by adgutier          #+#    #+#             */
/*   Updated: 2024/01/11 13:52:52 by adgutier         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"

static	float ft_pow(float base, int exp)
{
	float	result;

	if (!exp)
		return (1);
	if (exp < 0)
	{
		base = 1 / base;
		exp *= -1;
	}
	result = base;
	while (--exp)
		result *= base;
	return (result);
}

const int	Fixed::_bits = 8;

Fixed::Fixed(const int value): _fixed(value * ft_pow(2, this->_bits))
{  
	std::cout << "Fixed object created with int constructor" << std::endl; 
}

Fixed::Fixed(const float value): _fixed(value * ft_pow(2, this->_bits))
{  
	std::cout << "Fixed object created with float constructor" << std::endl; 
}

Fixed::Fixed(void): _fixed(0)
{
    std::cout << "Default constructor called" << std::endl;
}

Fixed::~Fixed(void)
{
    std::cout << "Destructor called" << std::endl;
}

Fixed::Fixed(Fixed const & copy)
{
    std::cout << "Copy constructor called" << std::endl;
    *this = copy;
}

Fixed &Fixed::operator=(const Fixed &copy)
{
    std::cout << "Copy assignment operator called" << std::endl;
    this->_fixed = copy.getRawBits();
    return(*this);
}

Fixed	Fixed::operator+(Fixed const &copy) const
{
	Fixed	result(this->toFloat() + copy.toFloat());
	return (result);
}

Fixed	Fixed::operator-(Fixed const &copy) const
{
	Fixed	result(this->toFloat() - copy.toFloat());
	return (result);
}

Fixed	Fixed::operator*(Fixed const &copy) const
{
	Fixed	result(this->toFloat() * copy.toFloat());
	return (result);
}

Fixed	Fixed::operator/(Fixed const &copy) const
{
	Fixed	result(this->toFloat() / copy.toFloat());
	return (result);
}

bool	Fixed::operator==(const Fixed &copy) const
{
	return (this->toFloat() == copy.toFloat());
}

bool	Fixed::operator!=(const Fixed &copy) const
{
	return (this->toFloat() != copy.toFloat());
}

bool	Fixed::operator>(const Fixed &copy) const
{
	return (this->toFloat() > copy.toFloat());
}

bool	Fixed::operator<(const Fixed &copy) const
{
	return (this->toFloat() < copy.toFloat());
}

bool	Fixed::operator>=(const Fixed &copy) const
{
	return (this->toFloat() >= copy.toFloat());
}

bool	Fixed::operator<=(const Fixed &copy) const
{
	return (this->toFloat() <= copy.toFloat());
}

Fixed	&Fixed::operator++(void)
{
	this->setRawBits(this->getRawBits() + 1);
	return (*this);
}

Fixed	&Fixed::operator--(void)
{
	this->setRawBits(this->getRawBits() - 1);
	return (*this);
}

Fixed	Fixed::operator++(int value)
{
	Fixed	aux;

	aux = *this;

	if (!value)
		value = 1;
	this->setRawBits(this->getRawBits() + value);
	return (aux);
}

Fixed	Fixed::operator--(int value)
{
	Fixed	aux;

	aux = *this;

	if (!value)
		value = 1;
	this->setRawBits(this->getRawBits() - value);
	return (aux);
}

const Fixed &Fixed::min(Fixed const &copy1, Fixed const &copy2)
{
	if(copy1 < copy2)
		return(copy1);
	return(copy2);
}

const Fixed &Fixed::max(Fixed const &copy1, Fixed const &copy2)
{
	if(copy1 > copy2)
		return(copy1);
	return(copy2);
}

const Fixed &Fixed::min(Fixed  &copy1, Fixed  &copy2)
{
	if(copy1 < copy2)
		return(copy1);
	return(copy2);
}

const Fixed &Fixed::max(Fixed &copy1, Fixed &copy2)
{
	if(copy1 > copy2)
		return(copy1);
	return(copy2);
}
int	Fixed::getRawBits(void) const
{
	std::cout << "getRawBits member function called" << std::endl;
	return (this->_fixed);
}

void	Fixed::setRawBits(const int raw)
{
	this->_fixed = raw;
}

int	Fixed::toInt(void) const
{
	return (this->_fixed * ft_pow(2, -this->_bits));
}

float	Fixed::toFloat(void) const
{
	return (this->_fixed * ft_pow(2, -this->_bits));
}

std::ostream	&operator<<(std::ostream &str, Fixed const &fixed_nbr)
{
	return (str << fixed_nbr.toFloat());
}
