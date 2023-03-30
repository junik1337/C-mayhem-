/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Harl.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ayassir <ayassir@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/26 19:51:18 by ayassir           #+#    #+#             */
/*   Updated: 2022/12/26 19:51:19 by ayassir          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef HARL_HPP
# define HARL_HPP

#include <iostream>
#include <string.h>

class Harl {
	private :
		void debug(void);
		void info(void);
		void warning(void);
		void error(void);	
	public :
		Harl(){};
		void complain(std::string level);
		~Harl(){};
};
#endif