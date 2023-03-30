/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongCat.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: junik <ayassir@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/22 18:54:53 by junik             #+#    #+#             */
/*   Updated: 2023/01/31 15:48:12 by junik            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "WrongCat.hpp"

WrongCat::WrongCat()
{
	type = "WrongCat";
	std::cout << type << "\t: Constructor called" << std::endl;
}

std::string	WrongCat::getType() const
{
	return (this->type);
}

void	WrongCat::makeSound() const
{
	std::cout << type << " says \"Meow...\"" << std::endl;
}

WrongCat::~WrongCat()
{
	std::cout << type << "\t: Destructor called" << std::endl;
}

WrongCat::WrongCat(WrongCat const &obj)
{
	std::cout << "WrongCat\t: Copy constructor called" << std::endl;
	if (this != &obj)
		*this = obj;
}

WrongCat	&WrongCat::operator=(const WrongCat &obj)
{
	std::cout << "WrongCat\t: Copy assignement called" << std::endl;
	if (this != &obj)
		this->type = obj.type;
	return (*this);
}
