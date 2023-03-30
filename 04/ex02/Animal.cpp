/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: junik <ayassir@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/22 11:41:23 by ayassir           #+#    #+#             */
/*   Updated: 2023/01/31 17:44:24 by junik            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Animal.hpp"

Animal::Animal()
{
	type = "Animal";
	std::cout << "Animal\t: Constructor called" << std::endl;
}

Animal::Animal(std::string type)
{
	this->type = type;
	std::cout << "Animal\t" << type << " : Constructor called" << std::endl;
}

void	Animal::makeSound() const
{
	std::cout << "An animal sound...!" << std::endl;
}

void	Animal::setType(std::string type)
{
	this->type = type;
}

std::string	Animal::getType() const
{
	return (this->type);
}

Animal::~Animal()
{
	std::cout << "Animal\t: Destructor called" << std::endl;
}

Animal::Animal(Animal const &obj)
{
	std::cout << "Copy Constructor Called" << std::endl;
	if (this != &obj)
		*this = obj;
}

Animal	&Animal::operator= (const Animal &obj)
{
	std::cout << "Copy Assignment Operator Called" << std::endl;
	if (this != &obj)
	{
		this->type = obj.type;
	}
	return (*this);
}
