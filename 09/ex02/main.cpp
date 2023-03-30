/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ayassir <ayassir@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/23 14:22:44 by ayassir           #+#    #+#             */
/*   Updated: 2023/03/28 20:36:24 by ayassir          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PmergeMe.hpp"

int main(int ac, char **av)
{
    try {
        if (ac >= 3)
            return (PmergeMe(av, ac - 1), 0);
        else
            throw(std::runtime_error("Error"));
    } 
    catch (std::exception& except) {
        std::cout << except.what() << std::endl;
    }
    return (1);
}