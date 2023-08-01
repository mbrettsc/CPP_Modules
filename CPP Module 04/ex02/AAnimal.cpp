/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AAnimal.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbrettsc <mbrettsc@student.42kocaeli.co    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/31 00:32:03 by mbrettsc          #+#    #+#             */
/*   Updated: 2023/08/01 14:28:51 by mbrettsc         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "AAnimal.hpp"

AAnimal::AAnimal() {
    type = "Animal";
    std::cout << "Animal constructor called\n";
}

AAnimal::AAnimal(std::string type): type(type) {
    std::cout << "Animal constructor called\n";
}

AAnimal::AAnimal(const AAnimal& copy) {
    *this = copy;
    std::cout << "Animal copy constructor called\n";
}

AAnimal &AAnimal::operator=(const AAnimal& copy) {
    this->type = copy.type;
    return (*this);
}

AAnimal::~AAnimal() {
    std::cout << "Animal destructor called\n";
}

std::string AAnimal::getType() const {
    return (type);
}

void AAnimal::setType(std::string type) {
    this->type = type;
}

void AAnimal::makeSound() const {
    std::cout << "regular animal sound\n";
}