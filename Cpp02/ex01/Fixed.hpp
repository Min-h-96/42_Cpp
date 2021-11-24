/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: minchoi <minchoi@student.42seoul.kr>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/19 15:48:06 by minchoi           #+#    #+#             */
/*   Updated: 2021/11/23 22:19:18 by minchoi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FIXED_HPP
# define FIXED_HPP

# include <iostream>
# include <cmath>

class Fixed {
	private:
		int	fixed_point;
		static const int	fractional_bits = 8;
	public:
		Fixed();
		~Fixed();
		Fixed(const Fixed& src);
		Fixed(const int val);
		Fixed(const float val);
		Fixed& operator=(const Fixed& src);
		int		getRawBits(void) const;
		void	setRawBits(const int raw);
		float	toFloat(void) const;
		int		toInt(void) const;
};

std::ostream& operator<<(std::ostream &out, const Fixed &fix);

#endif