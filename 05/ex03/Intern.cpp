/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Intern.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ayassir <ayassir@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/06 15:50:07 by ayassir           #+#    #+#             */
/*   Updated: 2023/02/07 16:00:02 by ayassir          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Intern.hpp"

Intern::Intern()
{
	this->f[0] = new ShrubberyCreationForm();
	this->f[1] = new RobotomyRequestForm();
	this->f[2] = new PresidentialPardonForm();
}

Intern::~Intern()
{
	delete this->f[0];
	delete this->f[1];
	delete this->f[2];
}

Intern::Intern(Intern const &obj)
{
	if (this != &obj)
		*this = obj;
}

Intern	&Intern::operator= (const Intern &obj)
{
	if (this != &obj)
		*this = obj;
	return (*this);
}

const char*	Intern::FormNotFound::what() const throw()
{
	return ("Form not found, try again with a correct one");
}

AForm*	Intern::makeForm(std::string name, std::string target)
{
	std::string		targets[3] = {"ShrubberyCreation", "RobotomyRequest", "PresidentialPardon"};

	for (int i = 0; i < 3; i++)
	{
		if (targets[i] == target)
			return (this->f[i]->newForm(name));
	}
	throw (Intern::FormNotFound());
	return (NULL);
}
