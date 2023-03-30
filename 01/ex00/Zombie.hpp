/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ayassir <ayassir@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/26 09:56:02 by ayassir           #+#    #+#             */
/*   Updated: 2022/12/26 18:29:26 by ayassir          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ZOMBIE_HPP
# define ZOMBIE_HPP

# include <iostream>

class Zombie {
	private :
		// Attributes
		std::string	_name;
	public :
		// Constructor
		Zombie(){};
		// Parameterized constructor
		Zombie(std::string name);
		// Accessors (Member functions)
		void	announce(void);
		// Destructor
		~Zombie();
};

Zombie*		newZombie(std::string name);
void		randomChump(std::string name);
#endif