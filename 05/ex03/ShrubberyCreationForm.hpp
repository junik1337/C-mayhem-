/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ShrubberyCreationForm.hpp                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ayassir <ayassir@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/03 13:38:46 by junik             #+#    #+#             */
/*   Updated: 2023/02/07 13:40:54 by ayassir          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef _ShrubberyCreationForm_HPP_
#define _ShrubberyCreationForm_HPP_

#include <iostream>
#include <fstream>
#include "Bureaucrat.hpp"
#include "AForm.hpp"

// ******************************************************** //
//                         CLASSES                         //
// ****************************************************** //

class	ShrubberyCreationForm : public AForm
{
	public	:
		ShrubberyCreationForm();
		ShrubberyCreationForm (std::string Target);
		ShrubberyCreationForm (ShrubberyCreationForm const &obj);
		~ShrubberyCreationForm ();
		ShrubberyCreationForm &operator= (const ShrubberyCreationForm &obj);
		void		execute(Bureaucrat const &executor) const;
		AForm*		newForm(std::string name) const;

};

// ******************************************************** //
//                        FUNCTIONS                        //
// ****************************************************** //


#endif
