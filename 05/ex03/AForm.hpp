/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AForm.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: junik <ayassir@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/02 18:14:44 by junik             #+#    #+#             */
/*   Updated: 2023/02/03 21:35:48 by junik            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef _AForm_HPP_
#define _AForm_HPP_

#include <iostream>
#include "Bureaucrat.hpp"

// ******************************************************** //
//                         CLASSES                         //
// ****************************************************** //
class	Bureaucrat;
class	AForm
{
	public	:
		AForm ();
		AForm (const std::string Name, const int G_sign, const int G_exec);
		AForm (AForm const &obj);
		
		virtual std::string		getName(void) const;
		int						getSignGrade(void) const;
		int						getExecGrade(void) const;
		bool					getSign(void) const;

		void			beSigned(const Bureaucrat &obj);
		void			checkSigned(const Bureaucrat &obj) const;

		virtual void	execute(Bureaucrat const & executor) const = 0;
		virtual AForm*	newForm(std::string name) const = 0;
		
		AForm &operator= (const AForm &obj);

		class GradeTooHighException : public std::exception {
			public :
				virtual const char* what() const throw();
		};

		class GradeTooLowException : public std::exception {
			public :
				virtual const char* what() const throw();
		};

		class GradeNotSigned : public std::exception {
			public :
				virtual const char* what() const throw();
		};
		virtual ~AForm ();

	private	:
		const std::string	name;
		const int			signGrade;
		const int			execGrade;
		bool				sign; 
};

// ******************************************************** //
//                        FUNCTIONS                        //
// ****************************************************** //

std::ostream&	operator<<(std::ostream &os, AForm &obj);

#endif
