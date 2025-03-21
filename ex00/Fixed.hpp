/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ayel-mou <ayel-mou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/17 09:00:49 by ayel-mou          #+#    #+#             */
/*   Updated: 2025/03/21 10:14:14 by ayel-mou         ###   ########.fr       */
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
		int getRawBits( void ) const;
		void setRawBits( int const raw );
};