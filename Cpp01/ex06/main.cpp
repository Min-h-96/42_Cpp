/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: minchoi <minchoi@student.42seoul.kr>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/15 16:02:31 by minchoi           #+#    #+#             */
/*   Updated: 2021/11/16 12:44:33 by minchoi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Karen.hpp"

int main(int argc, char *argv[]) {
	Karen karen;

	if (argc != 2) {
		std::cout << "Invalid argument." << std::endl;
		return (1);
	}
	try {
		karen.complain(argv[1]);
	} catch(char const *e) {
		std::cerr << e << std::endl;
	}
}