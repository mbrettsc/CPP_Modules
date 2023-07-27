/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbrettsc <mbrettsc@student.42kocaeli.co    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/26 08:44:48 by mbrettsc          #+#    #+#             */
/*   Updated: 2023/07/26 09:10:31 by mbrettsc         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FIXED_HPP
#define FIXED_HPP

#include <iostream>

class Fixed {
	private:
		int	fixed_value;
		static const int fractional_bits = 8;
	public:
		Fixed();
		Fixed(const Fixed& copy);
		Fixed(const int fp_value);
		Fixed(const float fp_value);
		Fixed &operator=(Fixed const& fixed); 
		~Fixed();
		int		getRawBits(void) const;
		void	setRawBits(int const raw);		
		float	toFloat(void) const;
		int		toInt(void) const;
};

std::ostream &operator<<(std::ostream &o, const Fixed& fixed);

#endif
