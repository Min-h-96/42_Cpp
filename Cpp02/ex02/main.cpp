/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: minchoi <minchoi@student.42seoul.kr>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/15 16:02:31 by minchoi           #+#    #+#             */
/*   Updated: 2022/02/12 14:10:43 by minchoi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"

int main( void ) {
	Fixed a;
	Fixed const b( Fixed( 5.05f ) * Fixed( 2 ) );

	std::cout << a << std::endl;
	std::cout << ++a << std::endl;
	std::cout << a << std::endl;
	std::cout << a++ << std::endl;
	std::cout << a << std::endl;

	std::cout << b << std::endl;
	
	std::cout << Fixed::max( a, b ) << std::endl;
	std::cout << Fixed::min( a, b ) << std::endl;

	std::cout << std::endl;
	{
		std::cout << "More Test" << std::endl;
		Fixed x(1);
		Fixed y(2);
		Fixed z(3);

		std::cout << x + y << std::endl;
		std::cout << y - x << std::endl;
		std::cout << z / y << std::endl;

		if (y > x)
			std::cout << "y > x is true" << std::endl;
		if (x < y)
			std::cout << "x < y is true" << std::endl;
		if (y >= x)
			std::cout << "y >= x is true" << std::endl;
		if (x <= y)
			std::cout << "x <= y is true" << std::endl;
		if (x == y)
			std::cout << "x == y is true" << std::endl;
		else
			std::cout << "x == y is false" << std::endl;
		if (x != y)
			std::cout << "x != y is true" << std::endl;
		else
			std::cout << "x != y is false" << std::endl;
	}

	return 0;
}