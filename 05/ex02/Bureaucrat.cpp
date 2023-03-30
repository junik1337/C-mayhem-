/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bureaucrat.cpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ayassir <ayassir@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/01 13:08:38 by junik             #+#    #+#             */
/*   Updated: 2023/02/07 15:57:55 by ayassir          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"

Bureaucrat::Bureaucrat(): name("Default"), grade(150)
{
}

Bureaucrat::Bureaucrat(std::string Name, int Grade):name(Name)
{
	this->grade = Grade;
	if (Grade > 150)
		throw (Bureaucrat::GradeTooLowException());
	else if (Grade < 1)
		throw (Bureaucrat::GradeTooHighException());
}

Bureaucrat::~Bureaucrat()
{
}

std::string	Bureaucrat::getName(void) const
{
	return (this->name);
}

int	Bureaucrat::getGrade(void) const
{
	return (this->grade);
}

void	Bureaucrat::setGrade(int Grade)
{
	if (Grade > 150)
		throw (Bureaucrat::GradeTooLowException());
	else if (Grade < 1)
		throw (Bureaucrat::GradeTooHighException());
	this->grade = Grade;
}

Bureaucrat::Bureaucrat(Bureaucrat const &obj)
{
	if (this != &obj)
		*this = obj;
}

Bureaucrat	&Bureaucrat::operator= (const Bureaucrat &obj)
{
	if (this != &obj)
		this->grade = obj.grade;
	return (*this);
}


void	Bureaucrat::IncrementGrade()
{
	if (this->grade >= 1)
	{
		this->grade -= 1;
		std::cout << this->name << "'s Grade increased.\n";
	}
	if (this->grade > 150)
		throw (Bureaucrat::GradeTooLowException());
	else if (this->grade < 1)
		throw (Bureaucrat::GradeTooHighException());
}

void	Bureaucrat::DecrementGrade()
{
	if (this->grade <= 150)
	{
		this->grade += 1;
		std::cout << this->name << "'s Grade decreased.\n";
	}
	if (this->grade > 150)
	{
		throw (Bureaucrat::GradeTooLowException());
	}
	else if (this->grade < 1)
	{
		throw (Bureaucrat::GradeTooHighException());
	}
}

void	Bureaucrat::executeForm(AForm const & form)
{
	try
	{
		form.execute(*this);
		std::cout << this->getName() << " executed " << form.getName() << std::endl;
	}
	catch(const std::exception& e)
	{
		std::cerr << this->getName() << " can not execute " << form.getName();
		std::cerr << " because the " << e.what() << '\n';
	}
	
}

std::ostream&	operator<<(std::ostream &ostrm, Bureaucrat &obj)
{
	ostrm << obj.getName() << ", bureaucrat grade " << obj.getGrade() << ".";
	return (ostrm);
}

const char*	Bureaucrat::GradeTooLowException::what() const throw()
{
	return ("The grade is too low");
}

const char*	Bureaucrat::GradeTooHighException::what() const throw()
{
	return ("The grade is too high");
}

void	Bureaucrat::signForm(AForm &obj) const
{
	try
	{
		if (obj.getSign() == true)
		{
			std::cout << obj.getName() << "'s Form is already signed...";
			std::cout << std::endl;
			return ;
		}
		obj.beSigned(*this);
		std::cout << this->name << " signed " << obj.getName() << std::endl;
	}
	catch(const std::exception& e)
	{
		std::cerr << this->name << " couldn't sign " << obj.getName();
		std::cerr << " because "<< e.what() << std::endl;
	}
}
