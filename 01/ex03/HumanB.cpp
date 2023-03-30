/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanB.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ayassir <ayassir@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/26 18:46:25 by ayassir           #+#    #+#             */
/*   Updated: 2022/12/26 19:40:31 by ayassir          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "HumanB.hpp"

HumanB::HumanB(std::string name)
{
	_name = name;
	std::cout << _name << ": Ready to fight." << std::endl;
}

void	HumanB::setWeapon(Weapon &weapon)
{
	_weapon = &weapon;
	std::cout << _name << ": Grabbed a " << _weapon->getType();
	std::cout << "." << std::endl;
}

void	HumanB::attack(void)
{
	if(!this->_weapon)
	{
		std::cout << _name << ": Has no Weapon !" << std::endl;
		return ;
	}
	std::cout << _name << ": Attacks with ";
	std::cout << _weapon->getType();
	std::cout << "." << std::endl;
}

HumanB::~HumanB()
{
	std::cout << _name << ": Died." << std::endl;
}