/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Weapon.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbrettsc <mbrettsc@student.42kocaeli.co    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/22 23:58:09 by mbrettsc          #+#    #+#             */
/*   Updated: 2023/07/24 02:11:14 by mbrettsc         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Weapon.hpp"

Weapon::Weapon(std::string _type) {
    this->type = _type;
}

Weapon::~Weapon() {}

void    Weapon::setType(std::string _type) {
    this->type = _type;
}

const std::string &Weapon::getType() {
    return (this->type);
}
