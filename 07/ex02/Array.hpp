/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Array.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ayassir <ayassir@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/11 18:45:43 by ayassir           #+#    #+#             */
/*   Updated: 2023/02/13 19:39:58 by ayassir          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef _Array_HPP_
#define _Array_HPP_

#include <iostream>
#include <exception>

// ******************************************************** //
//                         CLASSES                         //
// ****************************************************** //

template <typename T>
class Array
{
	public	:
		Array ():lenght(0), array(NULL)
		{
		};

		Array (unsigned int n)
		{
			lenght = n;
			array = new T[n];
		};

		Array (Array const &obj)
		{
			this->lenght = obj.lenght;
			this->array = new T[this->lenght];
			for (size_t i = 0; i < this->lenght; i++)
			{
				this->array[i] = obj[i];
			}
		};

		~Array ()
		{
			delete [] this->array;
			this->array = NULL;
		};

		Array &operator= (const Array &obj)
		{
			if (*this != obj)
			{
				delete [] this->array;
				this->array = NULL;
				this->lenght = obj.lenght;
				this->array = new T[this->lenght];
				for (size_t i = 0; i < this->lenght; i++)
				{
					this->array[i] = obj[i];
				}
			}
			return (*this);
		};

		const T&	operator[](size_t size) const
		{
			if (size >= this->lenght || size < 0)
				throw (Array::ErrorFound());
			return (this->array[size]);
		};

		size_t	size(void) const
		{
			return (this->lenght);
		};

		T&	operator[](size_t size)
		{
			if (size >= this->lenght || size < 0)
				throw (Array::ErrorFound());
			return (this->array[size]);
		};

		class ErrorFound : public std::exception{
			const char*	what() const throw()
			{
				return ("The size given is incorrect...");
			};
		};

	private	:
		T		*array;
		size_t	lenght;
};

// ******************************************************** //
//                        FUNCTIONS                        //
// ****************************************************** //

#endif
