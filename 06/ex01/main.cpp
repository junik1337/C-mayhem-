/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ayassir <ayassir@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/09 20:44:38 by ayassir           #+#    #+#             */
/*   Updated: 2023/02/11 14:04:25 by ayassir          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Serializer.hpp"

int main(int ac, char** av)
{
	if (ac == 2)
	{
		uintptr_t	holder;
		Data		*data = new Data();

		data->name = av[1];
		holder = 0;

		std::cout << "********* Before serialization *********" << '\n' << '\n';
		std::cout << "/- holder's content : " << holder << '\n';
		std::cout << "\\- holder's address : " << &holder << '\n';
		std::cout << std::endl;
		std::cout << "/- data's content : " << data->name << '\n';
		std::cout << "\\- data's address : " << &data->name << '\n' << '\n';
	
		std::cout << "********* after serialization *********" << '\n' << '\n';
		holder = Serializer::serialize(data);
		std::cout << "/- holder's content : " << holder << '\n';
		std::cout << "\\- holder's address : " << &holder << '\n' << '\n';

		std::cout << "********* after deserialization *********" << '\n' << '\n';
		data = Serializer::deserialize(holder);
		std::cout << "/- data's content : " << data->name << '\n';
		std::cout << "\\- data's address : " << &data->name << '\n' << '\n';

		delete data;
		return (0);
	}
	std::cerr << "Invalid arguments...!" << std::endl;
	return (1);
}
