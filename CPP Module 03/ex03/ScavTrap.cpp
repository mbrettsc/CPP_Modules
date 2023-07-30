/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbrettsc <mbrettsc@student.42kocaeli.co    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/29 22:48:52 by mbrettsc          #+#    #+#             */
/*   Updated: 2023/07/30 00:59:55 by mbrettsc         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScavTrap.hpp"

ScavTrap::ScavTrap(): ClapTrap() {
    
}

ScavTrap::ScavTrap(std::string _name): ClapTrap(_name) {
    this->setHitPoints(100);
    this->setEnergyPoints(50);
    this->setAttackDamage(20);
    std::cout << "ScavTrap costructor called\n";
}

ScavTrap::~ScavTrap() {
    std::cout << "ScavTrap destructor called\n";
}

ScavTrap::ScavTrap(const ScavTrap& copy) {
    *this = copy;
}

ScavTrap &ScavTrap::operator=(const ClapTrap& copy) {
    this->setName(copy.getName());
    this->setEnergyPoints(copy.getEnergyPoints());
    this->setHitPoints(copy.getHitPoints());
    this->setAttackDamage(copy.getAttackDamage());
    return (*this);
}

void ScavTrap::attack(const std::string& target) {
    if (this->getHitPoints() <= 0)
        return ;
    if (this->getEnergyPoints() <= 0) {
        std::cout << "ScavTrap " << this->getName() << " does not have any energy points to attack\n";
        return ;
    }
    std::cout << "ScavTrap " << this->getName() << " attacks " << target << ", causing " << this->getAttackDamage() << " points of damage!\n";
    this->setEnergyPoints(this->getEnergyPoints() - 1);
}

void ScavTrap::guardGate() {
    std::cout << "ScavTrap " << this->getName() << " is now Gate Keeper Mode\n";
}
