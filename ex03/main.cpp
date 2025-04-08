/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ayel-mou <ayel-mou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/08 15:26:55 by ayel-mou          #+#    #+#             */
/*   Updated: 2025/04/08 15:43:41 by ayel-mou         ###   ########.fr       */
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
	
	if (bsp(a1,b1,c1,p1))
		std::cout << "This point is on the inside of a triangle" << std::endl;
	else
		std::cout << "This point is on the  outside of a triangle" << std::endl;
	
	std::cout << "Point outside triangle" << std::endl;
	Point a2(0, 0);
	Point b2(4, 0);
	Point c2(2, 3);
	Point p2(5, 5);
	
	if (bsp(a2,b2,c2,p2))
		std::cout << "This point is on the inside of a triangle" << std::endl;
	else
		std::cout << "This point is on the outside of a triangle" << std::endl;
	
}