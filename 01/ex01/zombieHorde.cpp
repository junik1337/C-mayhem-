/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   zombieHorde.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ayassir <ayassir@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/26 10:24:47 by ayassir           #+#    #+#             */
/*   Updated: 2022/12/26 10:26:58 by ayassir          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

Zombie*	zombieHorde(int N, std::string name)
{
	Zombie	*heap;

	heap = new Zombie[N];
	for (int i = 0; i < N; i++)
	{
		heap[i].setName(name);
	}
	return (heap);
}