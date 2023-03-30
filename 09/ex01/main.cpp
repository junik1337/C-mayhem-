/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ayassir <ayassir@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/14 11:59:31 by ayassir           #+#    #+#             */
/*   Updated: 2023/03/24 17:31:34 by ayassir          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "RPN.hpp"

int main(int ac, char **av)
{
    
    try {
        if (ac == 2)
            return (RPN(av[1]), 0);    
    }
    catch (std::exception& except) {
        std::cout << except.what() << std::endl;
    }
    return (1);
}