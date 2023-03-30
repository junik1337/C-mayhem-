/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ayassir <ayassir@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/01 14:28:40 by ayassir           #+#    #+#             */
/*   Updated: 2023/01/02 17:14:57 by ayassir          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScavTrap.hpp"

ScavTrap::ScavTrap(std::string name):ClapTrap(name)
{
	_name = name;
	_hit = 100;
	_energy = 50;
	_damage = 20;
	std::cout << "ScavTrap " << _name << " constructor called" << std::endl;
}

void	ScavTrap::guardGate()
{
	std::cout << "ScavTrap "<< _name << " is now in Gate keeper mode" << std::endl;
}

void	ScavTrap::attack(const std::string target)
{
	std::cout << "ScavTrap " << _name;
	std::cout << " attacks " << target << " causing " << _damage;
	std::cout << " points of damage!" << std::endl;
	_energy -= 1;
}

ScavTrap::~ScavTrap()
{
	std::cout << "ScavTrap ";
	std::cout << _name << " destructor called" << std::endl;
}