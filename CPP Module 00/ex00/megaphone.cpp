/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   megaphone.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbrettsc <mbrettsc@student.42kocaeli.co    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/03 14:26:17 by mbrettsc          #+#    #+#             */
/*   Updated: 2023/07/05 12:09:53 by mbrettsc         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>

int main(int ac, char **av)
{
    int j;

    if (ac < 2)
        std::cout << "* LOUD AND UNBEARABLE FEEDBACK NOISE *" << std::endl;
    else
    {        
        for (int i = 1; i < ac; i++)
        {
            j = -1;
            while (av[i][++j])
                std::cout << (char)std::toupper(av[i][j]);
        }
        std::cout << std::endl;
    }
}
