/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbrettsc <mbrettsc@student.42kocaeli.co    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/29 22:48:22 by mbrettsc          #+#    #+#             */
/*   Updated: 2023/07/30 01:01:05 by mbrettsc         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FRAGTRAP_HPP
#define FRAGTRAP_HPP

#include "ClapTrap.hpp"

class FragTrap : public ClapTrap {
    private:
        FragTrap();
    public:
        FragTrap(std::string name);
        FragTrap(const FragTrap& copy);
        FragTrap &operator=(const ClapTrap& copy);
        ~FragTrap();
        void highFivesGuys(void);
};

#endif
