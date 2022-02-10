/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   iter.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: minchoi <minchoi@student.42seoul.kr>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/10 15:53:12 by minchoi           #+#    #+#             */
/*   Updated: 2022/02/10 17:10:14 by minchoi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ITER_HPP
# define ITER_HPP

# include <iostream>
# include <string>

template <typename T>
void	iter(T *t, size_t len, void(*f)(T const&)) {
	for (size_t i=0; i<len; i++)
		f(t[i]);
}

#endif