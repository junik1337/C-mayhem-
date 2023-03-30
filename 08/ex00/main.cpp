/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ayassir <ayassir@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/13 22:09:38 by ayassir           #+#    #+#             */
/*   Updated: 2023/02/15 15:55:19 by ayassir          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "easyfind.hpp"
#define	FIND	20

int main()
{
	try
	{
		std::vector<int>::iterator	occurrence;
		std::vector<int> 			tab;

		tab.push_back(10);
		tab.push_back(20);
		tab.push_back(30);
		tab.push_back(40);
		tab.push_back(50);

		std::cout << "The vector: ";
		for(std::size_t i = 0; i < tab.size(); i++)
			std::cout<< tab[i] << " ";
		std::cout << std::endl;

		occurrence = easyfind(tab, FIND);

		std::cout << "Element (" << FIND << ") found at position : ";
        std::cout << occurrence - tab.begin() << " (counting from zero).\n";
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << '\n';
	}
	return (0);
}
