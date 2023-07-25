/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanB.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbrettsc <mbrettsc@student.42kocaeli.co    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/22 23:58:12 by mbrettsc          #+#    #+#             */
/*   Updated: 2023/07/24 02:14:00 by mbrettsc         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "HumanB.hpp"
#include <iostream>

HumanB::HumanB(std::string _name) : name(_name), weapon(NULL) {}

HumanB::~HumanB() {}

void    HumanB::setWeapon(Weapon &weapon) {
    this->weapon = &weapon;
}

void    HumanB::attack() {
    std::cout << this->name << " attacks with their " << this->weapon->getType() << std::endl;
}