/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: junik <ayassir@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/22 12:16:27 by ayassir           #+#    #+#             */
/*   Updated: 2023/01/31 15:47:11 by junik            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cat.hpp"

Cat::Cat()
{
	type = "Cat";
	std::cout << type << "\t: Constructor called" << std::endl;
}

std::string	Cat::getType() const
{
	return (this->type);
}

void	Cat::makeSound() const
{
	std::cout << type << " says \"Meow...\"" << std::endl;
}

Cat::~Cat()
{
	std::cout << type << "\t: Destructor called" << std::endl;
}

Cat::Cat(Cat const &obj)
{
	std::cout << "Cat\t: Copy constructor called" << std::endl;
	if (this != &obj)
		*this = obj;
}

Cat	&Cat::operator=(const Cat &obj)
{
	std::cout << "Cat\t: Copy assignement called" << std::endl;
	if (this != &obj)
		this->type = obj.type;
	return (*this);
}
