/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongCat.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbrettsc <mbrettsc@student.42kocaeli.co    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/31 01:44:31 by mbrettsc          #+#    #+#             */
/*   Updated: 2023/07/31 01:58:12 by mbrettsc         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "WrongCat.hpp"

WrongCat::WrongCat() {
    std::cout << "WrongCat constructor called\n";
    WrongAnimal::type = "WrongCat";
}

WrongCat::WrongCat(const WrongCat& copy) {
    std::cout << "WrongCat copy constructor called\n";
    *this = copy;
}

WrongCat &WrongCat::operator=(const WrongCat& copy) {
    WrongAnimal::type = copy.type;
    return (*this);
}

void WrongCat::makeSound() const {
    std::cout << "meow meow\n";
}

WrongCat::~WrongCat() {
    std::cout << "WrongCat destructor called\n";
}
