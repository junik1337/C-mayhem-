/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ayassir <ayassir@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/26 09:55:51 by ayassir           #+#    #+#             */
/*   Updated: 2022/12/26 18:28:58 by ayassir          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

int	main()
{
	Zombie	stack("STACK");
	Zombie	*heap;

	heap = newZombie("HEAP");
	randomChump("STACK1");
	heap->announce();
	stack.announce();
	delete heap;
	return (0);
}