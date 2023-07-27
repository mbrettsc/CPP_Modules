/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   bsp.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbrettsc <mbrettsc@student.42kocaeli.co    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/26 11:05:33 by mbrettsc          #+#    #+#             */
/*   Updated: 2023/07/27 23:02:47 by mbrettsc         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Point.hpp"

float   getArea(Point a, Point b, Point c) {
    float ret;
    
    ret = (((a.getX().toFloat() * b.getY().toFloat()) + (b.getX().toFloat() * c.getY().toFloat()) +
        (c.getX().toFloat() * a.getY().toFloat())) - ((a.getY().toFloat() * b.getX().toFloat()) +
        (b.getY().toFloat() * c.getX().toFloat()) + (c.getY().toFloat() * a.getX().toFloat()))) / 2;
    if (ret < 0)
        return (ret *= -1);
    return (ret);
}

bool bsp( Point const a, Point const b, Point const c, Point const point) {
    float d1 = getArea(a, b, c);
    float d2 = getArea(point, a, b);
    float d3 = getArea(point, a, c);
    float d4 = getArea(point, b, c);

    if (d1 == 0)
        return (false);
    if ((d2 + d3 + d4) == d1)
        return (true);
    return (false);
}
