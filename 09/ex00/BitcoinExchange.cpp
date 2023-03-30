/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   BitcoinExchange.cpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ayassir <ayassir@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/16 12:02:25 by ayassir           #+#    #+#             */
/*   Updated: 2023/03/30 14:38:46 by ayassir          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "BitcoinExchange.hpp"

bool	is_leap(int year)
{
	if (year % 400 == 0 || year % 4 == 0)
		return (true);
	else if (year % 100 == 0)
		return (false);
	return (false);
}

bool	is_year(std::string key, t_ymd	&d)
{
	std::string::iterator		it;
	std::string::iterator		iit;
	std::string					str;
	int							year;

	it = std::find(key.begin(), key.end(), '-');
	for (iit = key.begin(); iit != it; iit++) {
		if (!isdigit(*iit))
			return (false);
		str += *iit;
	}
	year = std::atoi(str.c_str());
	d.year = year;
	if (year > 2023 || year < 1983)
		return (false);
	return (true);
}

bool	is_month(std::string key, t_ymd	&d)
{
	std::string::iterator		it;
	std::string::iterator		itt;
	std::string					str;
	int							month;

	it = std::find(key.begin() + 5, key.end(), '-');
	itt = key.begin() + 5;
	while (itt != it)
	{
		if (!isdigit(*itt))
			return (false);
		str += *itt;
		itt++;
	}
	month = atoi(str.c_str());
	d.month = month;
	if (month < 1 || month > 12)
		return (false);
	if (month == 29 && !is_leap(d.year))
		return (false);
	return (true);
}

bool	is_31(int day, int month)
{
	if (day == 31)
	{
		if (month == 1 || month == 3 || month == 5 ||
			month == 7 || month == 8 || month == 10 ||
			month == 12)
			return (true);
		else
			return (false);
	}
	return (true);
}

bool	is_day(std::string key, t_ymd &d)
{
	std::string::iterator	it;
	std::string::iterator	itt;
	std::string				str;
	int						day;

	it = std::find(key.begin() + 8, key.end(), '-');
	itt = key.begin() + 8;
	while (itt != it)
	{
		if (!isdigit(*itt))
			return (false);
		str += *itt;
		itt++;
	}
	if (str.size() > 2)
		return (false);
	day = std::atoi(str.c_str());
	d.day = day;
	if (day < 1 || day > 31)
		return (false);
	if (!is_31(day, d.month))
		return (false);
	return (true);
}

bool	is_dash(std::string key)
{
	int		dash = 0;

	for (size_t i = 0; i < key.size(); i++) {
		if (key[i] == '-')
			dash++;
	}
	if (dash == 2)
		return (true);
	return (false);
}

bool	is_pipe(std::string key)
{
	int		pipe = 0;

	std::cout << "mapped : " << std::endl;
	for (size_t i = 0; i < key.size(); i++) {
		if (key[i] == '|')
			pipe++;
	}
	if (pipe > 1)
		return (false);
	return (true);
}

bool	is_key_valid(std::string key, t_ymd &d)
{

	if (!is_dash(key))
		return (cout("Error: bad input => "), cout(key), cout("\n"), false);
	else if (!is_year(key, d))
		return (cout("Error: bad input => "), cout(key), cout("\n"), false);
	else if (!is_month(key, d))
		return (cout("Error: bad input => "), cout(key), cout("\n"), false);
	else if (!is_day(key, d))
		return (cout("Error: bad input => "), cout(key), cout("\n"), false);
	return (true);
}

bool	check_value(std::string mapped)
{
	size_t	point = 0;

	for (size_t i = 0; i < mapped.size(); i++) {
		if (mapped[i] == '.')
			point++;
		else if (!isdigit(mapped[i]) && mapped[i] != '-')
			return (false);
		else if (mapped[i] == '-' && i != 0)
			return (false);
	}
	if (point > 1)
		return (false);
	return (true);
}

bool	is_value_valid(std::string mapped)
{
	double	value;

	if (mapped.empty())
		return (cout("Error: value is empty.\n"), false);
	else if (!check_value(mapped))
		return (cout("Error: bad input => "), cout(mapped), cout("\n"), false);
	value = std::stod(mapped);
	if (value > 1000)
		return (cout("Error: too large a number.\n"), false);
	else if (value < 0)
		return (cout("Error: not a positive number.\n"), false);
	return (true);
}


bool    trim(std::string &data0, std::string &data1, std::string temp)
{
	temp.erase(std::remove_if(temp.begin(), temp.end(), ::isspace), 
		temp.end());
	data0 = temp.substr(0, temp.find('|'));
	data1 = temp.substr(temp.find('|') + 1);
	if (data0.empty())
		return (cout("Error: date is empty.\n"), false);
	else if (data1.empty())
		return (cout("Error: value is empty.\n"), false);
	return (true);
}

void    BitcoinExchange(std::string input)
{
	std::map<std::string, double>		btc;
	std::ifstream						file;
	std::string							temp, data[2];
	double								mapped;

	file.open("data.csv");
	if (file.fail() || !file.is_open())
		throw(std::runtime_error("Error: cannot open file"));
	std::getline(file, temp);
	temp.clear();
	while (!file.eof())
	{
		std::getline(file, temp);
		data[0] = temp.substr(0, 10); data[1] = temp.substr(11);
		mapped = std::stod(data[1]);
		btc[data[0]] = mapped;
		data[0].clear(); data[1].clear(); temp.clear();
	}
	file.close();
	read_input(input, btc);
}

void    read_input(std::string input, std::map<std::string, double>& btc)
{
    std::ifstream   file;
    std::string     temp, data[2];
    itr             it;

    file.open(input);
    if (file.fail() || !file.is_open())
        throw(std::runtime_error("Error: cannot open file"));
    while (!file.eof())
    {
        std::getline(file, temp);
		if (!trim(data[0], data[1], temp))
			continue;
        handle_data(btc, data[0], data[1]);
        data[0].clear(); data[1].clear(); temp.clear();
    }
	file.close();
}


void    handle_data(std::map<std::string, double>& btc, std::string key, std::string mapped)
{
	double		bExchange;
	double		value;
	itr			it;
	t_ymd		d;

	if (!is_key_valid(key, d) || !is_value_valid(mapped))
		return ;
	std::cout << std::fixed << std::setprecision(2);
	for (it = btc.begin(); it != btc.end(); it++) {
		if (it->first == key)
		{
			bExchange = it->second;
			value = std::stod(mapped);
			cout(key), cout(" => "), cout(mapped), cout(" = ");
			cout(bExchange*value), cout(nl);
			return ;
		}
	}
	handle_not_found(btc, key, mapped);
}

void	handle_not_found(std::map<std::string, double>& btc, std::string key, std::string mapped)
{
	itr				it;

	it = btc.lower_bound(key);
	if (it->first != key && it != btc.begin())
		--it;
	cout(key), cout(" => "), cout(mapped), cout(" = ");
	cout((it->second) * (std::stod(mapped))), cout(nl);
}