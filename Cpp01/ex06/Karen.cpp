/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Karen.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: minchoi <minchoi@student.42seoul.kr>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/16 12:02:11 by minchoi           #+#    #+#             */
/*   Updated: 2021/11/16 12:51:20 by minchoi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Karen.hpp"

Karen::Karen() {}

Karen::~Karen() {}

void	Karen::debug(void) {
	std::cout << "[ DEBUG ]" << std::endl;
	std::cout << "I love to get extra bacon for my 7XL-double-cheese-triple-pickle-special-ketchup burger." << std::endl;
	std::cout << "I just love it!" << std::endl;
}

void	Karen::info(void) {
	std::cout << "[ INFO ]" << std::endl;
	std::cout << "I cannot believe adding extra bacon cost more money." << std::endl;
	std::cout << "You don’t put enough!" << std::endl;
	std::cout << "If you did I would not have to ask for it!" << std::endl;
}

void	Karen::warning(void) {
	std::cout << "[ WARNING ]" << std::endl;
	std::cout << "I think I deserve to have some extra bacon for free." << std::endl;
	std::cout << "I’ve been coming here for years and you just started working here last month." << std::endl;
}

void	Karen::error(void) {
	std::cout << "[ ERROR ]" << std::endl;
	std::cout << "This is unacceptable, I want to speak to the manager now." << std::endl;
}

void	Karen::complain(std::string level) {
	int		func_key;
	void	(Karen::* func[4])(void) = {
		&Karen::debug,
		&Karen::info,
		&Karen::warning,
		&Karen::error
	};

	func_key = ("DEBUG" == level) ? 0 :
				("INFO" == level) ? 1 :
				("WARNING" == level) ? 2 :
				("ERROR" == level) ? 3 :
				throw "[ Probably complaining about insignificant problems ]";
	for (int i=func_key; i<4; i++) {
		(this->*func[i])();
		std::cout << std::endl;
	}
}