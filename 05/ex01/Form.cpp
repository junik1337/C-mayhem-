/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Form.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ayassir <ayassir@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/02 18:14:39 by junik             #+#    #+#             */
/*   Updated: 2023/02/07 15:50:54 by ayassir          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Form.hpp"

Form::Form():name("Default"), signGrade(1), execGrade(1)
{
}

Form::Form(const std::string Name, const int s_grade, const int e_grade):
	name(Name), signGrade(s_grade), execGrade(e_grade)
{
	if (this->signGrade < 1 || this->execGrade < 1)
		throw (Form::GradeTooHighException());
	else if (this->signGrade > 150 || this->execGrade > 150)
		throw (Form::GradeTooLowException());
	this->sign = false;
}

Form::~Form()
{
}

Form::Form(Form const &obj):
	name(obj.name), signGrade(obj.signGrade), execGrade(obj.execGrade)
{
	this->sign = obj.sign;
}

std::string	Form::getName(void) const
{
	return (this->name);
}

int	Form::getSignGrade(void) const
{
	return (this->signGrade);
}

int	Form::getExecGrade(void) const
{
	return (this->execGrade);
}

bool	Form::getSign(void) const
{
	return (this->sign);
}

Form	&Form::operator= (const Form &obj)
{
	if (this != &obj)
		this->sign = obj.sign;
	return (*this);
}

const char *Form::GradeTooHighException::what() const throw()
{
	return ("The grade is too high");
}

const char *Form::GradeTooLowException::what() const throw()
{
	return ("The grade is too low");
}

void	Form::beSigned(const Bureaucrat &obj)
{
	if (obj.getGrade() <= this->getSignGrade())
		this->sign = true;
	else
		throw (Form::GradeTooLowException());
}

std::ostream&	operator<<(std::ostream &os, Form &obj)
{
	os << obj.getName() 
		<< ", sign : " << std::boolalpha << obj.getSign() 
		<< ", signGrade : " << obj.getSignGrade()
		<< ", execGrade : " << obj.getExecGrade() << ".";
	return (os);
}