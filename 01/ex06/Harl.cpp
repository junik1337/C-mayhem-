/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Harl.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ayassir <ayassir@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/26 17:55:46 by ayassir           #+#    #+#             */
/*   Updated: 2022/12/26 18:27:44 by ayassir          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Harl.hpp"

void    Harl::debug(void) {
	std::cout << "[ DEBUG ]" << std::endl;
    std::cout << "love having extra bacon for my 7XL-double-cheese-triple-";
	std::cout << "pickle-special-ketchup burger. " << std::endl;
	std::cout << "I really do!" << std::endl;
	std::cout << std::endl;
}

void    Harl::info(void) {
	std::cout << "[ INFO ]" << std::endl;
    std::cout << "I cannot believe adding extra ";
	std::cout << "bacon costs more money. " << std::endl;
	std::cout << "You didn't put enough bacon in my burger! If you did, ";
	std::cout << "I wouldn't be asking for more!" << std::endl;
	std::cout << std::endl;
}

void    Harl::warning(void) {
	std::cout << "[ WARNING ]" << std::endl;
    std::cout << "I think I deserve to have ";
	std::cout << "some extra bacon for free. " << std::endl;
	std::cout << "I've been coming foryears whereas ";
	std::cout << "you started working here since last month." << std::endl;
	std::cout << std::endl;
}

void    Harl::error(void) {
	std::cout << "[ ERROR ]" << std::endl;
    std::cout << "This is unacceptable!";
	std::cout << " I want to speak to the manager now." << std::endl;
	std::cout << std::endl;
}

void	Harl::complain(std::string level)
{
	std::string		levels[4] = {"DEBUG", "INFO", "WARNING", "ERROR"};
	int				type = 4;

	for (int i = 0; i < 4; i++)
	{
		if (!levels[i].compare(level))
		{
			type = i;
			break ;
		}
	}
	switch (type)
	{
		case 0:
			this->debug();
		case 1:
			this->info();
		case 2:
			this->warning();
		case 3:
			this->error();
			break;
		default :
			std::cout << "[ Probably complaining ";
			std::cout << "about insignificant problems ]" << std::endl;
	}
}
