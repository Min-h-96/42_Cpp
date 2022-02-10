/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   whatever.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: minchoi <minchoi@student.42seoul.kr>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/10 15:28:42 by minchoi           #+#    #+#             */
/*   Updated: 2022/02/10 15:48:58 by minchoi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef WHATEVER_HPP
# define WHATEVER_HPP

# include <iostream>

template <typename T>
void	swap(T a, T b) {
	T	t;
	t = b;
	b = a;
	a = t;
}

template <typename T>
T		min(T a, T b) {
	if (a < b)
		return a;
	else
		return b;
}

template <typename T>
T		max(T a, T b) {
	if (a > b)
		return a;
	else
		return b;
}

#endif