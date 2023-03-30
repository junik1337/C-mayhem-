/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Weapon.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ayassir <ayassir@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/26 11:14:05 by ayassir           #+#    #+#             */
/*   Updated: 2022/12/26 11:14:07 by ayassir          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef WEAPON_HPP
# define WEAPON_HPP

# include <iostream>

class Weapon {
	private :
		// Attributes
		std::string		_type;
	public :
		// Parameterized constructor
		Weapon(const std::string& type);
		// Setter
		void				setType(const std::string& type);
		// Getter
		const std::string&	getType(void) const;
		// Destructor
		~Weapon();
};
#endif