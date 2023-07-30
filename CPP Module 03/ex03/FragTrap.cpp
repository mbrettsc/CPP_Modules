/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbrettsc <mbrettsc@student.42kocaeli.co    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/29 22:48:30 by mbrettsc          #+#    #+#             */
/*   Updated: 2023/07/30 01:09:06 by mbrettsc         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "FragTrap.hpp"

FragTrap::FragTrap(): ClapTrap() {
    
}

FragTrap::FragTrap(std::string name): ClapTrap(name) {
    this->setHitPoints(100);
    this->setEnergyPoints(100);
    this->setAttackDamage(30);
    std::cout << "FragTrap constructor called\n";
}

FragTrap::~FragTrap() {
    std::cout << "FragTrap destructor called\n";
}

FragTrap::FragTrap(const FragTrap& copy) {
    *this = copy;
}

FragTrap &FragTrap::operator=(const ClapTrap& copy) {
    this->setName(copy.getName());
    this->setEnergyPoints(copy.getEnergyPoints());
    this->setHitPoints(copy.getHitPoints());
    this->setAttackDamage(copy.getAttackDamage());
    return (*this);
}

void    FragTrap::highFivesGuys() {
    std::cout << "FragTrap " << this->getName() << " want's to high five\n";
}
