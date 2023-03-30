/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bureaucrat.cpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ayassir <ayassir@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/01 13:08:38 by junik             #+#    #+#             */
/*   Updated: 2023/02/07 15:59:49 by ayassir          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"

Bureaucrat::Bureaucrat():name("Default"), grade(150)
{
}

Bureaucrat::Bureaucrat(std::string Name, int Grade):name(Name)
{
	this->grade = Grade;
	if (this->grade > 150)
		throw (Bureaucrat::GradeTooLowException());
	else if (this->grade < 1)
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
		throw (Bureaucrat::GradeTooLowException());
	else if (this->grade < 1)
		throw (Bureaucrat::GradeTooHighException());
}

void	Bureaucrat::executeForm(AForm const & obj)
{
	try
	{
		obj.execute(*this);
		std::cout << this->getName() << " executed " << obj.getName() << std::endl;
	}
	catch(const std::exception& e)
	{
		std::cerr << this->getName() << " can not execute " << obj.getName() << " because the " << e.what() << '\n';
	}
	
}

std::ostream&	operator<<(std::ostream &ostrm, Bureaucrat &obj)
{
	ostrm << obj.getName() << ", bureaucrat grade " << obj.getGrade() << ".";
	return (ostrm);
}

const char*	Bureaucrat::GradeTooLowException::what() const throw()
{
	return ("the grade is too low");
}

const char*	Bureaucrat::GradeTooHighException::what() const throw()
{
	return ("the grade is too high");
}

void	Bureaucrat::signForm(AForm &f) const
{
	try
	{
		f.beSigned(*this);
		std::cout << this->name << " signed " << f.getName() << std::endl;
	}
	catch(const std::exception& e)
	{
		std::cerr << this->name << " couldn't sign " << f.getName() << " because "<< e.what() << std::endl;
	}
}
