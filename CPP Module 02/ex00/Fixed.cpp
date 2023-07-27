/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbrettsc <mbrettsc@student.42kocaeli.co    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/25 02:58:32 by mbrettsc          #+#    #+#             */
/*   Updated: 2023/07/26 09:02:45 by mbrettsc         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"

Fixed::Fixed() {
	std::cout << "Default Constructor Called\n";
	this->fixed_value = 0;
}

Fixed::Fixed(const Fixed& copy) {
	std::cout << "Copy Constructor Called\n";
	*this = copy;
}

Fixed::~Fixed() {
	std::cout << "Destructor Called\n";
}

Fixed &Fixed::operator=(Fixed const& fixed) {
	std::cout << "Copy assignment operator called\n";
	if (this != &fixed)
		this->fixed_value = fixed.getRawBits();
	return (*this);
}

int Fixed::getRawBits() const {
	std::cout << "getRawBits member function called\n";
	return (this->fixed_value);
}

void Fixed::setRawBits(int const raw) {
	this->fixed_value = raw;	
}
