/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Span.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ayassir <ayassir@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/14 15:48:01 by ayassir           #+#    #+#             */
/*   Updated: 2023/02/16 14:14:03 by ayassir          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Span.hpp"

Span::Span(): size(0)
{
}

Span::Span(unsigned int N): size(N)
{
}

Span::~Span()
{
}

Span::Span(Span const &obj)
{
	this->size = obj.size;
	this->tab = obj.tab;
}

Span	&Span::operator= (const Span &obj)
{
	if (this != &obj)
	{
		this->size = obj.size;
		this->tab = obj.tab;
	}
	return (*this);
}

void	Span::addNumber(unsigned int number)
{
	if (tab.size() + 1 > this->size)
		throw(Span::ErrorFound());
	tab.push_back(number);
}

unsigned int 	Span::getNumber(unsigned int number) const
{
	if (number >= tab.size())
		throw (Span::ErrorFoundSize());
	return (tab[number]);
}

void	Span::myaddNumber(unsigned int number)
{
	if (number >= tab.size() && tab.size() != 0)
		throw(Span::ErrorFoundAdd());
	srand(time(NULL));
	for (size_t i = 0; i < number; i++)
	{
		tab.push_back(rand() % 100);
	}
}

unsigned int	Span::longestSpan(void) const
{
	unsigned int 	max;
	unsigned int 	min;

	if (tab.size() < 2)
		throw(Span::ErrorFoundSize());
	max = *std::max_element(tab.begin(), tab.end());
	min = *std::min_element(tab.begin(), tab.end());
	return (max - min);
}

unsigned int 	Span::shortestSpan() const
{
	Span	temp(*this);
	int		_short;

	std::sort(temp.tab.begin(), temp.tab.end());
	if (temp.tab.size() >= 2)
		_short = temp.tab[1] - temp.tab[0];
	else if (temp.tab.size() < 2)
		throw(Span::ErrorFoundSize());
	for (size_t i = 0; i < temp.tab.size() - 1; i++)
	{
		if ((i + 1) < temp.tab.size())
		{
			if (temp.tab[i + 1] - temp.tab[i] < _short)
				_short = temp.tab[i + 1] - temp.tab[i];
		}
	}
	return (_short);
}