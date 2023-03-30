/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ayassir <ayassir@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/11 12:11:08 by ayassir           #+#    #+#             */
/*   Updated: 2022/12/12 11:50:16 by ayassir          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PhoneBook.hpp"

int main(int ac, char **av)
{
    (void) av;
    if (ac == 1)
    {
        ft_phonebook();
    }
    else
    {
        std::cout << "Invalid arguments!" << std::endl;
        return (EXIT_FAILURE);
    }
    return (EXIT_SUCCESS);
}
