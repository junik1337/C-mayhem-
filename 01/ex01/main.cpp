/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ayassir <ayassir@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/26 10:18:19 by ayassir           #+#    #+#             */
/*   Updated: 2022/12/26 18:42:29 by ayassir          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

int	main()
{
	Zombie	*heap;
	int		N = 11;

	heap = zombieHorde(N, "HEAP");
	for (int i = 0; i < N; i++)
	{
		heap[i].announce();
	}
	delete [] heap;
	return (0);
}