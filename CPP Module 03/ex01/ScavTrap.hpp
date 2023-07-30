/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbrettsc <mbrettsc@student.42kocaeli.co    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/28 00:33:00 by mbrettsc          #+#    #+#             */
/*   Updated: 2023/07/30 00:54:29 by mbrettsc         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SCAVTRAP_HPP
#define SCAVTRAP_HPP

#include "ClapTrap.hpp"

class ScavTrap: public ClapTrap {
    private:
        ScavTrap();
    public:
        ScavTrap(std::string name);
        ScavTrap(const ScavTrap& copy);
        ScavTrap &operator=(const ClapTrap& copy);
        void attack(const std::string& target);
        ~ScavTrap();
        void guardGate();
};

#endif
