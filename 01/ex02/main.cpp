/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ayassir <ayassir@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/26 11:04:43 by ayassir           #+#    #+#             */
/*   Updated: 2022/12/26 19:28:04 by ayassir          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>

int	main()
{
	std::string		brain = "HI THIS IS BRAIN";
	std::string		*stringPTR = &brain;
	std::string		&stringREF = brain;

	std::cout << "The address of string    : " << &brain << std::endl;
	std::cout << "The address of stringPTR : " << stringPTR << std::endl;
	std::cout << "The address of stringREF : " << &stringREF << std::endl;
	std::cout << "-----------------------------------------" << std::endl;
	std::cout << "The value of string    : " << brain << std::endl;
	std::cout << "The value of stringPTR : " << *stringPTR << std::endl;
	std::cout << "The value of stringREF : " << stringREF << std::endl;
}
