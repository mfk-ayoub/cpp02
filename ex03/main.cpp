/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ayel-mou <ayel-mou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/08 15:26:55 by ayel-mou          #+#    #+#             */
/*   Updated: 2025/04/08 16:54:37 by ayel-mou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Point.hpp"
#include "bsp.hpp"

int main(void)
{
	std::cout << "Point inside triangle" << std::endl;
    Point a1(0, 0);
    Point b1(4, 0);
    Point c1(2, 3);
    Point p1(2, 1);
	
	std::cout << "The coordinates of the point are " << p1 << std::endl;
	
	
	if (bsp(a1,b1,c1,p1))
		std::cout << "This point is on the inside of a triangle" << std::endl;
	else
		std::cout << "This point is on the  outside of a triangle" << std::endl;
	
	std::cout << "Point outside triangle" << std::endl;
	Point a2(0, 0);
	Point b2(4, 0);
	Point c2(2, 3);
	Point p2(5, 5);
	
	std::cout << "The coordinates of the points are " << p2 << std::endl;
	
	if (bsp(a2,b2,c2,p2))
		std::cout << "This point is on the inside of a triangle" << std::endl;
	else
		std::cout << "This point is on the outside of a triangle" << std::endl;
	

	Point a3(0,0);
	Point b3(0,0);	
	Point c3(0,0);
	Point p3(4, 1);
	if (!bsp(a3,b3,c3,p3))
		return (1);
	return (0);
}