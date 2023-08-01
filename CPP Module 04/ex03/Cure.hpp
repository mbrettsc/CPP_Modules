/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cure.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbrettsc <mbrettsc@student.42kocaeli.co    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/31 23:56:54 by mbrettsc          #+#    #+#             */
/*   Updated: 2023/08/01 08:21:29 by mbrettsc         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CURE_HPP
#define CURE_HPP

#include "AMateria.hpp"

class Cure: public AMateria {
    public:
        Cure();
        Cure(const Cure& copy);
        Cure &operator=(const Cure& copy);
        std::string const & getType() const;
        Cure *clone() const;
        void use(ICharacter& target);
        ~Cure();
};

#endif
