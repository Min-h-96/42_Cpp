/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: minchoi <minchoi@student.42seoul.kr>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/10 16:14:40 by minchoi           #+#    #+#             */
/*   Updated: 2021/11/10 23:35:18 by minchoi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PhoneBook.hpp"

int	main(void)
{
	bool run = true;
	std::string command;
	Phonebook phonebook;

	while (run) {
		if (command.empty())
			std::cout << "> ";
		std::getline(std::cin, command);
		if (command == "EXIT")
			run = false;
		else if (command == "ADD")
			phonebook.addContact();
		else if (command == "SEARCH")
			phonebook.getContactList();
		else
			command.clear();
    }
}
