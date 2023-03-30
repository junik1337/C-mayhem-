/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ayassir <ayassir@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/14 15:48:03 by ayassir           #+#    #+#             */
/*   Updated: 2023/02/15 13:39:51 by ayassir          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Span.hpp"
#define SIZE 10000

int main()
{
	try
	{
		Span sp = Span(SIZE);

		// sp.addNumber(6);
		// sp.addNumber(3);
		// sp.addNumber(17);
		// sp.addNumber(9);
		// sp.addNumber(11);

		sp.myaddNumber(SIZE);
		for (size_t i = 0; i < SIZE; i++)
		{
			std::cout << sp.getNumber(i) << " ";
		}
		std::cout << std::endl;

		std::cout << sp.shortestSpan() << std::endl;
		std::cout << sp.longestSpan() << std::endl;

	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << '\n';
	}

	return (0);
}
