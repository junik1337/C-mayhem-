/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ayassir <ayassir@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/09 21:03:46 by ayassir           #+#    #+#             */
/*   Updated: 2023/02/10 18:06:07 by ayassir          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Base.hpp"
#include "A.hpp"
#include "B.hpp"
#include "C.hpp"

Base*	generate(void)
{
	srand(time(NULL));
	int		i = (rand() % 3) + 1;
	if (i == 1)
	{
		Base*	base = new A();
		return(base) ;
	}
	else if (i == 2)
	{
		Base*	base = new B();
		return(base) ;
	}
	else if (i == 3)
	{
		Base*	base = new C();
		return(base) ;
	}
	return(NULL);
}

void identify(Base* p)
{
	if (dynamic_cast<A*>(p) == p)
		std::cout << "the base pointer is A\n";
	else if (dynamic_cast<B*>(p) == p)
		std::cout << "the base pointer is B\n";
	else if (dynamic_cast<C*>(p) == p)
		std::cout << "the base pointer is C\n";
	else if (!p)
		std::cout << "the base pointer is NULL\n";
}

void	identify(Base& p)
{
	try
	{
		A	&BaseA = dynamic_cast<A&>(p);
		(void) BaseA;
		std::cout << "the base pointer is A\n";
	}
	catch(const std::exception& e)
	{
	}
	try
	{
		B	&BaseB = dynamic_cast<B&>(p);
		(void) BaseB;
		std::cout << "the base pointer is B\n";
	}
	catch(const std::exception& e)
	{
	}
	try
	{
		C	&BaseC = dynamic_cast<C&>(p);
		(void) BaseC;
		std::cout << "the base pointer is C\n";
	}
	catch(const std::exception& e)
	{
	}
	
}

int main()
{
	Base*	base;

	base = generate();
	identify(base);
	identify(*base);
	return (0);
}
