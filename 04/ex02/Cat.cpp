/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: junik <ayassir@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/22 12:16:27 by ayassir           #+#    #+#             */
/*   Updated: 2023/01/31 17:44:39 by junik            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cat.hpp"

Cat::Cat()
{
	type = "Cat";
	catBrain = new Brain();
	std::cout << type << "\t: Default Constructor called" << std::endl;
}

std::string	Cat::getType() const
{
	return (this->type);
}

void	Cat::setType(std::string type)
{
	this->type = type;
}

void	Cat::makeSound() const
{
	std::cout << type << " says \"Meow...\"" << std::endl;
}

Cat::~Cat()
{
	delete catBrain;
	std::cout << type << "\t: Destructor called" << std::endl;
}

Cat::Cat(Cat const &obj)
{
	std::cout << "Cat\t: Copy Constructor Called" << std::endl;
	if (this != &obj)
		*this = obj;
}

Cat	&Cat::operator= (const Cat &obj)
{
	std::cout << "Cat\t: Copy Assignment Operator Called" << std::endl;
	if (this != &obj)
	{
		catBrain = new Brain;
		*catBrain = *(obj.catBrain);
		this->type = obj.type;
	}
	return (*this);
}
