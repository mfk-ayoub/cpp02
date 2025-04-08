/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Point.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ayel-mou <ayel-mou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/07 13:19:23 by ayel-mou          #+#    #+#             */
/*   Updated: 2025/04/08 16:13:35 by ayel-mou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef POINT_HPP
#define POINT_HPP

#include "Fixed.hpp"

class Point
{
	private:
		const Fixed x;
		const Fixed y;
	public:
		Point();
		Point(const Fixed _x,const Fixed _y);
		Point(const Point& other);
		Fixed getX() const;
		Fixed getY() const;
		Point& operator=(const Point& other);  
		~Point();
		
};
std::ostream& operator<<(std::ostream& print, const Point& other);
#endif 
