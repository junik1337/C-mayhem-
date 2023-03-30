/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ayassir <ayassir@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/03 13:38:20 by junik             #+#    #+#             */
/*   Updated: 2023/02/07 16:01:15 by ayassir          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"
#include "AForm.hpp"
#include "ShrubberyCreationForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "PresidentialPardonForm.hpp"

int main()
{
	try
	{
		Bureaucrat Tom("Tom", 150);
		Bureaucrat Jerry("Jerry", 1);
		ShrubberyCreationForm Spike("Spike");
		RobotomyRequestForm Robyn("Robyn");
		PresidentialPardonForm Puggsy("Puggsy");

		std::cout << Tom << std::endl;
		std::cout << Jerry << std::endl;
		std::cout << Spike << std::endl;
		std::cout << Robyn << std::endl;
		std::cout << Puggsy << std::endl;

		std::cout << std::endl;

		Tom.signForm(Spike);
		Tom.IncrementGrade();
		Tom.IncrementGrade();
		Tom.IncrementGrade();
		Tom.IncrementGrade();
		Tom.IncrementGrade();
		std::cout << Tom << std::endl;
		Tom.signForm(Spike);
		Tom.signForm(Robyn);
		Tom.signForm(Puggsy);

		std::cout << std::endl;

		std::cout << Tom << std::endl;
		std::cout << Jerry << std::endl;
		std::cout << Spike << std::endl;
		std::cout << Robyn << std::endl;
		std::cout << Puggsy << std::endl;

		std::cout << std::endl;

		Jerry.signForm(Spike);
		Jerry.signForm(Robyn);
		Jerry.signForm(Puggsy);	

		std::cout << std::endl;

		std::cout << Tom << std::endl;
		std::cout << Jerry << std::endl;
		std::cout << Spike << std::endl;
		std::cout << Robyn << std::endl;
		std::cout << Puggsy << std::endl;

		std::cout << std::endl;

		Tom.executeForm(Spike);
		std::cout << std::endl;
		Jerry.executeForm(Spike);

		std::cout << std::endl;

		Tom.executeForm(Robyn);
		std::cout << std::endl;
		Jerry.executeForm(Robyn);

		std::cout << std::endl;

		Tom.executeForm(Puggsy);
		std::cout << std::endl;
		Jerry.executeForm(Puggsy);

		std::cout << std::endl;
		
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << '\n';
	}
	
	return (0);
}
