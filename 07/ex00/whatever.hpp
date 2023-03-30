/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   whatever.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ayassir <ayassir@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/11 16:11:27 by ayassir           #+#    #+#             */
/*   Updated: 2023/02/11 16:57:14 by ayassir          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef _whatever_HPP_
#define _whatever_HPP_

#include <iostream>

template <typename T>
void	swap(T &a, T &b)
{
	T	temp;

	temp = a;
	a = b;
	b = temp;
}

template <typename T>
T	max(T a, T b)
{
	if (a > b)
		return (a);
	return (b);
}

template <typename T>
T	min(T a, T b)
{
	if (a < b)
		return (a);
	return (b);
}

#endif
