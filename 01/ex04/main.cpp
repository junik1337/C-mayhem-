/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ayassir <ayassir@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/26 13:37:21 by ayassir           #+#    #+#             */
/*   Updated: 2022/12/26 15:32:08 by ayassir          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <string>
#include <sstream>
#include <cstring>
#include <fstream>
#define SUCCESS 0
#define FAILURE 1

int	Error_check(char *_filename, char *s1, char *s2)
{
	std::string			_str;
	std::string			_save;
	std::string			_search = s1;
	std::string			_replace = s2;
	std::ifstream		infile;
	std::ofstream		outfile;
	int			 		pos;

	infile.open(_filename);
	if (infile.fail())
	{
		std::cout << "No such file" << std::endl;
		return (FAILURE);
	}
	while (!infile.eof())
	{
		std::getline(infile, _save);
		_str = _str + _save;
		if (infile.eof())
			_str = _str + '\0';
		_str = _str + '\n';
		_save.clear();
	}
	infile.close();
	outfile.open(strcat(_filename, ".replace"));
	if (outfile.fail())
	{
		std::cout << "Can't create the file" << std::endl;
		return (FAILURE);
	}
	while(1)
	{
		if (!_search.size())
			break ;
		pos = _str.find(_search, 0);
		if (pos == (int)strlen(_str.c_str()) || pos < 0)
			break ;
		else
		{
			_save = _replace + _str.substr((pos + strlen(_search.c_str())), _str.size());
			_str = _str.substr(0, pos);
			_str = _str + _save;
		}
		if (pos < 0)
			break ;
	}
	outfile.write(_str.c_str(), _str.size());
	outfile.close();
	return (SUCCESS);
}

int	main(int ac, char **av)
{
	if (ac == 4)
	{
		Error_check(av[1], av[2], av[3]);
	}
	else
	{
		std::cerr << "Invalid arguments, Pleas enter a filename and two strings..";
		std::cerr << std::endl;
		return (FAILURE);
	}
	return (SUCCESS);
}