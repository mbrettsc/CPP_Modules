/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbrettsc <mbrettsc@student.42kocaeli.co    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/23 04:46:04 by mbrettsc          #+#    #+#             */
/*   Updated: 2023/07/24 02:35:34 by mbrettsc         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Harl.hpp"
#include <iostream>

int main(int ac, char **av)
{
    if (ac != 2)
        return (std::cout << "This program accept only 2 arguments!" << std::endl, -1);
    Harl harl;
    harl.complain(av[1]);
}
