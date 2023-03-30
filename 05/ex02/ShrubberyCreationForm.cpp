/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ShrubberyCreationForm.cpp                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ayassir <ayassir@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/03 13:38:29 by junik             #+#    #+#             */
/*   Updated: 2023/02/07 15:54:33 by ayassir          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ShrubberyCreationForm.hpp"

ShrubberyCreationForm::ShrubberyCreationForm():AForm("Default", 150, 150)
{
}

ShrubberyCreationForm::ShrubberyCreationForm(std::string name):
	AForm(name, 145, 137)
{
}

ShrubberyCreationForm::~ShrubberyCreationForm()
{
}

ShrubberyCreationForm::ShrubberyCreationForm(ShrubberyCreationForm const &obj)
{
	if (this != &obj)
		*this = obj;
}

ShrubberyCreationForm	&ShrubberyCreationForm::operator= (const ShrubberyCreationForm &obj)
{
	(void) obj;
	return (*this);
}


void	ShrubberyCreationForm::execute(Bureaucrat const &executor) const
{
	checkSigned(executor);

	std::string		name;

	name = this->getName() + "_shrubbery";
	std::ofstream outfile (name);
	std::string	tree =
	"          .     .  .      +     .      .          .\n"
	"     .       .      .     #       .           .\n"
	"        .      .         ###            .      .      .\n"
	"      .      .   \"#:. .:##\"##:. .:#\"  .      .\n"
	"          .      . \"####\"###\"####\"  .\n"
	"       .     \"#:.    .:#\"###\"#:.    .:#\"  .        .       .\n"
	"  .             \"#########\"#########\"        .        .\n"
	"        .    \"#:.  \"####\"###\"####\"  .:#\"   .       .\n"
	"     .     .  \"#######\"\"##\"##\"\"#######\"                  .\n"
	"                .\"##\"#####\"#####\"##\"           .      .\n"
	"    .   \"#:. ...  .:##\"###\"###\"##:.  ... .:#\"     .\n"
	"      .     \"#######\"##\"#####\"##\"#######\"      .     .\n"
	"    .    .     \"#####\"\"#######\"\"#####\"    .      .\n"
	"            .     \"      000      \"    .     .\n"
	"       .         .   .   000     .        .       .\n"
	".. .. ..................O000O........................ ...... ...\n";
	if (outfile.fail())
	{
		std::cerr << "FAILED: Cannot open the file\n";
		return ;
	}
	outfile << tree;
	outfile.close();
	std::cout << "\""<< this->getName() << "_shrubbery\" file has been created\n";
}
