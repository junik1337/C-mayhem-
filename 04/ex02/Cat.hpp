/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: junik <ayassir@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/22 12:12:12 by ayassir           #+#    #+#             */
/*   Updated: 2023/01/31 17:45:10 by junik            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CAT_HPP
# define CAT_HPP

# include <iostream>
# include "Animal.hpp"
# include "Brain.hpp"

class Cat : public Animal {

	private :
		std::string		type;
		Brain*			catBrain;
	public:
		Cat();

		Cat (Cat const &obj);
		Cat &operator= (const Cat &obj);

		std::string	getType(void) const;
		void		setType(std::string type);
		void		makeSound() const;

		~Cat();
};

#endif