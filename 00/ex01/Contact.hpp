/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contact.hpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ayassir <ayassir@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/11 12:11:34 by ayassir           #+#    #+#             */
/*   Updated: 2022/12/12 18:44:26 by ayassir          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CONTACT_HPP
# define CONTACT_HPP

# include <iostream>

class Contact
{
    private :
        std::string first_name;
        std::string last_name;
        std::string nickname;
        std::string phone_number;
        std::string dark_secret;
    public :
        void setFirstName(std::string first);
        std::string getFirstName() const;
        void setLastName(std::string last);
        std::string getLastName() const;
        void setnickName(std::string nick);
        std::string getnickName() const;
        void setPhoneNumber(std::string phone);
        std::string getPhoneNumber() const;
        void setDarkSecret(std::string dark);
        std::string getDarkSecret() const;
        int     finished;
        
};

#endif