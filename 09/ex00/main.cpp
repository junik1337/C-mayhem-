/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ayassir <ayassir@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/16 12:02:28 by ayassir           #+#    #+#             */
/*   Updated: 2023/03/23 14:07:12 by ayassir          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "BitcoinExchange.hpp"

int main(int ac, char **av)
{
    try {
        if (ac == 2)
            BitcoinExchange(av[1]);
    } catch (std::exception& except) {
        std::cout << except.what() << std::endl;
    }
    return (1);
}