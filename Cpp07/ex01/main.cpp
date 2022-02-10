/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: minchoi <minchoi@student.42seoul.kr>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/10 15:53:26 by minchoi           #+#    #+#             */
/*   Updated: 2022/02/10 17:17:01 by minchoi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "iter.hpp"

void	funcBasic(int const& i) {
	std::cout << i << std::endl;
}

template <typename T>
void	funcTemplate(T const& t) {
	std::cout << t << std::endl;
}

int 	main(void) {
	int			test1[4] = {1, 2, 3, 4};
	char		test2[3] = {'a', 'b', 'c'};
	std::string	test3[3] = {"42", "Seoul", "CPP"};

	iter(test1, 4, funcBasic);
	iter(test1, 4, funcTemplate);
	std::cout << std::endl;

	iter(test2, 3, funcTemplate);
	std::cout << std::endl;

	iter(test3, 3, funcTemplate);
	
	return 0;
}