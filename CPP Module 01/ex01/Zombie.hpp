/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbrettsc <mbrettsc@student.42kocaeli.co    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/22 21:38:11 by mbrettsc          #+#    #+#             */
/*   Updated: 2023/07/22 23:25:26 by mbrettsc         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ZOMBIE_HPP
#define ZOMBIE_HPP

#include <string>

class Zombie {
	private:
		std::string _name;
	public:
		Zombie();
		~Zombie();
		void	setName(std::string name);
		void	announce(void);
};

Zombie* zombieHorde(int N, std::string name);

#endif