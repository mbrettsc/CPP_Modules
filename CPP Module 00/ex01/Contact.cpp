/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contact.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbrettsc <mbrettsc@student.42kocaeli.co    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/05 12:51:08 by mbrettsc          #+#    #+#             */
/*   Updated: 2023/07/23 21:48:04 by mbrettsc         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Contact.hpp"

std::string Contact::getFirstName() const {
	return (this->firstName);
}

std::string Contact::getLastName() const {
	return (this->lastName);
}

std::string Contact::getNickName() const {
	return (this->nickName);
}

std::string Contact::getNumber() const {
	return (this->number);
}

std::string Contact::getSecret() const {
	return (this->secret);
}

void		Contact::setFirstName(std::string str) {
	this->firstName = str;
}

void		Contact::setLastName(std::string str) {
	this->lastName = str;
}

void		Contact::setNickName(std::string str) {
	this->nickName = str;
}

void		Contact::setNumber(std::string str) {
	this->number = str;
}

void		Contact::setSecret(std::string str) {
	this->secret = str;
}

Contact::Contact() {}

Contact::~Contact() {}
