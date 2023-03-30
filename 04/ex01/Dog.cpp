/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: junik <ayassir@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/22 12:12:38 by ayassir           #+#    #+#             */
/*   Updated: 2023/01/31 17:34:23 by junik            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Dog.hpp"

Dog::Dog()
{
	type = "Dog";
	dogBrain = new Brain();
	std::cout << type << "\t: Constructor called" << std::endl;
}

std::string	Dog::getType() const
{
	return (this->type);
}

void	Dog::makeSound() const
{
		std::cout << type << " says \"Bark, Bark...\"" << std::endl;
}

Dog::~Dog()
{
	delete dogBrain;
	std::cout << type << "\t: Destructor called" << std::endl;
}

Dog::Dog(Dog const &obj)
{
	std::cout << "Dog\t: Copy Constructor Called" << std::endl;
	if (this != &obj)
		*this = obj;
}

Dog	&Dog::operator= (const Dog &obj)
{
	std::cout << "Dog\t: Copy Assignment Operator Called" << std::endl;
	if (this != &obj)
	{
		this->dogBrain = new Brain();
		*(this->dogBrain) = *(obj.dogBrain);
		this->type = obj.type;
	}
	return (*this);
}
