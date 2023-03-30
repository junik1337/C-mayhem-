/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   RobotomyRequestForm.hpp                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ayassir <ayassir@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/03 13:38:44 by junik             #+#    #+#             */
/*   Updated: 2023/02/07 13:40:37 by ayassir          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef _RobotomyRequestForm_HPP_
#define _RobotomyRequestForm_HPP_

#include <iostream>
#include <cstdlib>
#include "AForm.hpp"
#include "Bureaucrat.hpp"

// ******************************************************** //
//                         CLASSES                         //
// ****************************************************** //

class	RobotomyRequestForm : public AForm
{
	public	:
		RobotomyRequestForm();
		RobotomyRequestForm (std::string name);
		RobotomyRequestForm (RobotomyRequestForm const &obj);
		~RobotomyRequestForm ();
		RobotomyRequestForm &operator= (const RobotomyRequestForm &obj);
		void		execute(Bureaucrat const &executor) const;
		AForm*		newForm(std::string name) const;

};

// ******************************************************** //
//                        FUNCTIONS                        //
// ****************************************************** //

#endif
