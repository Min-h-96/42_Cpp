/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: minchoi <minchoi@student.42seoul.kr>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/10 16:25:57 by minchoi           #+#    #+#             */
/*   Updated: 2021/11/11 00:41:44 by minchoi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PhoneBook.hpp"

Phonebook::Phonebook() {
	this->amount = 0;
	this->oldest = 0;
}

Phonebook::~Phonebook() {
}

void	Phonebook::replaceOldestContact(void) {
	this->contact[this->oldest].setInfo(this->oldest);
	this->oldest++;
	if (this->oldest == 8)
		this->oldest = 0;
}

void	Phonebook::addContact(void) {
	if (this->amount == 8) {
		Phonebook::replaceOldestContact();
	} else {
		if (this->contact[this->amount].setInfo(this->amount))
			this->amount++;
	}
}

void	Phonebook::showContactHeader(void) {
	std::cout << "|     index|First Name| Last Name|  Nickname|" << std::endl;
	for (int i=0; i<this->amount; i++) {
		this->contact[i].getHeaderInfo();
	}
}

void	Phonebook::getContactList(void) {
	int	index;

	this->showContactHeader();
	std::cout << "Enter index you want or 0 is EXIT : ";
	while (!(std::cin >> index) || index < 0 || index > this->amount) {
		std::cin.clear();
		std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
		std::cout << "Invalid Index." << std::endl;
		std::cout << "Enter index you want or 0 is EXIT : ";
	}
	if (index != 0)
		this->contact[index - 1].getInfo();
}