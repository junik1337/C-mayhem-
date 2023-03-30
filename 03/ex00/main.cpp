/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ayassir <ayassir@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/31 10:34:48 by ayassir           #+#    #+#             */
/*   Updated: 2023/01/02 16:06:29 by ayassir          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"

int	main(void){
	
	ClapTrap	_attacker("ilyass");
	ClapTrap	_target("ahmed");

	std::cout << std::endl;

	_attacker.attack(_target.getName());
	_attacker.status();
	_target.status();
	_attacker.takeDamage(2);
	_attacker.attack(_target.getName());
	_target.reduceDamage(_attacker.getDamage());
	_attacker.status();
	_target.status();
	_attacker.attack(_target.getName());
	_target.reduceDamage(_attacker.getDamage());
	_attacker.status();
	_target.status();
	_target.beRepaired(2);
	_attacker.status();
	_target.status();

	std::cout << std::endl;
	return (0);
}