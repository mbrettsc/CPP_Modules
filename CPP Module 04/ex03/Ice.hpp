/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Ice.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbrettsc <mbrettsc@student.42kocaeli.co    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/31 23:57:00 by mbrettsc          #+#    #+#             */
/*   Updated: 2023/08/01 08:21:56 by mbrettsc         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ICE_HPP
#define ICE_HPP

#include "AMateria.hpp"

class Ice: public AMateria {
    public:
        Ice();
        Ice(const Ice& copy);
        Ice &operator=(const Ice& copy);
        std::string const & getType() const;
        Ice *clone() const;
        void use(ICharacter& target);
        ~Ice();
};

#endif
