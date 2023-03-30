/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PmergeMe.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ayassir <ayassir@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/23 14:22:45 by ayassir           #+#    #+#             */
/*   Updated: 2023/03/30 15:43:06 by ayassir          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#define cout(x) std::cout << x
#define nl std::endl
#define itr std::vector<int>::iterator
#define K 4

#include <sys/_types/_clock_t.h>
#include <sys/_types/_size_t.h>
#include <sys/_types/_time_t.h>
#include <algorithm>
#include <stdexcept>
#include <iostream>
#include <cstdlib>
#include <cstddef>
#include <iomanip>
#include <vector>
#include <deque>
#include <ctime>

void    PmergeMe(char **av, int size);