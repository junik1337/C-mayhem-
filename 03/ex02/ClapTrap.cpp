/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ayassir <ayassir@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/31 10:38:24 by ayassir           #+#    #+#             */
/*   Updated: 2023/01/02 17:24:41 by ayassir          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"

void	ClapTrap::status(void)
{
	std::cout << "************************" << std::endl;
	std::cout << "Name            : " << _name << std::endl;
	std::cout << "Hit points      : " << _hit << std::endl;
	std::cout << "Energy points   : " << _energy << std::endl;
	std::cout << "Attack damage   : " << _damage << std::endl;	
	std::cout << "************************" << std::endl;
}
ClapTrap::ClapTrap()
{
	_name = "default";
	std::cout << "ClapTrap " << _name << " called" << std::endl;
	_hit = 10;
	_energy = 10;
	_damage = 0;
}

ClapTrap::ClapTrap(std::string name)
{
	_name = name;
	std::cout << "ClapTrap " << _name << " called" << std::endl;
	_hit = 10;
	_energy = 10;
	_damage = 0;
}

void	ClapTrap::attack(const std::string& target)
{
	std::cout << "ClapTrap " << _name;
	std::cout << " attacks " << target << " causing " << _damage;
	std::cout << " points of damage!" << std::endl;
	_energy -= 1;
}

void	ClapTrap::takeDamage(unsigned int amount)
{
	if (amount <= 0)
	{
		std::cout << _name << " can't attack with this " << amount ;
		std::cout << " amount of damage" << std::endl;
	}
	_damage += amount;
	std::cout << "ClapTrap " << _name << " gained " << amount << " amount of ";
	std::cout << "attacking damage!" << std::endl;
}

void	ClapTrap::beRepaired(unsigned int amount)
{
	_energy -= 1;
	if (_energy < 0)
	{
		std::cout << "The target cannot be repaired" << std::endl;
		return ;
	}
	_hit += amount;
	std::cout << "The target gained " << amount << " of health" << std::endl;
}

int ClapTrap::getDamage(void) const
{
	return (_damage);
}

ClapTrap::~ClapTrap()
{
	std::cout << "ClapTrap " << _name << " destructor called" << std::endl;
}

void	ClapTrap::reduceDamage(unsigned int amount)
{
	_hit -= amount;
	if (_hit <= 0)
	{
		std::cout << _name << " is dead" << std::endl;
		_hit = 0;
	}
}

std::string	ClapTrap::getName(void) const
{
	return (_name);
}