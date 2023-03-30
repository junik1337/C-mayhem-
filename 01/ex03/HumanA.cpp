/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanA.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ayassir <ayassir@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/26 18:46:07 by ayassir           #+#    #+#             */
/*   Updated: 2022/12/26 18:46:08 by ayassir          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "HumanA.hpp"

HumanA::HumanA(std::string name, Weapon &weapon):_weapon(weapon)
{
	_name = name;
	std::cout << _name << ": Ready to fight." << std::endl;
	std::cout << _name << ": Grabbed a " << _weapon.getType();
	std::cout << "."<< std::endl;
}

void	HumanA::attack(void)
{
	std::cout << _name << ": Attacks with " << _weapon.getType();
	std::cout << "."<< std::endl;
}

HumanA::~HumanA()
{
	std::cout << _name << ": Died." << std::endl;
}