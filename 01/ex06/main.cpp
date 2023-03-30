/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ayassir <ayassir@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/26 17:55:41 by ayassir           #+#    #+#             */
/*   Updated: 2022/12/26 18:27:36 by ayassir          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Harl.hpp"

int	main(int ac, char **av)
{
	Harl		harl;

	if (ac == 2)
	{
		harl.complain(av[1]);
		return (0);
	}
	else
		return (std::cerr << "Invalid arguments." << std::endl, 1);
	return (1);
}