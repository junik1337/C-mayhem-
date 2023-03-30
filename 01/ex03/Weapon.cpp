/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Weapon.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ayassir <ayassir@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/26 18:46:43 by ayassir           #+#    #+#             */
/*   Updated: 2022/12/26 18:46:44 by ayassir          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Weapon.hpp"

Weapon::Weapon(const std::string& type)
{
	setType(type);
	std::cout << "Constructor of weapon called." << std::endl;
}

void	Weapon::setType(const std::string& type)
{
	_type = type;
}

const std::string& Weapon::getType(void) const
{
	return (_type);
}

Weapon::~Weapon()
{
	std::cout << "Destructor of weapon called." << std::endl;
}