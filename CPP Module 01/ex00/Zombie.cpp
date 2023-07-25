/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbrettsc <mbrettsc@student.42kocaeli.co    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/22 20:47:20 by mbrettsc          #+#    #+#             */
/*   Updated: 2023/07/24 02:07:15 by mbrettsc         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"
#include <iostream>

Zombie::Zombie(std::string name) {
    this->_name = name;
    std::cout << "Zombie " << this->_name << " created" << std::endl;
}

Zombie::~Zombie() {
    std::cout << "Zombie " << this->_name << " has been destroyed" << std::endl;
}

void Zombie::announce() {
    std::cout << this->_name << ": BraiiiiiiinnnzzzZ..." << std::endl;
}
