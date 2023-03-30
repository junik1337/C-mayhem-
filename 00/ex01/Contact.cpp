/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contact.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ayassir <ayassir@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/11 20:36:42 by ayassir           #+#    #+#             */
/*   Updated: 2022/12/12 15:10:58 by ayassir          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Contact.hpp"

void Contact::setFirstName(std::string first)
{
    first_name = first;
}

std::string Contact::getFirstName() const
{
    return (first_name);
}

void Contact::setLastName(std::string last)
{
    last_name = last;
}

std::string Contact::getLastName() const
{
    return (last_name);
}

void Contact::setnickName(std::string nick)
{
    nickname = nick;
}

std::string Contact::getnickName() const
{
    return (nickname);
}

void Contact::setPhoneNumber(std::string phone)
{
    phone_number = phone;
}

std::string Contact::getPhoneNumber() const
{
    return (phone_number);
}

void Contact::setDarkSecret(std::string dark)
{
    dark_secret = dark;
}

std::string Contact::getDarkSecret() const
{
    return (dark_secret);
}