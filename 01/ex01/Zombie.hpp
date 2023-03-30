/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ayassir <ayassir@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/26 10:18:12 by ayassir           #+#    #+#             */
/*   Updated: 2022/12/26 10:19:11 by ayassir          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ZOMBIE_HPP
# define ZOMBIE_HPP

# include <iostream>

class Zombie{
	private :
		// Attributes
		std::string	_name;
	public : 
		// Constructor
		Zombie();
		// Setter
		void		setName(std::string name);
		// Getter
		std::string	getName(void) const;
		// Method, Successor, Member function
		void		announce(void);
		// Destructor
		~Zombie();
};

Zombie* zombieHorde(int N, std::string name);

#endif