/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: minchoi <minchoi@student.42seoul.kr>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/19 15:48:00 by minchoi           #+#    #+#             */
/*   Updated: 2021/11/24 22:56:01 by minchoi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"

Fixed::Fixed() {
	this->fixed_point = 0;
}

Fixed::Fixed(const Fixed& src) {
	*this = src;
}

Fixed::Fixed(const int val) {
	this->fixed_point = val << this->fractional_bits;
}

Fixed::Fixed(const float val) {
	this->fixed_point = roundf(val * (1 << this->fractional_bits));
}

Fixed& Fixed::operator=(const Fixed& src) {
	this->setRawBits(src.fixed_point);
	return (*this);
}

Fixed::~Fixed() {
}

int	Fixed::getRawBits(void) const {
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
	return (out);
}

bool	Fixed::operator>(const Fixed& fix) const {
	if (this->fixed_point > fix.getRawBits())
		return (true);
	return (false);
}

bool	Fixed::operator<(const Fixed& fix) const {
	if (this->fixed_point < fix.getRawBits())
		return (true);
	return (false);
}

bool	Fixed::operator>=(const Fixed& fix) const {
	if (this->fixed_point >= fix.getRawBits())
		return (true);
	return (false);
}

bool	Fixed::operator<=(const Fixed& fix) const {
	if (this->fixed_point <= fix.getRawBits())
		return (true);
	return (false);
}

bool	Fixed::operator==(const Fixed& fix) const {
	if (this->fixed_point == fix.getRawBits())
		return (true);
	return (false);
}

bool	Fixed::operator!=(const Fixed& fix) const {
	if (this->fixed_point != fix.getRawBits())
		return (true);
	return (false);
}

Fixed	Fixed::operator+(const Fixed& fix) const {
	return (Fixed(this->toFloat() + fix.toFloat()));
}

Fixed	Fixed::operator-(const Fixed& fix) const {
	return (Fixed(this->toFloat() - fix.toFloat()));
}

Fixed	Fixed::operator*(const Fixed& fix) const {
	return (Fixed(this->toFloat() * fix.toFloat()));
}

Fixed	Fixed::operator/(const Fixed& fix) const {
	return (Fixed(this->toFloat() / fix.toFloat()));
}

Fixed&	Fixed::operator++(void) {
	this->fixed_point++;
	return (*this);
}

Fixed	Fixed::operator++(int) {
	Fixed	tmp(*this);

	this->fixed_point++;
	return (tmp);
}

Fixed&	Fixed::operator--(void) {
	this->fixed_point--;
	return (*this);
}

Fixed	Fixed::operator--(int) {
	Fixed	tmp(*this);

	this->fixed_point--;
	return (tmp);
}

Fixed&	Fixed::max(Fixed& a, Fixed& b) {
	if (a >= b)
		return (a);
	return (b);
}

const Fixed&	Fixed::max(const Fixed& a, const Fixed& b) {
	if (a >= b)
		return (a);
	return (b);
}

Fixed&	Fixed::min(Fixed& a, Fixed& b) {
	if (a <= b)
		return (a);
	return (b);
}

const Fixed&	Fixed::min(const Fixed& a, const Fixed& b) {
	if (a <= b)
		return (a);
	return (b);
}