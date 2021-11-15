/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contact.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: minchoi <minchoi@student.42seoul.kr>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/10 16:14:37 by minchoi           #+#    #+#             */
/*   Updated: 2021/11/13 15:33:39 by minchoi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Contact.hpp"

std::string field_name[5] = {
	"First Name",
	"Last Name",
	"Nickname",
	"Phone Number",
	"Secret"
};

Contact::Contact(void) {
	for (int i=0; i<5; i++)
		this->info[i] = std::string();
}

Contact::~Contact(void) {
}

int Contact::setInfo(int index) {
	std::string info;

	Contact::setIndex(index);
	for (int i=0; i<5; i++) {
		std::cout << "Enter " << field_name[i] << " : ";
		std::cin >> info;
		this->info[i] = info;
	}
	return (1);
}

void	Contact::getInfo(void) {
	std::cout << "--Contact #" << this->getIndex() << " Info--" << std::endl;
	for (int i=0; i<5; i++) {
		std::cout << field_name[i] << " : " << this->info[i] << std::endl;
	}
}

void	Contact::setIndex(int index) {
	this->index = index + 1;
}

std::string	Contact::getIndex(void) {
	return (std::to_string(this->index));
}

void	Contact::getHeaderInfo(void) {
	std::cout << "|" << std::setw(10) << this->getIndex();
	for (int i=0; i<3; i++) {
		std::cout << "|";
		if (this->info[i].length() > 10)
			std::cout << this->info[i].substr(0, 9) << ".";
		else
			std::cout << std::setw(10) << this->info[i];
	}
	std::cout << "|" << std::endl;
}