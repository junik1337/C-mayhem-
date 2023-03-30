/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Intern.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ayassir <ayassir@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/06 15:50:09 by ayassir           #+#    #+#             */
/*   Updated: 2023/02/07 15:34:22 by ayassir          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef _Intern_HPP_
#define _Intern_HPP_

#include <iostream>
#include "AForm.hpp"
#include "ShrubberyCreationForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "PresidentialPardonForm.hpp"

// ******************************************************** //
//                         CLASSES                         //
// ****************************************************** //

class	Intern
{
	public	:
		Intern ();
		Intern (Intern const &obj);
		~Intern ();
		Intern &operator= (const Intern &obj);

		class FormNotFound : public std::exception {
			public :
				const char* what(void) const throw();
		};

		AForm*	makeForm(std::string name, std::string target);
	
	private	:
		AForm	*f[3];
};

// ******************************************************** //
//                        FUNCTIONS                        //
// ****************************************************** //

#endif
