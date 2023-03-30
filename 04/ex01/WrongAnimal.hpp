 /* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongAnimal.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: junik <ayassir@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/22 18:54:52 by junik             #+#    #+#             */
/*   Updated: 2023/01/30 11:18:23 by junik            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef WRONGANIMAL_HPP
# define WRONGANIMAL_HPP

# include <iostream>

class WrongAnimal {
	
	protected :
		std::string		type;
	public :
		WrongAnimal();
		WrongAnimal(std::string type);
		WrongAnimal (WrongAnimal const &obj);
		WrongAnimal &operator= (const WrongAnimal &obj);
		std::string	getType() const;
		void		makeSound(void) const;
		void		setType(std::string type);
		
		~WrongAnimal();
};

#endif