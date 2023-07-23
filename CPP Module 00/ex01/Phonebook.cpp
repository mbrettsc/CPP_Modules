/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Phonebook.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbrettsc <mbrettsc@student.42kocaeli.co    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/05 13:51:15 by mbrettsc          #+#    #+#             */
/*   Updated: 2023/07/23 23:41:08 by mbrettsc         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Phonebook.hpp"

Phonebook::Phonebook() {
	this->index = 0;
	this->flag = 0;
	std::cout << "Welcome to Phonebook!" << std::endl;
	std::cout << "You can use: ADD, SEARCH, and EXIT commands!" << std::endl;
}

Phonebook::~Phonebook () {
	std::cout << "Goodbye!" << std::endl;
}

void	get_input(std::string &str, std::string message) {
	do {
		std::getline(std::cin, str);
		if (str.empty()) {
			std::cout << "Input Should not be empty" << std::endl;
			std::cout << message;
		}
	} while (str.empty());
}

void    Phonebook::add() {
	std::string str;

	if (this->index == 8) {
		this->index = 0;
		this->flag = 1;
	}
	std::cout << "Please enter a first name: ";
	get_input(str, "Please enter a first name: ");
	this->_contact[this->index].setFirstName(str);
	std::cout << "Please enter a last name: ";
	get_input(str, "Please enter a last name: ");
	this->_contact[this->index].setLastName(str);
	std::cout << "Please enter a nick name: ";
	get_input(str, "Please enter a nick name: ");
	this->_contact[this->index].setNickName(str);
	std::cout << "Please enter a phone number: ";
	get_input(str, "Please enter a phone number: ");
	this->_contact[this->index].setNumber(str);
	std::cout << "Please enter a darkest secret: ";
	get_input(str, "Please enter a darkest secret: ");
	this->_contact[this->index].setSecret(str);
	std::cout << "Contact added!" << std::endl;
	this->index++;
}

void    Phonebook::search() {
	int j;
	int row;
	int flag = 0;

	j = this->index;
	if (!this->index) {
		std::cout << "You can't search unless you have contact" << std::endl;
		return ;
	}
	if (this->flag == 1)
		j = 8;
	printHood();
	printContacts(this->_contact, j);
	do {
		std::cout << "Select row: ";
		std::cin >> row;
		if ((row < 9 && row > 0) && ((row <= this->index && this->flag == 0) || this->flag == 1)) {
			printDetail(this->_contact, row - 1);
			flag = 1;
		}
		else
			std::cout << "Error: Invalid row" << std::endl;	
		std::cin.clear();
		fflush(stdin);
	} while (flag != 1);
}
