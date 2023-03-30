/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   iter.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ayassir <ayassir@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/11 17:00:01 by ayassir           #+#    #+#             */
/*   Updated: 2023/02/13 19:31:18 by ayassir          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef _iter_HPP_
#define _iter_HPP_

#include <iostream>
#include <string>
#define SIZE 5

template <typename T, typename D>
void	iter(T *array, size_t b, D *func)
{
	for (size_t i = 0; i < b; i++)
	{
		func(array[i]);
	}
	std::cout << std::endl;
}

template <typename T>
void	print(const T& a)
{
	std::cout << a << std::endl;
}

#endif