/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanA.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ayassir <ayassir@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/26 11:14:12 by ayassir           #+#    #+#             */
/*   Updated: 2022/12/26 11:14:14 by ayassir          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef HUMANA_HPP
# define HUMANA_HPP

#include "Weapon.hpp"

class HumanA {
	private :
		// Attributes
		std::string		_name;
		Weapon			&_weapon;
	public :
		// Parameterized constructor
		HumanA(std::string name, Weapon &weapon);
		// Method, Accessor, Member function
		void	attack(void);
		// Destructor
		~HumanA();
};
#endif