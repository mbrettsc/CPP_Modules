/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbrettsc <mbrettsc@student.42kocaeli.co    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/22 20:47:06 by mbrettsc          #+#    #+#             */
/*   Updated: 2023/07/22 21:38:46 by mbrettsc         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

int main()
{
	Zombie x("Foo");
	Zombie y("Boo");
	Zombie *z;
	x.announce();
	y.announce();
	z = newZombie("Zoo");
	z->announce();
	delete (z);
	randomChump("Random Zomb");
}
