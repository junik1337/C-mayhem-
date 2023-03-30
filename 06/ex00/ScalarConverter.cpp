/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScalarConverter.cpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ayassir <ayassir@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/07 19:06:11 by ayassir           #+#    #+#             */
/*   Updated: 2023/02/11 19:47:29 by ayassir          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScalarConverter.hpp"

ScalarConverter::ScalarConverter()
{
}

ScalarConverter::~ScalarConverter()
{
}

ScalarConverter::ScalarConverter(ScalarConverter const &obj)
{
	if (this != &obj)
		*this = obj;
}

ScalarConverter	&ScalarConverter::operator= (const ScalarConverter &obj)
{
	(void) obj;
	return (*this);
}

int		search_for_characters(std::string str)
{
	for (size_t i = 0; i < str.size(); i++)
	{
		if (isalpha(str.c_str()[i]))
			return (0);
	}
	return (1);
}

void	valid_number(std::string number)
{
	int		valid_point = 0;
	int		valid_f = 0;

	for (size_t i = 0; i < number.size(); i++)
	{
		if (number.c_str()[i] == '.')
		{
			valid_point++;
			continue ;
		}
		else if (number.c_str()[i] == 'f')
		{
			valid_f++;
			continue ;
		}
		else if (isalpha(number.c_str()[i]))
			throw (ScalarConverter::ErroFound());
	}
	if (valid_point > 1 || valid_f > 1
		|| std::count(number.begin(), number.end(), '-') > 1) 
		throw (ScalarConverter::ErroFound());
}

int		search_for_numbers(std::string str)
{
	for (size_t i = 0; i < str.size(); i++)
	{
		if (!isdigit(str.c_str()[i]))
		{
			if (str.front() == '-')
				continue ;
			return (0);
		}
	}
	return (1);
}

void	handle_numbers(std::string str)
{
	if (str.size() > 10)
		throw(ScalarConverter::ErroFound());
	int		_int;
	
	_int = stoi(str);
	if (_int >= 0 && _int < 32)
	{
		std::cout << "char: " << "Non displayable" << std::endl;
		std::cout << "int: " << _int << std::endl;
		std::cout << "float: " << _int << ".0f\n";
		std::cout << "double: " << _int << ".0\n";	
	}
	else if (_int >= 32 && _int <= 126)
	{
		std::cout << "char: " << "\'" << static_cast<char> (_int) << "\'" << std::endl;
		std::cout << "int: " << _int << std::endl;
		std::cout << "float: " << _int << ".0f\n";
		std::cout << "double: " << _int << ".0\n";
	}
	else
	{
		std::cout << "char: " << "impossible" << std::endl;
		std::cout << "int: " << _int << std::endl;
		std::cout << "float: " << _int << ".0f\n";
		std::cout << "double: " << _int << ".0\n";
	}
}


void	print_float(float _float)
{
	int		_int;

	_int = static_cast<int> (_float);
	if (_int >= 0 && _int < 32)
	{
		std::cout << "char: " << "Non displayable" << std::endl;
		std::cout << "int: " << _int << std::endl;
		std::cout << "float: " << _float << "f\n";
		std::cout << "double: " << _float << "\n";	
	}
	else if (_int >= 32 && _int <= 126)
	{
		std::cout << "char: " << "\'" << static_cast<char> (_int) << "\'" << std::endl;
		std::cout << "int: " << _int << std::endl;
		std::cout << "float: " <<  _float << "f\n";
		std::cout << "double: " << _float << "\n";
	}
	else
	{
		std::cout << "char: " << "impossible" << std::endl;
		std::cout << "int: " << _int << std::endl;
		std::cout << "float: " <<  _float << "f\n";
		std::cout << "double: " << _float << "\n";
	}
}

void	print_float_zero(float _float)
{
	int		_int;

	_int = static_cast<int> (_float);
	if (_int >= 0 && _int < 32)
	{
		std::cout << "char: " << "Non displayable" << std::endl;
		std::cout << "int: " << _int << std::endl;
		std::cout << "float: " << _float << ".0f\n";
		std::cout << "double: " << _float << ".0\n";	
	}
	else if (_int >= 32 && _int <= 126)
	{
		std::cout << "char: " << "\'" << static_cast<char> (_int) << "\'" << std::endl;
		std::cout << "int: " << _int << std::endl;
		std::cout << "float: " <<  _float << ".0f\n";
		std::cout << "double: " << _float << ".0\n";
	}
	else
	{
		std::cout << "char: " << "impossible" << std::endl;
		std::cout << "int: " << _int << std::endl;
		std::cout << "float: " <<  _float << ".0f\n";
		std::cout << "double: " << _float << ".0\n";
	}
}

int	all_zeros(std::string str, size_t begin)
{
	for (size_t i = begin; i < str.size(); i++)
	{
		if (str.c_str()[begin] != '0')
		{
			if (str.c_str()[begin] == 'f')
				return (1);
			else
				return (0);
		}
	}
	return (1);
}

void	handle_float(std::string str)
{
	float	_float = std::stod(str);
	size_t		pos;

	pos = str.find('.');
	if ((all_zeros(str, pos + 1) && str.back() == 'f')
		|| str.c_str()[pos + 1] == 'f' 
		|| str.back() == '.'
		|| all_zeros(str, pos + 1)
		|| (str.back() == 'f' && pos == str.npos))
		return (print_float_zero(_float));
	print_float(_float);
}

int		ft_strchr(std::string str, char ch)
{
	for (size_t i = 0; i < strlen(str.c_str()); i++)
	{
		if (str.c_str()[i] == ch)
			return (1);
	}
	return (0);
}

void	handle_double_float(std::string str)
{
	if (ft_strchr(str, 'f') == 1)
	{
		if (str.back() != 'f')
			throw (ScalarConverter::ErroFound());
	}
	valid_number(str);
	handle_float(str);
}

void	handle_char(std::string str)
{
	if (static_cast<int> (str.c_str()[0]) >= 48 && static_cast<int> (str.c_str()[0]) <= 57)
	{
		int		_int;

		_int = stoi(str);
		std::cout << "char: " << "Non displayable" << std::endl;
		std::cout << "int: " << _int << std::endl;
		std::cout << "float: " << _int << ".0f\n";
		std::cout << "double: " << _int << ".0\n";
		return ;
	}
	std::cout << "char: " << "\'" << str.c_str()[0] << "\'" << std::endl;
	std::cout << "int: " << static_cast<int> (str.c_str()[0]) << std::endl;
	std::cout << "float: " << static_cast<float> (str.c_str()[0]) << ".0f\n";
	std::cout << "double: " << static_cast<double> (str.c_str()[0]) << ".0\n";
}

int	no_alpha(std::string str)
{
	for (size_t i = 0; i < str.size(); i++)
	{
		if (isalpha(str.c_str()[i]))
			return (0);
	}
	return (1);
}

void	handle_infinity(std::string str)
{
	if (!strcmp(str.c_str(), "nanf") || !strcmp(str.c_str(), "nan"))
	{
		std::cout << "char: " << "impossible" << std::endl;
		std::cout << "int: " << "impossible" << std::endl;
		std::cout << "float: " << "nanf" << "\n";
		std::cout << "double: " << "nan" << "\n";
	}
	else if (!strcmp(str.c_str(), "+inf") || !strcmp(str.c_str(), "+inff"))
	{
		std::cout << "char: " << "impossible" << std::endl;
		std::cout << "int: " << "impossible" << std::endl;
		std::cout << "float: " << "inff" << "\n";
		std::cout << "double: " << "inf" << "\n";
	}
	else if (!strcmp(str.c_str(), "-inf") || !strcmp(str.c_str(), "-inff"))
	{
		std::cout << "char: " << "impossible" << std::endl;
		std::cout << "int: " << "impossible" << std::endl;
		std::cout << "float: " << "-inff" << "\n";
		std::cout << "double: " << "-inf" << "\n";
	}
}

void	ScalarConverter::convert(std::string _convert)
{
	try
	{
		if (!strcmp(_convert.c_str(), "nanf")
			|| !strcmp(_convert.c_str(), "nan")
			|| !strcmp(_convert.c_str(), "+inf")
			|| !strcmp(_convert.c_str(), "-inf")
			|| !strcmp(_convert.c_str(), "-inff")
			|| !strcmp(_convert.c_str(), "+inff"))
			handle_infinity(_convert);
		else if (_convert.size() == 1 && (isascii(_convert.c_str()[0])))
			handle_char(_convert);
		else if (_convert.find('.') != _convert.npos || _convert.find('f') != _convert.npos)
			handle_double_float(_convert);
		else if (search_for_numbers(_convert))
			handle_numbers(_convert);
		else
			throw(ScalarConverter::ErroFound());
	}
	catch(const std::exception& e)
	{
		std::cerr << "char: " << e.what() << std::endl;
		std::cerr << "int: " << e.what() << std::endl;
		std::cerr << "float: " << e.what() << std::endl;
		std::cerr << "double: " << e.what() << std::endl;
	}
}

const char*		ScalarConverter::ErroFound::what() const throw()
{
	return ("impossible");
}
