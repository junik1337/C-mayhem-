/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Span.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ayassir <ayassir@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/14 15:47:59 by ayassir           #+#    #+#             */
/*   Updated: 2023/02/15 13:32:04 by ayassir          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef _Span_HPP_
#define _Span_HPP_

#include <iostream>
#include <vector>
#include <algorithm>

// ******************************************************** //
//                         CLASSES                         //
// ****************************************************** //

class	Span
{
	public	:
		Span ();
		Span (unsigned int N);
		Span (Span const &obj);
		~Span ();
		Span &operator= (const Span &obj);

		void				myaddNumber(unsigned int number);
		void				addNumber(unsigned int number);
		unsigned int		getNumber(unsigned int tab) const;
		unsigned int		longestSpan(void) const;
		unsigned int		shortestSpan(void) const;

		class ErrorFound : public std::exception{
			const char*	what() const throw()
			{
				return ("You can't add more numbers...");
			}
		};

		class ErrorFoundSize : public std::exception{
			const char*	what() const throw()
			{
				return ("The vector's size is not over 2...");
			}
		};

		class ErrorFoundAdd : public std::exception{
			const char*	what() const throw()
			{
				return ("The vector can't hold that size...");
			}
		};

	private	:
		unsigned int		size;
		std::vector<int>	tab;
};

// ******************************************************** //
//                        FUNCTIONS                        //
// ****************************************************** //

#endif
