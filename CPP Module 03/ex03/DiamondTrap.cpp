/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   DiamondTrap.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbrettsc <mbrettsc@student.42kocaeli.co    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/29 23:36:42 by mbrettsc          #+#    #+#             */
/*   Updated: 2023/07/30 01:08:14 by mbrettsc         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "DiamondTrap.hpp"

DiamondTrap::DiamondTrap(std::string name): ClapTrap( name ), ScavTrap( name ), FragTrap( name ){
    this->name = name;
    this->ClapTrap::setName(name + "_clap_name");
    
    FragTrap::setHitPoints(100);
    ScavTrap::setEnergyPoints(50);
    FragTrap::setAttackDamage(30);
}

DiamondTrap::DiamondTrap(const DiamondTrap& copy) {
    *this = copy;
}

DiamondTrap &DiamondTrap::operator=(const ClapTrap& copy) {
    this->setName(copy.getName());
    this->setEnergyPoints(copy.getEnergyPoints());
    this->setHitPoints(copy.getHitPoints());
    this->setAttackDamage(copy.getAttackDamage());
    return (*this);
}

DiamondTrap::~DiamondTrap() {
    
}

void DiamondTrap::whoAmI() {
    std::cout << "DiamondTrap " << this->name << " also know as " << ClapTrap::getName() << std::endl;
}
