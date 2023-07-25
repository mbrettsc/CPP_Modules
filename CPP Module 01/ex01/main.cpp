/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbrettsc <mbrettsc@student.42kocaeli.co    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/22 21:38:15 by mbrettsc          #+#    #+#             */
/*   Updated: 2023/07/22 23:36:24 by mbrettsc         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

int main()
{
    int N;
    
    N = 5;
    Zombie *zomb = zombieHorde(N, "Foo");
    for (int i = 0; i < N; i++) {
        zomb[i].announce();
    }
    delete[] zomb;
}