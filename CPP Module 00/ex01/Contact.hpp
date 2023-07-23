/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contact.hpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbrettsc <mbrettsc@student.42kocaeli.co    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/05 12:25:30 by mbrettsc          #+#    #+#             */
/*   Updated: 2023/07/05 13:48:27 by mbrettsc         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# ifndef CONTACT_HPP

# define CONTACT_HPP

#include <iostream>
#include <string>

class Contact {
    private:
        std::string firstName;
        std::string lastName;
        std::string nickName;
        std::string number;
        std::string secret;
    public:
        Contact();
        ~Contact();
        std::string getFirstName() const;
        std::string getLastName() const;
        std::string getNickName() const;
        std::string getNumber() const;
        std::string getSecret() const;
        void        setFirstName(std::string str);
        void        setLastName(std::string str);
        void        setNickName(std::string str);
        void        setNumber(std::string str);
        void        setSecret(std::string str);
};

#endif

