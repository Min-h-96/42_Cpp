/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: minchoi <minchoi@student.42seoul.kr>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/13 22:05:37 by minchoi           #+#    #+#             */
/*   Updated: 2022/02/09 15:49:40 by minchoi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Convert.hpp"

int main(int argc, char* argv[]) {
	if (argc != 2) {
		std::cout << "Invalid Input Form." << std::endl;
		return 0;
	}
	
	std::string str(argv[1]);
	convert(str);
	
	return 0;
}