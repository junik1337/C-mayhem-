/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PresidentialPardonForm.cpp                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ayassir <ayassir@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/03 13:38:23 by junik             #+#    #+#             */
/*   Updated: 2023/02/07 16:00:13 by ayassir          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PresidentialPardonForm.hpp"

PresidentialPardonForm::PresidentialPardonForm(std::string name):
	AForm(name, 25, 5)
{
}

PresidentialPardonForm::PresidentialPardonForm()
{
}

PresidentialPardonForm::~PresidentialPardonForm()
{
}

PresidentialPardonForm::PresidentialPardonForm(PresidentialPardonForm const &obj)
{
	if (this != &obj)
		*this = obj;
}

PresidentialPardonForm	&PresidentialPardonForm::operator= (const PresidentialPardonForm &obj)
{
	(void) obj;
	return (*this);
}

void	PresidentialPardonForm::execute(Bureaucrat const &executor) const
{
	checkSigned(executor);
	
	std::cout << this->getName() << " has been pardoned by Zaphod Beeblebrox.";
	std::cout << std::endl;
}

AForm*	PresidentialPardonForm::newForm(std::string name) const
{
	return (new PresidentialPardonForm(name));
}
