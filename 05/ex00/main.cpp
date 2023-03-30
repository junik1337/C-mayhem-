/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ayassir <ayassir@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/01 13:08:36 by junik             #+#    #+#             */
/*   Updated: 2023/02/07 16:01:44 by ayassir          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"

int main()
{
	try
	{
		try
		{
			Bureaucrat test("test", 0);	
		}
		catch(const std::exception& e)
		{
			std::cerr << e.what() << '\n';
		}
		
		Bureaucrat Tom("Tom", 150);
		Bureaucrat Jerry("Jerry", 1);

		std::cout << Tom << std::endl;
		std::cout << Jerry << std::endl;
		std::cout << std::endl;
		
		// Tom.DecrementGrade();
		// Jerry.IncrementGrade();
		//std::cout << Tom << std::endl;
		//std::cout << Jerry << std::endl;
		//std::cout << std::endl;

		Tom.IncrementGrade();
		Jerry.DecrementGrade();

		std::cout << std::endl;

		std::cout << Tom << std::endl;
		std::cout << Jerry << std::endl;
		std::cout << std::endl;

		try
		{
			Tom.DecrementGrade();
			std::cout << Tom << std::endl;
			std::cout << std::endl;
			Tom.DecrementGrade();
			std::cout << Tom << std::endl;
			std::cout << std::endl;
		}
		catch(const std::exception& e)
		{
			std::cerr << e.what() << '\n';
		}

		try
		{
			Jerry.IncrementGrade();
			std::cout << Jerry << std::endl;
			std::cout << std::endl;
			Jerry.IncrementGrade();
			std::cout << Jerry << std::endl;
			std::cout << std::endl;
		}
		catch(const std::exception& e)
		{
			std::cerr << e.what() << '\n';
		}
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << '\n';
	}

	return (0);
}
