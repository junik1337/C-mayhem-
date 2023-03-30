/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ayassir <ayassir@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/28 11:36:03 by ayassir           #+#    #+#             */
/*   Updated: 2022/12/29 17:22:41 by ayassir          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"

Fixed::Fixed(void)
{
	_FixedPointValue = 0;
}

Fixed::Fixed(int to_convert)
{
	_FixedPointValue = to_convert << _raw;
}

Fixed::Fixed(float to_convert)
{
	_FixedPointValue = roundf(to_convert * (1 << _raw)); // to_convert * 256
}

Fixed::Fixed(const Fixed &src)
{
	this->setRawBits(src.getRawBits());
}

Fixed	&Fixed::operator=(const Fixed &fix)
{
	if (this != &fix)
		this->_FixedPointValue = fix.getRawBits();
	return (*this);
}

Fixed	&Fixed::operator+(const Fixed &fix)
{
	if (this != &fix)
		this->_FixedPointValue += fix.getRawBits();
	return (*this);
}

Fixed	&Fixed::operator-(const Fixed &fix)
{
	if (this != &fix)
		this->_FixedPointValue -= fix.getRawBits();
	return (*this);
}

Fixed	&Fixed::operator*(const Fixed &fix)
{
	if (this != &fix)
	{
		this->_FixedPointValue *= fix._FixedPointValue;
		this->_FixedPointValue /= 256;
	}
	return (*this);
}

Fixed	&Fixed::operator/(const Fixed &fix)
{
	if (this != &fix)
	{
		this->_FixedPointValue /= (fix.getRawBits() / 256);
	}
	return (*this);
}

bool	Fixed::operator==(const Fixed &fix) const
{
	if (_FixedPointValue == fix.getRawBits())
		return (true);
	return (false);
}

bool	Fixed::operator!=(const Fixed &fix) const
{
	if (_FixedPointValue != fix.getRawBits())
		return (true);
	return (false);}

bool	Fixed::operator<=(const Fixed &fix) const
{
	if (_FixedPointValue <= fix.getRawBits())
		return (true);
	return (false);
}

bool	Fixed::operator>=(const Fixed &fix) const
{
	if (_FixedPointValue >= fix.getRawBits())
		return (true);
	return (false);
}

bool	Fixed::operator>(const Fixed &fix) const
{
	if (_FixedPointValue > fix.getRawBits())
		return (true);
	return (false);
}

bool	Fixed::operator<(const Fixed &fix) const
{
	if (_FixedPointValue < fix.getRawBits())
		return (true);
	return (false);
}

Fixed	Fixed::operator++(int)
{
	Fixed	temp = *this;
	++*this;
	return (temp);
}

Fixed	&Fixed::operator++()
{
	_FixedPointValue++;
	return (*this);
}

Fixed	&Fixed::operator--()
{
	--_FixedPointValue;
	return (*this);
}

Fixed	Fixed::operator--(int)
{
	Fixed	temp = *this;

	temp._FixedPointValue--;
	return (temp);
}

Fixed::~Fixed()
{
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
	return ((float)(_FixedPointValue) / (1 << _raw)); // the value / 256
}

Fixed	Fixed::max(const Fixed &a, const Fixed &b)
{
	if (a._FixedPointValue > b._FixedPointValue)
		return (a);
	return (b);
}

Fixed	Fixed::max(Fixed &a, Fixed &b)
{
	if (a._FixedPointValue > b._FixedPointValue)
		return (a);
	return (b);
}

Fixed	Fixed::min(const Fixed &a, const Fixed &b)
{
	if (a._FixedPointValue < b._FixedPointValue)
		return (a);
	return (b);
}

Fixed	Fixed::min(Fixed &a, Fixed &b)
{
	if (a._FixedPointValue < b._FixedPointValue)
		return (a);
	return (b);
}

std::ostream & operator<<(std::ostream &stream, Fixed const &fix)
{
    stream << fix.toFloat();
    return (stream);
}
