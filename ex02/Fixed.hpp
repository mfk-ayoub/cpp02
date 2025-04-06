/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ayel-mou <ayel-mou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/17 09:00:49 by ayel-mou          #+#    #+#             */
/*   Updated: 2025/04/06 18:59:21 by ayel-mou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <cmath>
class Fixed
{
	
	private:
		int				  value;
		static const int  bits  = 8;
	public:
		Fixed();
		~Fixed();
		Fixed(const int nb);
		Fixed(const float nb);
		Fixed(const Fixed &other); 
		Fixed& operator=(const Fixed &other);
		int getRawBits( void ) const;
		void setRawBits( int const raw );
		float toFloat( void ) const;
		int toInt( void ) const;
		bool operator==(const Fixed& other) const;
		bool operator !=(const Fixed& other) const;
		bool operator >= (const Fixed & other) const;
		bool operator <= (const Fixed & other) const;
		bool operator > (const Fixed & other) const;
		bool operator < (const Fixed & other) const;
		Fixed operator+ (const Fixed & other);
		Fixed operator- (const Fixed & other);
		Fixed operator* (const Fixed & other);
		Fixed operator/ (const Fixed & other);
		Fixed& operator ++(void);
		Fixed& operator --(void);
		Fixed operator++(int);
		Fixed operator --(int);
		static Fixed& min(Fixed &one, Fixed &two);
		static  const Fixed& min(const Fixed &one, const Fixed &two);
		static Fixed& max(Fixed &one, Fixed &two);
		static  const Fixed& max(const Fixed &one, const Fixed &two);

		
};

std::ostream& operator<<(std::ostream& print, const Fixed& other);
