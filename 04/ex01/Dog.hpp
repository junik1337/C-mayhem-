/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: junik <ayassir@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/22 12:12:15 by ayassir           #+#    #+#             */
/*   Updated: 2023/01/31 17:34:51 by junik            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef DOG_HPP
# define DOG_HPP

# include <iostream>
# include "Animal.hpp"
# include "Brain.hpp"

class Dog : public Animal {

	private :
		std::string		type;
		Brain*			dogBrain;
	public:
		Dog();

		Dog (Dog const &obj);
		Dog &operator= (const Dog &obj);

		std::string		getType(void) const;
		void			makeSound() const;

		~Dog();
};


#endif