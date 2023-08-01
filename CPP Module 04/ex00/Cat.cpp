/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbrettsc <mbrettsc@student.42kocaeli.co    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/31 01:27:16 by mbrettsc          #+#    #+#             */
/*   Updated: 2023/07/31 01:37:37 by mbrettsc         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cat.hpp"

Cat::Cat() {
    std::cout << "Cat constructor called\n";
    Animal::type = "Cat";
}

Cat::Cat(const Cat& copy) {
    std::cout << "Cat copy constructor called\n";
    *this = copy;
}

Cat &Cat::operator=(const Cat& copy) {
    Animal::type = copy.type;
    return (*this);
}

void Cat::makeSound() const {
    std::cout << "meow meow\n";
}

Cat::~Cat() {
    std::cout << "Cat destructor called\n";
}
