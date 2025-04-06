/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ayel-mou <ayel-mou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/17 09:03:59 by ayel-mou          #+#    #+#             */
/*   Updated: 2025/04/06 19:05:23 by ayel-mou         ###   ########.fr       */
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
	return value >> bits;
}

float Fixed::toFloat( void ) const
{
	return static_cast<float>(value) / (1 << bits);
}

Fixed::Fixed(const int nb)
{
	value = nb << bits; 
	
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

bool Fixed::operator==(const Fixed& other) const
{
	return toFloat() == other.toFloat();
}


bool Fixed::operator !=(const Fixed& other) const
{
	return toFloat() != other.toFloat();

}

bool Fixed::operator >= (const Fixed & other) const
{
	return toFloat() >= other.toFloat();
}

bool Fixed::operator <= (const Fixed & other) const
{
	return toFloat() <= other.toFloat();

}

bool Fixed::operator > (const Fixed & other) const
{
	return toFloat() > other.toFloat();

}

bool Fixed::operator < (const Fixed & other) const
{
	return toFloat() < other.toFloat();

}

Fixed Fixed::operator+ (const Fixed & other)

{
	return Fixed(other.toFloat() + toFloat());
}

Fixed Fixed::operator- (const Fixed & other)
{
	return Fixed(toFloat() - other.toFloat());
}

Fixed Fixed::operator* (const Fixed & other)
{
	return Fixed(other.toFloat() * toFloat());	
}

Fixed Fixed::operator/ (const Fixed & other)
{
	return Fixed(other.toFloat() / toFloat());
}

Fixed& Fixed::operator ++(void)
{
	value++;
	return (*this);
}


Fixed Fixed::operator++(int)
{
	Fixed  temp = *this;
	value++;
	return temp;
}

Fixed& Fixed::operator --(void)
{
	value--;
	return (*this);
}

Fixed Fixed::operator--(int)
{
	Fixed  temp = *this;
	value--;
	return temp;
}

Fixed& Fixed::min(Fixed &one, Fixed &two)
{
    if (one > two)
        return two;
    else
   
	return one;
}
const Fixed& Fixed::min(const Fixed &one, const Fixed &two)
{
    if (one > two)
        return two;
    else
		return one;
}

Fixed& Fixed::max(Fixed &one, Fixed &two)
{
    if (one < two)
        return two;
    else
        return one;
}

const Fixed& Fixed::max(const Fixed &one, const Fixed &two)
{
    if (one < two)
        return two;
    else
   
	return one;
}