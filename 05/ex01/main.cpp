/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ayassir <ayassir@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/01 13:08:36 by junik             #+#    #+#             */
/*   Updated: 2023/02/07 16:01:28 by ayassir          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"
#include "Form.hpp"

int main()
{
	try
	{
		Bureaucrat Tom("Tom", 150);
		Bureaucrat Jerry("Jerry", 1);
		Form Spike("Spike", 50, 50);

		std::cout << Tom << std::endl;
		std::cout << Jerry << std::endl;
		std::cout << Spike << std::endl;
		std::cout << std::endl;
		
		Tom.signForm(Spike);
		std::cout << std::endl;
		std::cout << Tom << std::endl;
		std::cout << Jerry << std::endl;
		std::cout << Spike << std::endl;
		std::cout << std::endl;
		Jerry.signForm(Spike);
		std::cout << std::endl;	
		std::cout << Tom << std::endl;
		std::cout << Jerry << std::endl;
		std::cout << Spike << std::endl;
		std::cout << std::endl;	

		Jerry.signForm(Spike);
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << '\n';
	}
	
	return (0);
}