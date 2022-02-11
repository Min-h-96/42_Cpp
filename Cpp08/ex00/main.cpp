/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: minchoi <minchoi@student.42seoul.kr>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/11 11:34:15 by minchoi           #+#    #+#             */
/*   Updated: 2022/02/11 12:08:48 by minchoi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "easyfind.hpp"

int main(void) {
	std::vector<int> v;
	
	for (int i=1; i<=5; i++)
		v.push_back(i * i);

	try {
		std::cout << "easyfind : It was in container[" << easyfind(v, 9) << "]" << std::endl;
		std::cout << "easyfind : It was in container[" << easyfind(v, 25) << "]" << std::endl;
		std::cout << "easyfind : It was in container[" << easyfind(v, 1) << "]" << std::endl;
	} catch (std::exception& e) {
		std::cerr << e.what() << std::endl;
	}

	try {
		easyfind(v, 7);
	} catch (std::exception& e) {
		std::cerr << "Exception : " << e.what() << std::endl;
	}
	
	return 0;
}