/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   RobotomyRequestForm.cpp                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ayassir <ayassir@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/03 13:38:26 by junik             #+#    #+#             */
/*   Updated: 2023/02/07 15:54:15 by ayassir          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "RobotomyRequestForm.hpp"

RobotomyRequestForm::RobotomyRequestForm():AForm("Default", 150, 150)
{
}

RobotomyRequestForm::RobotomyRequestForm(std::string name): AForm(name, 72, 45)
{
}

RobotomyRequestForm::~RobotomyRequestForm()
{
}

RobotomyRequestForm::RobotomyRequestForm(RobotomyRequestForm const &obj)
{
	if (this != &obj)
		*this = obj;
}

RobotomyRequestForm	&RobotomyRequestForm::operator= (const RobotomyRequestForm &obj)
{
	(void) obj;
	return (*this);
}

void	RobotomyRequestForm::execute(Bureaucrat const &executor) const
{
	checkSigned(executor);

	std::cout << "drrrrrrrrrrrrrrr... *drilling noises*\n";
	srand(time(0));
	int	i = (rand() % 2);
	
	if (i)
	{
		std::cout << this->getName() << " has been robotomized.\n";
		return ;
	}
	std::cout << this->getName() << "'s robotomy has failed.\n";
}
