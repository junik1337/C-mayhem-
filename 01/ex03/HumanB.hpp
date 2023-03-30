/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanB.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ayassir <ayassir@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/26 11:13:57 by ayassir           #+#    #+#             */
/*   Updated: 2022/12/26 11:15:19 by ayassir          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef HUMANB_HPP
# define HUMANB_HPP

#include "Weapon.hpp"

class HumanB {
	private :
		// Attributes
		std::string		_name;
		Weapon			*_weapon;
	public :
		// Parametrized constructor
		HumanB(std::string name);
		// Method, Accessor, Member function
		void	attack(void);
		// Setter (Method)
		void	setWeapon(Weapon &weapon);
		// Destructor
		~HumanB();
};
#endif
