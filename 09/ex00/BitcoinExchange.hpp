/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   BitcoinExchange.hpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ayassir <ayassir@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/16 12:02:11 by ayassir           #+#    #+#             */
/*   Updated: 2023/03/29 20:42:17 by ayassir          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#define itr std::map<std::string, double>::iterator
#define cout(x) std::cout << x
#define nl "\n"
#define WHITESPACES " \n\v\r\t\f"

#include <exception>
#include <algorithm>
#include <stdexcept>
#include <iostream>
#include <fstream>
#include <sstream>
#include <utility>
#include <cstddef>
#include <iomanip>
#include <string>
#include <map>
#include <ios>

typedef struct s_ymd {
	int     year;
	int     month;
	int     day;
}              t_ymd;

std::string		erease_whitespaces(std::string &str);
void			handle_data(std::map<std::string, double>& btc, std::string key, std::string mapped);
void			read_input(std::string input, std::map<std::string, double>& btc);
void			BitcoinExchange(std::string input);
void			handle_not_found(std::map<std::string, double>& btc, std::string key, std::string mapped);