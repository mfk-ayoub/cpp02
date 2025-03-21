/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ayel-mou <ayel-mou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/17 09:03:59 by ayel-mou          #+#    #+#             */
/*   Updated: 2025/03/21 10:15:10 by ayel-mou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"

Fixed::~Fixed()
{
	std::cout << "Destructor called"  << std::endl;
}

Fixed::Fixed() : value(0) 
{
	std::cout << "Default constructor called" << std::endl;
	
}

void Fixed::setRawBits( int const raw )
{
	std::cout << "getRawBits member function called" << std::endl;
}

int  Fixed::getRawBits( void ) const
{
	
}