/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AAnimal.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: junik <ayassir@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/30 11:01:27 by junik             #+#    #+#             */
/*   Updated: 2023/01/31 17:49:09 by junik            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "AAnimal.hpp"

AAnimal::AAnimal()
{
	std::cout << "AAnimal\t: Default Constructor Called" << std::endl;
}

AAnimal::AAnimal(std::string type)
{
	this->type = type;
	std::cout << "AAnimal" << type << "\t: Default Constructor Called"
	<< std::endl;
}

AAnimal::~AAnimal()
{
	std::cout << "AAnimal\t: Destructor Called" << std::endl;
}

AAnimal::AAnimal(AAnimal const &obj)
{
	std::cout << "AAnimal\t: Copy Constructor Called" << std::endl;
	if (this != &obj)
		*this = obj;
}

AAnimal	&AAnimal::operator= (const AAnimal &obj)
{
	std::cout << "AAnimal\t: Copy Assignment Operator Called" << std::endl;
	if (this != &obj)
		this->type = obj.type;
	return (*this);
}

std::string	AAnimal::getType(void) const
{
	return (this->type);
}

void	AAnimal::setType(std::string type)
{
	this->type = type;
}