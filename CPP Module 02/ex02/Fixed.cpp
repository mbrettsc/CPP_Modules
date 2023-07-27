/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbrettsc <mbrettsc@student.42kocaeli.co    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/26 09:12:24 by mbrettsc          #+#    #+#             */
/*   Updated: 2023/07/26 18:32:51 by mbrettsc         ###   ########.fr       */
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

Fixed::Fixed(const int fp_value) {
	std::cout << "Int constructor called\n";
	this->fixed_value = (fp_value * (1 << this->fractional_bits));
}

Fixed::Fixed(const float fp_value) {
	std::cout << "Float constructor called\n";
	this->fixed_value = roundf(fp_value * (1 << this->fractional_bits));
}

Fixed::~Fixed() {
	std::cout << "Destructor Called\n";
}

Fixed	&Fixed::operator=(Fixed const& fixed) {
	std::cout << "Copy assignment operator called\n";
	if (this != &fixed)
		this->fixed_value = fixed.fixed_value;
	return (*this);
}

bool	Fixed::operator>(Fixed const& fixed) const{
	return (this->fixed_value > fixed.getRawBits());
}

bool	Fixed::operator>=(Fixed const& fixed) const{
	return (this->fixed_value >= fixed.getRawBits());
}

bool	Fixed::operator<(Fixed const& fixed) const{
	return (this->fixed_value < fixed.getRawBits());
}

bool	Fixed::operator<=(Fixed const& fixed) const{
	return (this->fixed_value <= fixed.getRawBits());
}

bool	Fixed::operator==(Fixed const& fixed) const{
	return (this->fixed_value == fixed.getRawBits());
}

bool	Fixed::operator!=(Fixed const& fixed) const{
	return (this->fixed_value != fixed.getRawBits());
}

Fixed	Fixed::operator+(Fixed const& fixed) {
	return (Fixed(this->toFloat() + fixed.toFloat()));
}

Fixed	Fixed::operator-(Fixed const& fixed) {
	return (Fixed(this->toFloat() - fixed.toFloat()));
}

Fixed	Fixed::operator*(Fixed const& fixed) {
	return (Fixed(this->toFloat() * fixed.toFloat()));
}

Fixed	Fixed::operator/(Fixed const& fixed) {
	return (Fixed(this->toFloat() / fixed.toFloat()));
}

Fixed	&Fixed::operator++() {
	this->fixed_value++;
	return (*this);
}

Fixed	Fixed::operator++(int) {
	Fixed	ret(this->toFloat());
	this->fixed_value++;
	return (ret);
}

Fixed	&Fixed::operator--() {
	this->fixed_value--;
	return (*this);
}

Fixed	Fixed::operator--(int) {
	Fixed	ret(this->toFloat());
	this->fixed_value--;
	return (ret);
}

int	Fixed::getRawBits() const {
	std::cout << "getRawBits member function called\n";
	return (this->fixed_value);
}

void	Fixed::setRawBits(int const raw) {
	this->fixed_value = raw;	
}

float	Fixed::toFloat(void) const {
	return ((float)this->fixed_value / (float)(1 << this->fractional_bits));
}

int	Fixed::toInt(void) const {
	return (this->fixed_value / (1 << this->fractional_bits));
}

Fixed	&Fixed::max(Fixed& a, Fixed& b) {
	if (a.getRawBits() >= b.getRawBits())
		return (a);
	return (b);
}

Fixed	&Fixed::min(Fixed& a, Fixed& b) {
	if (a.getRawBits() < b.getRawBits())
		return (a);
	return (b);
}

const Fixed	&Fixed::max(const Fixed&a, const Fixed& b) {
	if (a.getRawBits() >= b.getRawBits())
		return (a);
	return (b);
}

const Fixed	&Fixed::min(const Fixed&a, const Fixed& b) {
	if (a.getRawBits() < b.getRawBits())
		return (a);
	return (b);
}


std::ostream &operator<<(std::ostream &o, const Fixed& fixed) {
	o << fixed.toFloat();
	return (o);
}
