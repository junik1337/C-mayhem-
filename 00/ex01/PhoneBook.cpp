/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ayassir <ayassir@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/10 17:06:13 by ayassir           #+#    #+#             */
/*   Updated: 2022/12/12 11:46:03 by ayassir          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PhoneBook.hpp"

int ft_isstrdgt(const char *str)
{
    int       i;

    i = 0;
    while (str[i])
    {
        if (!isdigit(str[i]))
            return (0);
        i++;
    }
    return (1);
}

void    ft_printen(std::string strn)
{
    int     i;
    char    *str = (char *)strn.c_str();

    i = 0;
    while (str[i])
    {
        if (i == 9)
        {
            std::cout << '.';
            std::cout << ' ';
            return ;
        }
        std::cout << str[i];
        i++;
    }
    while (i <= 10)
    {
        std::cout << ' ';
         i++;
    }
}

void    print_one_index(int index, PhoneBook one)
{
    std::cout << "---------------------------------------------------" << std::endl;
    std::cout << "|  index  " << ' ' << '|' << ' ';
    std::cout << "first name" << ' ' << '|' << ' ';
    std::cout << "last name " << ' ' << '|' << ' ';
    std::cout << " nickname " << ' ' << '|' << std::endl;
    std::cout << "|-------------------------------------------------|" << std::endl;
    std::cout << "|    " << index << "     " << '|' << ' ';
    ft_printen(one.contact[index].getFirstName());
    std::cout << '|' << ' ';
    ft_printen(one.contact[index].getLastName());
    std::cout << '|' << ' ';
    ft_printen(one.contact[index].getnickName());
    std::cout << '|' << std::endl;
    std::cout << "|-------------------------------------------------|" << std::endl;
}

void    ft_print_index(PhoneBook one)
{
    std::string     index;
    int             index_i;

    std::cout << "Enter the contact's index : ";
    while (getline(std::cin, index))
    {
        index_i = atoi(index.c_str());
        if (index.empty() || index.size() > 1 || !isdigit(index.c_str()[0]) || index_i > 7)
        {
            std::cout << "Please enter a valid index." << std::endl;
            std::cout << "Enter the contact's index : ";
        }
        else if (!index.empty())
        {
            if (one.contact[index_i].getFirstName().empty())
            {
                std::cout << "Index is empty, try another time." << std::endl;
                return ;
            }
            print_one_index(index_i, one);
            return ;
        }
    }
}

void    ft_phonebook_search(PhoneBook to_search)
{
    int     index = 0;

    std::cout << "---------------------------------------------------" << std::endl;
    std::cout << "|  index  " << ' ' << '|' << ' ';
    std::cout << "first name" << ' ' << '|' << ' ';
    std::cout << "last name " << ' ' << '|' << ' ';
    std::cout << " nickname " << ' ' << '|' << std::endl;
    std::cout << "|-------------------------------------------------|" << std::endl;
    while (index < 8)
    {
        if (to_search.contact[index].finished != 1)
            break ;
        std::cout << "|    " << index << "     " << '|' << ' ';
        ft_printen(to_search.contact[index].getFirstName());
        std::cout << '|' << ' ';
        ft_printen(to_search.contact[index].getLastName());
        std::cout << '|' << ' ';
        ft_printen(to_search.contact[index].getnickName());
        std::cout << '|' << std::endl;
        std::cout << "|-------------------------------------------------|" << std::endl;
        index++;
    }
    ft_print_index(to_search);
}

PhoneBook    ft_phonebook_add(PhoneBook   Phonebook)
{
    static int  index;
    std::string str;
    std::cout << '\t' << "Enter the first name : ";
    while (getline(std::cin, str))
    {
        if (str.empty())
            std::cout << '\t' << "Enter the first name : "; 
        else if (!str.empty())
        {
            Phonebook.contact[index].setFirstName(str);
            break ;
        }
    }
    str.clear();
    std::cout << '\t' << "Enter the last name : ";
    while (getline(std::cin, str))
    {
        if (str.empty())
            std::cout << '\t' << "Enter the last name : "; 
        else if (!str.empty())
        {
            Phonebook.contact[index].setLastName(str);
            break ;
        }
    }
    str.clear();
    std::cout << '\t' << "Enter the nickname : ";
    while (getline(std::cin, str))
    {
        if (str.empty())
            std::cout << '\t' << "Enter the nickname : "; 
        else if (!str.empty())
        {
            Phonebook.contact[index].setnickName(str);
            break ;
        }
    }
    str.clear();
    std::cout << '\t' << "Enter the phone number : ";
    while (getline(std::cin, str))
    {
        if (str.empty())
            std::cout << '\t' << "Enter the phone number : "; 
        else if (!str.empty())
        {
            if (!ft_isstrdgt(str.c_str()))
            {
                std::cout << '\t' << "Please enter a valid phone number." << std::endl;
                std::cout << '\t' << "Enter the phone number : ";
                continue ;
            }
            Phonebook.contact[index].setPhoneNumber(str);
            break ;
        }
    }
    str.clear();
    std::cout << '\t' << "Enter the darkest secret : ";
    while (getline(std::cin, str))
    {
        if (str.empty())
            std::cout << '\t' << "Enter the darkest secret : "; 
        else if (!str.empty())
        {
            Phonebook.contact[index].setDarkSecret(str);
            break ;
        }
    }
    Phonebook.contact[index].finished = 1;
    std::cout << "Contact " << index + 1 << " was added successfully ✔️." << std::endl;
    index++;
     if (index == 8)
        index = 0;
    return (Phonebook);
}

void    ft_phonebook(void)
{
    std::string command;
    PhoneBook   Search;

    std::cout << "Enter a command : ";
    while (std::cin.getline((char *)command.c_str(), MAX_INPUT, '\n').good())
    {
        if (!strcmp(command.c_str(), "ADD"))
        {
            Search = ft_phonebook_add(Search);
            std::cin.clear();
        }
        else if (!strcmp(command.c_str(), "SEARCH"))
        {
            ft_phonebook_search(Search);
            std::cin.clear();
        }
        else if (!strcmp(command.c_str(), "EXIT"))
            exit(EXIT_SUCCESS);
        else
            std::cout << "Invalid command. Please enter \"ADD\", \"SEARCH\" OR \"EXIT\"" << std::endl;
        std::cout << "Enter a command : ";
    }
}
