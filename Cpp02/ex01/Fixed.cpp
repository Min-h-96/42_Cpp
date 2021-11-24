/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: minchoi <minchoi@student.42seoul.kr>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/19 15:48:00 by minchoi           #+#    #+#             */
/*   Updated: 2021/11/23 23:17:06 by minchoi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"

Fixed::Fixed() {
	std::cout << "Default constructor called" << std::endl;
	this->fixed_point = 0;
}

Fixed::Fixed(const Fixed& src) {
	std::cout << "Copy constructor called" << std::endl;
	*this = src;
}

Fixed::Fixed(const int val) {
	std::cout << "Int constructor called" << std::endl;
	this->fixed_point = val << this->fractional_bits;
}

Fixed::Fixed(const float val) {
	std::cout << "Float constructor called" << std::endl;
	this->fixed_point = roundf(val * (1 << this->fractional_bits));
}

Fixed& Fixed::operator=(const Fixed& src) {
	std::cout << "Assignation operator called" << std::endl;
	this->setRawBits(src.fixed_point);
	return *this;
}

Fixed::~Fixed() {
	std::cout << "Destructor called" << std::endl;
}

int	Fixed::getRawBits(void) const {
	std::cout << "getRawBits member function called" << std::endl;
	return (this->fixed_point);
}

void	Fixed::setRawBits(const int raw) {
	this->fixed_point = raw;
}

float	Fixed::toFloat(void) const {
	return ((float)this->fixed_point / (1 << this->fractional_bits));
}

int	Fixed::toInt(void) const {
	return (this->fixed_point >> this->fractional_bits);
}

std::ostream& operator<<(std::ostream &out, const Fixed &fix) {
	out << fix.toFloat();
	return out;
}