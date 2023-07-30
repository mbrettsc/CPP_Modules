/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbrettsc <mbrettsc@student.42kocaeli.co    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/29 22:48:15 by mbrettsc          #+#    #+#             */
/*   Updated: 2023/07/30 19:08:59 by mbrettsc         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "DiamondTrap.hpp"

int main() {
	DiamondTrap a("Dia");
	DiamondTrap b("Mond");
	DiamondTrap c(a);

	a.highFivesGuys();
	a.guardGate();
	a.whoAmI();
	a.attack("some super random dude");
	b.whoAmI();
	b.attack("someguy");
	c.whoAmI();
	return (0);
}
