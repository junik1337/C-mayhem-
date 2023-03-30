/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ayassir <ayassir@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/31 10:36:42 by ayassir           #+#    #+#             */
/*   Updated: 2023/01/02 17:48:39 by ayassir          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CLAPTRAP_HPP
# define CLAPTRAP_HPP

# include <iostream>

class ClapTrap {
	private:
		std::string		_name;
		int				_hit;
		int				_energy;
		int				_damage;
	public:
		ClapTrap();
		ClapTrap(std::string name);
		~ClapTrap();
		void 			attack(const std::string& target);
		void 			takeDamage(unsigned int amount);
		void 			beRepaired(unsigned int amount);
		void			reduceDamage(unsigned int amount);
		std::string		getName(void) const;
		int				getDamage(void) const;
		void			status(void);
};

#endif