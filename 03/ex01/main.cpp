/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ayassir <ayassir@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/31 10:34:48 by ayassir           #+#    #+#             */
/*   Updated: 2023/01/02 17:30:26 by ayassir          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"
#include "ScavTrap.hpp"

int	main(void){
	
	ScavTrap	_attacker("ilyass");
	ScavTrap	_target("abderrahman");

	std::cout << std::endl;

	_attacker.attack(_target.getName());
	_target.reduceDamage(_attacker.getDamage());
	_attacker.status();
	_target.status();
	_attacker.takeDamage(5);
	_attacker.attack(_target.getName());
	_target.reduceDamage(_attacker.getDamage());
	_attacker.status();
	_target.status();
	_attacker.attack(_target.getName());
	_target.reduceDamage(_attacker.getDamage());
	_attacker.status();
	_target.status();
	_target.guardGate();
	_target.beRepaired(20);
	_attacker.status();
	_target.status();

	std::cout << std::endl;
	return (0);
}