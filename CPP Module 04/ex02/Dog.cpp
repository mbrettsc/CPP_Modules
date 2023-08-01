/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbrettsc <mbrettsc@student.42kocaeli.co    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/31 01:06:56 by mbrettsc          #+#    #+#             */
/*   Updated: 2023/08/01 14:30:16 by mbrettsc         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Dog.hpp"

Dog::Dog() {
    std::cout << "Dog constructor called\n";
    AAnimal::type = "Dog";
    this->brain = new Brain();
}

Dog::Dog(const Dog& copy) {
    std::cout << "Dog copy constructor called\n";
    *this = copy;
}

Dog &Dog::operator=(const Dog& copy) {
    AAnimal::type = copy.type;
    this->brain = copy.brain;
    return (*this);
}

void Dog::makeSound() const {
    std::cout << "woof woof\n";
}

Brain *Dog::getBrain() const {
    return this->brain;
}

Dog::~Dog() {
    std::cout << "Dog destructor called\n";
    delete brain;
}
