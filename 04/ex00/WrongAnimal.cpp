/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongAnimal.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: junik <ayassir@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/22 19:00:40 by junik             #+#    #+#             */
/*   Updated: 2023/01/31 15:47:29 by junik            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "WrongAnimal.hpp"

WrongAnimal::WrongAnimal()
{
	type = "WrongAnimal";
	std::cout << "WrongAnimal\t: Constructor called" << std::endl;
}

WrongAnimal::WrongAnimal(std::string type)
{
	this->type = type;
	std::cout << "WrongAnimal\t" << type << " : Constructor called" << std::endl;
}

void	WrongAnimal::makeSound() const
{
	std::cout << "A WrongAnimal sound...!" << std::endl;
}

void	WrongAnimal::setType(std::string type)
{
	this->type = type;
}

std::string	WrongAnimal::getType() const
{
	return (this->type);
}

WrongAnimal::~WrongAnimal()
{
	std::cout << "WrongAnimal\t: Destructor called" << std::endl;
}

WrongAnimal::WrongAnimal(WrongAnimal const &obj)
{
	std::cout << "WrongAnimal\t: Copy constructor called" << std::endl;
	if (this != &obj)
		*this = obj;
}

WrongAnimal	&WrongAnimal::operator=(const WrongAnimal &obj)
{
	std::cout << "WrongAnimal\t: Copy assignement called" << std::endl;
	if (this != &obj)
		this->type = obj.type;
	return (*this);
}
