/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanA.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbrettsc <mbrettsc@student.42kocaeli.co    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/22 23:58:16 by mbrettsc          #+#    #+#             */
/*   Updated: 2023/07/23 02:16:50 by mbrettsc         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "HumanA.hpp"
#include <iostream>

HumanA::HumanA(std::string _name, Weapon &_weapon) : name(_name), weapon(_weapon) {}

HumanA::~HumanA() {}

void    HumanA::attack() {
    std::cout << this->name << " attacks with their " << this->weapon.getType() << std::endl;
}
