/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ayel-mou <ayel-mou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/22 01:48:56 by ayel-mou          #+#    #+#             */
/*   Updated: 2025/04/06 19:01:24 by ayel-mou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"

int main( void )
{
	
	Fixed A(10.02f);
	Fixed B(10.03f);

	std::cout << (A >= B ? "true" : "false") << std::endl;
	Fixed C;

	C = A + B;
	std::cout << "C == " << C << std::endl;
	
	Fixed D;
	D = A - B;
	std::cout << "D == " << D << std::endl;

	std::cout << "Pre-increment D == " << (++D) << std::endl;
	std::cout << "post-increment D == " << (D++) << std::endl;


	Fixed const F( Fixed( 5.05f ) * Fixed( 2 ) );
	std::cout << "F == " << F << std::endl;
	std::cout << "the smallest one is == " << Fixed::min(A,F) << std::endl;
	return 0;
}

