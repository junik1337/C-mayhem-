/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ayassir <ayassir@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/03 13:38:20 by junik             #+#    #+#             */
/*   Updated: 2023/02/07 16:00:58 by ayassir          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"
#include "AForm.hpp"
#include "ShrubberyCreationForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "PresidentialPardonForm.hpp"
#include "Intern.hpp"

int main()
{
	try
	{
		Bureaucrat	Tom("Tom", 20);
		AForm		*Jerry;
		Intern		Butch;

		Jerry = Butch.makeForm("Quacker", "ShrubberyCre1ation");
		
		std::cout << std::endl;

		Tom.signForm(*Jerry);
		
		std::cout << std::endl;

		std::cout << *Jerry << std::endl;
		
		std::cout << std::endl;
		
		Tom.executeForm(*Jerry);		
		
		std::cout << std::endl;
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << '\n';
	}
	
	return (0);
}