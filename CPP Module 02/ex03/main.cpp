/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbrettsc <mbrettsc@student.42kocaeli.co    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/26 11:04:58 by mbrettsc          #+#    #+#             */
/*   Updated: 2023/07/27 20:02:16 by mbrettsc         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Point.hpp"

int main() {
    {
        Point a;
        Point b(15, 0);
        Point c(0, 15);
        Point p(3, 3);
        if (bsp(a, b, c, p))
            std::cout << "Point is in the triangle\n";
        else
            std::cout << "Point is not in the triangle\n";
    }
    {
        Point a;
        Point b(10, 0);
        Point c(0, 10);
        Point p(-11, 7);
        if (bsp(a, b, c, p))
            std::cout << "Point is in the triangle\n";
        else
            std::cout << "Point is not in the triangle\n";
    }
}
