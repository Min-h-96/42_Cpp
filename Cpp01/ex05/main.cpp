/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: minchoi <minchoi@student.42seoul.kr>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/15 16:02:31 by minchoi           #+#    #+#             */
/*   Updated: 2021/11/16 12:42:08 by minchoi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Karen.hpp"

int main(void) {
	Karen karen;

	try {
		std::cout << "debug : ";
		karen.complain("debug");
		std::cout << "info : ";
		karen.complain("info");
		std::cout << "warning : ";
		karen.complain("warning");
		std::cout << "error : ";
		karen.complain("error");
		karen.complain("adsfa");
	} catch(char const *e) {
		std::cerr << e << std::endl;
	}
}