/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PresidentialPardonForm.hpp                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ayassir <ayassir@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/03 13:38:41 by junik             #+#    #+#             */
/*   Updated: 2023/02/07 13:40:23 by ayassir          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef _PresidentialPardonForm_HPP_
#define _PresidentialPardonForm_HPP_

#include <iostream>
#include "AForm.hpp"
#include "Bureaucrat.hpp"

// ******************************************************** //
//                         CLASSES                         //
// ****************************************************** //

class	PresidentialPardonForm : public AForm
{
	public	:
		PresidentialPardonForm ();
		PresidentialPardonForm (std::string name);
		PresidentialPardonForm (PresidentialPardonForm const &obj);
		~PresidentialPardonForm ();
		PresidentialPardonForm &operator= (const PresidentialPardonForm &obj);
		void		execute(Bureaucrat const &executor) const;
		AForm*		newForm(std::string name) const;

};

// ******************************************************** //
//                        FUNCTIONS                        //
// ****************************************************** //

#endif
