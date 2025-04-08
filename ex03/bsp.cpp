/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   bsp.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ayel-mou <ayel-mou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/07 13:47:58 by ayel-mou          #+#    #+#             */
/*   Updated: 2025/04/08 16:56:42 by ayel-mou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "bsp.hpp"

float AreaOfTriangle(Point const a, Point const b, Point const c)
{
	float Area;
	float side1;
	float side2;
	float side3;

	side1 = a.getX().toFloat() * (b.getY().toFloat() - c.getY().toFloat());
	side2 = b.getX().toFloat() * (c.getY().toFloat() - a.getY().toFloat());
	side3 = c.getX().toFloat() * (a.getY().toFloat() - b.getY().toFloat());
	Area = 0.5f * std::abs(side1 + side2 + side3);
	return (Area);
}


bool bsp(Point const a, Point const b, Point const c, Point const point)
{
	float 	AreaABC;	
	float 	AreaPAB;
	float 	AreaPBC;
	float 	AreaPCA;
	
	AreaABC = AreaOfTriangle(a,b,c);
	
	if (!AreaABC)
	{
		std::cout << "Error: These points do not form a triangle!" << std::endl;
		return (false);
	}
	
	AreaPAB = AreaOfTriangle(point, a, b);
	AreaPBC = AreaOfTriangle(point, b, c);
	AreaPCA = AreaOfTriangle(point, c, a);
	
	if (AreaABC != (AreaPAB + AreaPBC + AreaPCA))
		return (false);
	return (true);
}