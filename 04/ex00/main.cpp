  /* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: junik <ayassir@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/22 18:30:40 by junik             #+#    #+#             */
/*   Updated: 2023/01/22 19:19:51 by junik            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */



#include "WrongAnimal.hpp"
#include "WrongCat.hpp"
#include "Animal.hpp"
#include "Cat.hpp"
#include "Dog.hpp"

int main( void )
{
    std::cout << "************** Animal **************" << std::endl;

    const Animal* meta = new Animal();
    const Animal* j = new Dog();
    const Animal* i = new Cat();

    std::cout << std::endl;
  
    std::cout << "Type of j\t: " << j->getType() << " " << std::endl;
    std::cout << "Type of i\t: " << i->getType() << " " << std::endl;
  
    std::cout << std::endl;

    i->makeSound();
    meta->makeSound();

    std::cout << std::endl;

    delete  meta;
    delete  j;
    delete  i;

    std::cout << std::endl << "************** WrongAnimal **************" << std::endl;

    const WrongAnimal *wrong = new WrongAnimal();
    const WrongAnimal *wrongcat = new WrongCat();

    std::cout << std::endl;

    std::cout << "Type of wrong\t: " << wrong->getType() << " " << std::endl;
    std::cout << "Type of WrongCat: " << wrongcat->getType() << " " << std::endl;

    std::cout << std::endl;

    wrong->makeSound();
    wrongcat->makeSound();

    std::cout << std::endl;

    delete  wrongcat;
    delete  wrong;

    return 0;
}
