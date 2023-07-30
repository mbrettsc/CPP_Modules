/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   DiamondTrap.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbrettsc <mbrettsc@student.42kocaeli.co    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/29 23:50:18 by mbrettsc          #+#    #+#             */
/*   Updated: 2023/07/30 00:56:50 by mbrettsc         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef DIAMONDTRAP_HPP
#define DIAMONDTRAP_HPP

#include "FragTrap.hpp"
#include "ScavTrap.hpp"


class DiamondTrap: public ScavTrap, public FragTrap {
    private:
        std::string name;
    public:
        DiamondTrap(std::string name);
        DiamondTrap(const DiamondTrap& copy);
        DiamondTrap &operator=(const ClapTrap& copy);
        ~DiamondTrap();
        void whoAmI();
};

#endif
