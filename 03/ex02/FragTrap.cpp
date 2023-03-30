/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ayassir <ayassir@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/01 16:37:10 by ayassir           #+#    #+#             */
/*   Updated: 2023/01/02 17:34:34 by ayassir          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "FragTrap.hpp"

FragTrap::FragTrap(std::string name)
{
	_name = name;
	_hit = 100;
	_energy = 100;
	_damage = 30;
	std::cout << "FragTrap " << _name << " constructor called" << std::endl;
}

void	FragTrap::highFiveGuys()
{
	std::cout << "FragTrap " << _name << " wanted a high-five!" << std::endl;
}

FragTrap::~FragTrap()
{
	std::cout << "FragTrap " << _name << " destructor called" << std::endl;	
}