/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ayel-mou <ayel-mou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/17 09:03:59 by ayel-mou          #+#    #+#             */
/*   Updated: 2025/04/07 14:32:50 by ayel-mou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"

Fixed::~Fixed()
{
}

Fixed::Fixed() : value(0)
{
	
}


Fixed::Fixed(const  Fixed &other)
	: value(other.value)
{
} 

void Fixed::setRawBits( int const raw )
{
	this->value =  raw;
	
}

int  Fixed::getRawBits( void ) const
{
	return (value);	
}

Fixed& Fixed::operator=(const Fixed &other)
{
	
	if (this != &other)
	{
		value = other.value;
	}
	return (*this);
}

int Fixed::toInt( void ) const
{
	return (value >> bits);
}

float Fixed::toFloat( void ) const
{
	return ((float)value / (1 << bits));
}

Fixed::Fixed(const int nb)
{
	value = (nb << bits); 
	
}

Fixed::Fixed(const float nb) 
{
	value =  roundf(nb * (1 << bits)); 
}

std::ostream& operator<<(std::ostream& print, const Fixed& other)
{
	print <<  other.toFloat();
	return print;
}
