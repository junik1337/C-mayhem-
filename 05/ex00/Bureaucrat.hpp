/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bureaucrat.hpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ayassir <ayassir@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/01 13:08:34 by junik             #+#    #+#             */
/*   Updated: 2023/02/07 11:53:44 by ayassir          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef _Bureaucrat_HPP_
#define _Bureaucrat_HPP_

#include <iostream>
#include <exception>

// ******************************************************** //
//                         CLASSES                         //
// ****************************************************** //

class	Bureaucrat
{
	public	:
		Bureaucrat ();
		Bureaucrat (std::string name, int Grade);
		Bureaucrat (Bureaucrat const &obj);

		std::string		getName(void) const;
		int				getGrade(void) const;
		void			setGrade(int Grade);
		
		void			IncrementGrade();
		void			DecrementGrade();

		Bureaucrat&		operator= (const Bureaucrat &obj);

		~Bureaucrat ();
		
		class GradeTooHighException : public std::exception {
			public :
				virtual const char* what(void) const throw();
		};

		class GradeTooLowException : public std::exception {
			public :
				virtual const char* what(void) const throw();
		};
		
	private	:
		const std::string	name;
		int					grade;
};

// ******************************************************** //
//                        FUNCTIONS                        //
// ****************************************************** //

std::ostream&	operator<<(std::ostream &ostrm, Bureaucrat &obj);

#endif
