/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Brain.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: junik <ayassir@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/24 15:02:35 by junik             #+#    #+#             */
/*   Updated: 2023/01/30 10:32:17 by junik            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Brain.hpp"

Brain::Brain()
{
	std::cout << "Brain\t: Default Constructor Called" << std::endl;
}

Brain::~Brain()
{
 	std::cout << "Brain\t: Destructor Called" << std::endl;
}

Brain::Brain(Brain const &obj)
{
	std::cout << "Brain\t: Copy Constructor Called" << std::endl;
	if (this != &obj)
		*this = obj;
}

Brain	&Brain::operator= (const Brain &obj)
{
	std::cout << "Brain\t: Copy Assignment Operator Called" << std::endl;
	if (this != &obj)
	{
		for (size_t i = 0; i < 100; i++)
		{
			this->ideas[i] = obj.ideas[i];
		}
		
	}
	return (*this);
}
