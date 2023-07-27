/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbrettsc <mbrettsc@student.42kocaeli.co    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/25 02:58:35 by mbrettsc          #+#    #+#             */
/*   Updated: 2023/07/26 03:06:37 by mbrettsc         ###   ########.fr       */
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
		Fixed &operator=(Fixed const& fixed); 
		~Fixed();
		int getRawBits(void) const;
		void setRawBits(int const raw);		
};

#endif
