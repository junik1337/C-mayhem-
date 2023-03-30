/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Form.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ayassir <ayassir@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/02 18:14:44 by junik             #+#    #+#             */
/*   Updated: 2023/02/06 21:49:35 by ayassir          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef _Form_HPP_
#define _Form_HPP_

#include <iostream>
#include "Bureaucrat.hpp"

// ******************************************************** //
//                         CLASSES                         //
// ****************************************************** //

class	Bureaucrat;
class	Form
{
	public	:
		Form ();
		Form (const std::string Name, const int G_sign, const int G_exec);
		Form (Form const &obj);
		
		std::string		getName(void) const;
		int				getSignGrade(void) const;
		int				getExecGrade(void) const;
		bool			getSign(void) const;

		void			beSigned(const Bureaucrat &obj);

		Form &operator= (const Form &obj);

		class GradeTooHighException : public std::exception {
			public :
				virtual const char* what() const throw();
		};

		class GradeTooLowException : public std::exception {
			public :
				virtual const char* what() const throw();
		};

		~Form ();

	private	:
		const std::string	name;
		const int			signGrade;
		const int			execGrade;
		bool				sign; 
};

// ******************************************************** //
//                        FUNCTIONS                        //
// ****************************************************** //

std::ostream&	operator<<(std::ostream &os, Form &obj);

#endif
