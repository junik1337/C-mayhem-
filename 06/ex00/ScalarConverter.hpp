/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScalarConverter.hpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ayassir <ayassir@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/07 19:05:59 by ayassir           #+#    #+#             */
/*   Updated: 2023/02/11 14:03:56 by ayassir          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef _ScalarConverter_HPP_
#define _ScalarConverter_HPP_

#include <iostream>
#include <string>

// ******************************************************** //
//                         CLASSES                         //
// ****************************************************** //

class	ScalarConverter
{
	public	:
		~ScalarConverter ();
		ScalarConverter &operator= (const ScalarConverter &obj);

		static void	convert(std::string _convert);

		class ErroFound : public std::exception {
			const char	*what() const throw();	
		};
	private :
		ScalarConverter (ScalarConverter const &obj);
		ScalarConverter ();
};

// ******************************************************** //
//                        FUNCTIONS                        //
// ****************************************************** //

#endif
