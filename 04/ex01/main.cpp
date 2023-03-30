/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: junik <ayassir@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/30 10:56:40 by junik             #+#    #+#             */
/*   Updated: 2023/01/31 17:55:45 by junik            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Animal.hpp"
#include "WrongAnimal.hpp"
#include "Brain.hpp"
#include "Cat.hpp"
#include "Dog.hpp"

int main(void)
{
    const Animal* j = new Dog();
    const Animal* i = new Cat();

	std::cout << std::endl;
 
    std::cout << "Type of j :" << j->getType() << std::endl;
    std::cout << "Type of i :" << i->getType() << std::endl;
	
    std::cout << std::endl;
    
    delete j;//should not create a leak
    delete i;

	std::cout << std::endl;

    Dog basic;
    {
		std::cout << std::endl;
        Dog tmp = basic;
    }

	std::cout << std::endl;

    const Animal* animals[4] = {new Dog(), new Dog(), new Cat(), new Cat()};
    for ( int i = 0; i < 4; i++ )
	{
        delete animals[i];
    }
	std::cout << std::endl;

    return (0);
}
