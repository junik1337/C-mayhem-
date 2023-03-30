/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AForm.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ayassir <ayassir@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/02 18:14:39 by junik             #+#    #+#             */
/*   Updated: 2023/02/07 15:59:39 by ayassir          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "AForm.hpp"

AForm::AForm():name("Default"), signGrade(1), execGrade(1)
{
}

AForm::AForm(const std::string Name, const int s_grade, const int e_grade):
	name(Name), signGrade(s_grade), execGrade(e_grade)
{
	if (this->signGrade < 1 || this->execGrade < 1)
		throw (AForm::GradeTooHighException());
	else if (this->signGrade > 150 || this->execGrade > 150)
		throw (AForm::GradeTooLowException());
	this->sign = false;
}

AForm::~AForm()
{
}

AForm::AForm(AForm const &obj):
	name(obj.name), signGrade(obj.signGrade), execGrade(obj.execGrade)
{
	this->sign = obj.sign;
}

std::string	AForm::getName(void) const
{
	return (this->name);
}

int	AForm::getSignGrade(void) const
{
	return (this->signGrade);
}

int	AForm::getExecGrade(void) const
{
	return (this->execGrade);
}

bool	AForm::getSign(void) const
{
	return (this->sign);
}

AForm	&AForm::operator= (const AForm &obj)
{
	if (this != &obj)
	{
		this->sign = obj.sign;
	}
	return (*this);
}

const char *AForm::GradeTooHighException::what() const throw()
{
	return ("The grade is too high");
}

const char *AForm::GradeTooLowException::what() const throw()
{
	return ("The grade is too low");
}

const char *AForm::GradeNotSigned::what() const throw()
{
	return ("The grade is not signed");
}

void	AForm::beSigned(const Bureaucrat &obj)
{
	if (obj.getGrade() <= this->getSignGrade())
		this->sign = true;
	else
		throw (AForm::GradeTooLowException());
}

void	AForm::checkSigned(const Bureaucrat &obj) const
{
	if (this->getSign() == false)
		throw(GradeNotSigned());
	else if (obj.getGrade() > this->execGrade)
		throw (GradeTooLowException());
}

std::ostream&	operator<<(std::ostream &os, AForm &obj)
{
	os << obj.getName() 
		<< ", sign : " << std::boolalpha << obj.getSign()
		<< ", signGrade : " << obj.getSignGrade()
		<< ", execGrade : " << obj.getExecGrade() << ".";
	return (os);
}