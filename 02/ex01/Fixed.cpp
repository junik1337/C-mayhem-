/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ayassir <ayassir@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/28 11:36:03 by ayassir           #+#    #+#             */
/*   Updated: 2022/12/30 12:44:46 by ayassir          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"

Fixed::Fixed(void)
{
	std::cout << "Default constructor called" << std::endl;
	_FixedPointValue = 0;
}

Fixed::Fixed(int to_convert)
{
	std::cout << "Int constructor called" << std::endl;
	_FixedPointValue = to_convert << _raw;
}

Fixed::Fixed(float to_convert)
{
	std::cout << "Float constructor called" << std::endl;
	_FixedPointValue = roundf(to_convert * 256);
}

Fixed::Fixed(const Fixed &src)
{
	std::cout << "Copy constructor called" << std::endl;
	*this = src;
}

Fixed	&Fixed::operator=(const Fixed &fix)
{
	std::cout << "Copy assignment operator called" << std::endl;
	if (this != &fix)
		this->_FixedPointValue = fix.getRawBits();
	return (*this);
}

Fixed::~Fixed()
{
	std::cout << "Destructor called" << std::endl;
}

void	Fixed::setRawBits(int const raw)
{
	this->_FixedPointValue = raw;
}

int		Fixed::getRawBits(void) const
{
	return (this->_FixedPointValue);
}

int		Fixed::toInt(void) const
{
	return (_FixedPointValue >> _raw);
}

float		Fixed::toFloat(void) const
{
	return ((float)(_FixedPointValue) / 256); // (the value / 256)
}

std::ostream & operator<<(std::ostream &stream, Fixed const &fix)
{
    stream << fix.toFloat();
    return (stream);
}
