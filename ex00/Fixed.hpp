/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ayel-mou <ayel-mou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/17 09:00:49 by ayel-mou          #+#    #+#             */
/*   Updated: 2025/03/22 01:30:00 by ayel-mou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>

class Fixed
{
	
	private:
		int value;
		static const int  bits  = 8;
	public:
		Fixed();
		~Fixed();
		Fixed(const Fixed &other); 
		Fixed& operator=(const Fixed &other); 
		int getRawBits( void ) const;
		void setRawBits( int const raw );
};
