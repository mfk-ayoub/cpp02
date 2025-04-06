/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ayel-mou <ayel-mou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/17 09:03:59 by ayel-mou          #+#    #+#             */
/*   Updated: 2025/04/06 15:35:35 by ayel-mou         ###   ########.fr       */
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


Fixed::Fixed(const  Fixed &other)
	: value(other.value)
{
	std::cout << "Copy constructor called" << std::endl;
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
	
	std::cout << "Copy assignment operator called" << std::endl;
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
	std::cout << "Int constructor called" << std::endl;
	value = (nb << bits); 
	
}

Fixed::Fixed(const float nb) 
{
	std::cout << "Float constructor called" << std::endl;
	value =  roundf(nb * (1 << bits)); 
}

std::ostream& operator<<(std::ostream& print, const Fixed& other)
{
	print <<  other.toFloat();
	return print;
}
