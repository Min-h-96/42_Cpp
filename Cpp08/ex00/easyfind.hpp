/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   easyfind.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: minchoi <minchoi@student.42seoul.kr>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/11 11:15:36 by minchoi           #+#    #+#             */
/*   Updated: 2022/02/11 12:06:10 by minchoi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef EASYFIND_HPP
# define EASYFIND_HPP

# include <iostream>
# include <vector>
# include <algorithm>
# include <exception>

class NoValueInContainer : public std::exception {
	public:
		const char* what(void) const throw() {
			return "No Value In Container";
		}
};

template <typename T>
int	easyfind(T& container, int i) {
	typename T::iterator iter = std::find(container.begin(), container.end(), i);

	if (iter == container.end())
		throw NoValueInContainer();
	return iter - container.begin();
}

#endif