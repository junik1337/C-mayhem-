/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Serializer.hpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ayassir <ayassir@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/09 20:44:39 by ayassir           #+#    #+#             */
/*   Updated: 2023/02/11 14:03:46 by ayassir          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef _Serializer_HPP_
#define _Serializer_HPP_

#include <iostream>

// ******************************************************** //
//                         CLASSES                         //
// ****************************************************** //

struct Data
{
	std::string	name;
};

class	Serializer
{
	public	:
		~Serializer ();
		Serializer &operator= (const Serializer &obj);

		static uintptr_t	serialize(Data* ptr);
		static Data*		deserialize(uintptr_t raw);
	private :
		Serializer (Serializer const &obj);
		Serializer ();
};

// ******************************************************** //
//                        FUNCTIONS                        //
// ****************************************************** //

#endif
