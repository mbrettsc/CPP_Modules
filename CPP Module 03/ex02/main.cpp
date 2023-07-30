/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbrettsc <mbrettsc@student.42kocaeli.co    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/29 22:48:15 by mbrettsc          #+#    #+#             */
/*   Updated: 2023/07/30 01:29:06 by mbrettsc         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "FragTrap.hpp"

int main() {
	{
		FragTrap e("Fraggy");
		FragTrap f("Chadd");

		e.highFivesGuys();
		e.attack("some random dude");
		e.takeDamage(101);
		e.takeDamage(1);
		e.attack("some random dude");
		f.highFivesGuys();
	}
	return (0);
}