/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Point.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ayel-mou <ayel-mou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/07 13:31:08 by ayel-mou          #+#    #+#             */
/*   Updated: 2025/04/08 16:46:49 by ayel-mou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Point.hpp"

Point::Point()
    : x(0), y(0)
{
	
}

Point::Point(const Fixed _x,const Fixed _y)
	: x(_x) , y(_y) 
{
	
}

Point::Point(const Point& other)
	: x(other.x) , y(other.y)
{
	
}

Fixed Point::getX() const
{ 
	return (x);

}
Fixed Point::getY() const
{ 
	return (y);
}



std::ostream& operator<<(std::ostream& print, const Point& other)
{
	print << "x  = "  << other.getX().toFloat()  << " y  = "  << other.getY().toFloat();
	return print;
}



Point::~Point()
{
	
}