/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhonebookUtils.cpp                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbrettsc <mbrettsc@student.42kocaeli.co    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/05 15:09:18 by mbrettsc          #+#    #+#             */
/*   Updated: 2023/07/23 23:36:16 by mbrettsc         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Phonebook.hpp"

void    printHood() {
    std::cout << " ___________________________________________" << std::endl;
	std::cout << "|     Index|First Name| Last Name|  Nickname|" << std::endl;
    std::cout << "|-------------------------------------------|" << std::endl;
}

void    printStr(std::string str) {
    if (str.length() > 10) {
        for (int i = 0; i < 9; i++) {
            std::cout << str[i];
        }
        std::cout << ".";
    }
    else {
        for (int i = 0; i < (10 - (int)str.size()); i++)
            std::cout << " ";
        std::cout << str;
    }
    std::cout << "|";;
}

void    printContacts(Contact _contact[8], int j) {
    std::string str;

    for (int i = 0; i < j; i++) {
        std::cout << "|" << "         " << i + 1 << "|";
        str = _contact[i].getFirstName();
        printStr(str);
        str = _contact[i].getLastName();
        printStr(str);
        str = _contact[i].getNickName();
        printStr(str);
        std::cout << std::endl;
    }
    std::cout << "|___________________________________________|" << std::endl;
}

void    printDetail(Contact _contact[8], int row)
{
    std::cout << "First Name: "<< _contact[row].getFirstName() << std::endl;
    std::cout << "Last Name: "<< _contact[row].getLastName() << std::endl;
    std::cout << "Nick Name: "<< _contact[row].getNickName() << std::endl;
    std::cout << "Phone Number: "<< _contact[row].getNumber() << std::endl;
    std::cout << "Darkest Secret: "<< _contact[row].getSecret() << std::endl;
}
