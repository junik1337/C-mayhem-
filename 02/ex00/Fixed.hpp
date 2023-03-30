/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ayassir <ayassir@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/28 09:15:18 by ayassir           #+#    #+#             */
/*   Updated: 2022/12/28 11:25:46 by ayassir          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FIXED_HPP
# define FIXED_HPP

# include <iostream>

class Fixed {
	private :
		int					_FixedPointValue;
		static const int	_raw = 8;
	public :
		Fixed();
		Fixed(Fixed const & src);
		~Fixed();
		Fixed	&operator=(const Fixed &fix);
		int		getRawBits(void) const;
		void	setRawBits(int const raw);
};
#endif