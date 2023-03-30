/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   RPN.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ayassir <ayassir@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/14 12:09:00 by ayassir           #+#    #+#             */
/*   Updated: 2023/03/30 14:43:43 by ayassir          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "RPN.hpp"

std::string    remove_spaces(std::string str)
{
    std::string::iterator   it;

    if (str.empty())
        throw(std::runtime_error("Error: string is empty"));
    it = str.begin();
    while (it != str.end())
    {
        if (*it == ' ')
        {
            it = str.erase(it);
            continue;
        }
        it++;
    }
    return (str);
}

bool    istoken(char c)
{
    if (c == '+' || c == '*' || c == '/' || c == '-')
        return (true);
    return (false);
}

size_t  operations_(size_t val1, size_t val2, char operat)
{
    if (operat == '+')
        return (val2 + val1);
    else if (operat == '-')
        return (val2 - val1);
    else if (operat == '*')
        return (val2 * val1);
    else if (operat == '/')
    {
        if (val1 == 0)
            throw (std::runtime_error("Error: Invalid expression"));
        return (val2 / val1);
    }
    return (throw (std::runtime_error("Error: Invalid expression")), 0);
}

void    maths(std::stack<int>& stl, char operat)
{
    size_t      value1;
    size_t      value2;
    size_t      push;

    if (stl.size() >= 2)
    {
        value1 = stl.top();
        stl.pop();
        value2 = stl.top();
        stl.pop();
        push = operations_(value1, value2, operat);
        stl.push(push);
    }
    else {
        throw (std::runtime_error("Error: Invalid expression"));
    }
}

void    RPN(std::string str)
{
    std::stack<int>        stl;

    str = remove_spaces(str);
    for (size_t i = 0; i < str.size(); i++) {
        if (i == 0 && str.size() > 1)
        {
            if (isdigit(str[i]) && isdigit(str[i + 1]))
            {
                stl.push(str[i] - '0');
                continue ;
            }
            else if (!isdigit(str[i]) || !isdigit(str[i + 1]))
                throw (std::runtime_error("Error: Invalid expression"));
        }
        if (isdigit(str[i]))
            stl.push(str[i] - '0');
        else if (istoken(str[i]))
            maths(stl, str[i]);
        else
            throw (std::runtime_error("Error: Invalid expression"));
    }
    if (stl.size() >= 2)
        throw (std::runtime_error("Error: Invalid expression"));
    std::cout << stl.top() << std::endl;
}
