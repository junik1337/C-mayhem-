/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ayassir <ayassir@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/26 15:36:34 by ayassir           #+#    #+#             */
/*   Updated: 2022/12/26 18:53:15 by ayassir          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Harl.hpp"

int	main(int ac, char **av)
{
	Harl		harl;

	if (ac == 2)
	{
		if (!strcmp(av[1], "DEBUG") || !strcmp(av[1], "INFO")
			|| !strcmp(av[1], "WARNING") || !strcmp(av[1], "ERROR"))
		{
			harl.complain(av[1]);
			return (0);
		}
	}
	else
	{
		std::cerr << "Invalid arguments." << std::endl;
		return (1);
	}
	std::cout << "[ Probably complaining about insignificant problems ]";
	std::cout << std::endl;
	return (1);
}