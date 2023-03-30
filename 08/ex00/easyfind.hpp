/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   easyfind.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ayassir <ayassir@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/13 22:08:58 by ayassir           #+#    #+#             */
/*   Updated: 2023/02/15 15:52:20 by ayassir          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef _easyfind_HPP_
#define _easyfind_HPP_

#include <iostream>
#include <iterator>
#include <vector>

class	ErrorFound : public std::exception{
	const char*	what() const throw()
	{
		return ("No occurrence is found");
	}
};

template <typename T>
typename T::iterator	easyfind(T& container, int integer)
{
	typename T::iterator	temp;

	temp = std::find(container.begin(), container.end(), integer);
	if (temp == container.end())
		throw (ErrorFound());
	return (temp);
}

#endif
