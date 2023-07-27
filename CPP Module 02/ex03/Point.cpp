/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Point.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbrettsc <mbrettsc@student.42kocaeli.co    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/26 11:05:39 by mbrettsc          #+#    #+#             */
/*   Updated: 2023/07/27 19:18:58 by mbrettsc         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Point.hpp"

Point::Point() : x(0), y(0){
    
}

Point::Point(const float x, const float y) : x(x), y(y){
    
}

Point::Point(const Point& point): x(point.x), y(point.y) {
}


Point::~Point() {

}

Fixed const Point::getX() const{
    return (this->x);
}

Fixed const Point::getY() const{
    return (this->y);
}

Point	&Point::operator=(Point const& point) {
    if(this != &point)
    {
        (Fixed)this->x = point.getX();
    	(Fixed)this->y = point.getY();
    }
	return *this;
}
