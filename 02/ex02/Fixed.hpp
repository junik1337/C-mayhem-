/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ayassir <ayassir@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/28 11:35:44 by ayassir           #+#    #+#             */
/*   Updated: 2022/12/29 11:18:26 by ayassir          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FIXED_HPP
# define FIXED_HPP

# include <iostream>
# include <cmath>

class Fixed {
	private :
		int					_FixedPointValue;
		static const int	_raw = 8;
	public :
		Fixed();
		~Fixed();
		Fixed(const int to_convert);
		Fixed(const float to_convert);
		Fixed(Fixed const & src);
		Fixed			&operator=(const Fixed &fix);
		Fixed			&operator+(const Fixed &fix);
		Fixed			&operator-(const Fixed &fix);
		Fixed			&operator*(const Fixed &fix);
		Fixed			&operator/(const Fixed &fix);
		Fixed			operator++(int);
		Fixed			&operator++();
		Fixed			operator--(int);
		Fixed			&operator--();
		bool			operator==(const Fixed &fix) const;
		bool 			operator!=(const Fixed &fix) const;
		bool			operator<(const Fixed &fix) const;
		bool			operator>(const Fixed &fix) const;
		bool			operator>=(const Fixed &fix) const;
		bool			operator<=(const Fixed &fix) const;
		int				getRawBits(void) const;
		void			setRawBits(int const raw);
    	float			 toFloat(void) const;
    	int     		toInt(void) const;
		static Fixed	max(const Fixed &a, const Fixed &b);
		static Fixed	max(Fixed &a, Fixed &b);
		static Fixed	min(const Fixed &a, const Fixed &b);
		static Fixed	min(Fixed &a, Fixed &b);
		
};

std::ostream & operator<<(std::ostream &stream, Fixed const &fix);

#endif