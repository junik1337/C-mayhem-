/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Harl.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ayassir <ayassir@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/26 15:36:39 by ayassir           #+#    #+#             */
/*   Updated: 2022/12/26 17:01:48 by ayassir          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Harl.hpp"

void    Harl::debug(void) {
    std::cout << "love having extra bacon for my 7XL-double-cheese-triple-";
	std::cout << "pickle-special-ketchup burger. I really do!" << std::endl;
}

void    Harl::info(void) {
    std::cout << "I cannot believe adding extra bacon costs more money. ";
	std::cout << "You didn't put enough bacon in my burger! If you did, ";
	std::cout << "I wouldn't be asking for more!" << std::endl;
}

void    Harl::warning(void) {
    std::cout << "I think I deserve to have some extra bacon for free. ";
	std::cout << "I've been coming for years whereas you started working here ";
	std::cout << "since last month." << std::endl;
}

void    Harl::error(void) {
    std::cout << "This is unacceptable! ";
	std::cout << "I want to speak to the manager now." << std::endl;
}

void	Harl::complain(std::string level)
{
	std::string		levels[4] = {"DEBUG", "INFO", "WARNING", "ERROR"};
	void (Harl::*fpointer[4])();
	fpointer[0] = &Harl::debug;
	fpointer[1] = &Harl::info;
	fpointer[2] = &Harl::warning;
	fpointer[3] = &Harl::error;
	for(int i = 0 ; i < 4 ; i++)
	{
		if (level == levels[i])
			(this->*fpointer[i])();
	}
}
