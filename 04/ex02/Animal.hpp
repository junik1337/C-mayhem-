/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: junik <ayassir@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/23 12:52:29 by junik             #+#    #+#             */
/*   Updated: 2023/01/31 17:44:20 by junik            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ANIMAL_HPP
# define ANIMAL_HPP

# include <iostream>

class Animal {
	protected :
		std::string		type;
	public :
		Animal();

		Animal(std::string type);
		Animal (Animal const &obj);
		Animal &operator= (const Animal &obj);

		virtual std::string	getType() const;
		virtual void		makeSound(void) const;
		virtual void		setType(std::string type);

		virtual ~Animal();
};

#endif