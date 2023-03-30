/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AAnimal.hpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: junik <ayassir@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/30 11:01:17 by junik             #+#    #+#             */
/*   Updated: 2023/01/31 17:40:53 by junik            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef _AAnimal_HPP_
#define _AAnimal_HPP_

#include <iostream>

// ******************************************************** //
//                         CLASSES                         //
// ****************************************************** //

class AAnimal {
	protected :
		std::string		type;
	public :
		AAnimal();

		AAnimal(std::string type);
		AAnimal (AAnimal const &obj);
		AAnimal &operator= (const AAnimal &obj);

		virtual std::string	getType() const;
		virtual void		makeSound(void) const = 0;
		virtual void		setType(std::string type);

		virtual ~AAnimal();
};

// ******************************************************** //
//                        FUNCTIONS                        //
// ****************************************************** //

#endif
