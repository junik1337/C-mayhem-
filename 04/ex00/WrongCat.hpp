/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongCat.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: junik <ayassir@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/22 19:01:18 by junik             #+#    #+#             */
/*   Updated: 2023/01/30 15:30:25 by junik            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef WRONGCAT_HPP
# define WRONGCAT_HPP

# include <iostream>
# include "WrongAnimal.hpp"

class WrongCat : public WrongAnimal {

	private :
		std::string		type;
	public:
		WrongCat();
		WrongCat (WrongCat const &obj);
		WrongCat &operator= (const WrongCat &obj);
		std::string	getType(void) const;
		void		makeSound() const;
		~WrongCat();
};

#endif