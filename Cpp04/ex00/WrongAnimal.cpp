/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongAnimal.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: minchoi <minchoi@student.42seoul.kr>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/06 13:27:47 by minchoi           #+#    #+#             */
/*   Updated: 2021/12/06 13:31:07 by minchoi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Animal.hpp"

WrongAnimal::WrongAnimal(): type(WA_NAME) {
	std::cout << "[ " << std::setw(W_SIZE) << WA_NAME << " ] "
			<< "Default constructor." << std::endl;
}

WrongAnimal::~WrongAnimal() {
	std::cout << "[ " << std::setw(W_SIZE) << WA_NAME << " ] "
			<< "Destructor." << std::endl;
}

WrongAnimal::WrongAnimal(WrongAnimal const& animal) {
	*this = animal;
	std::cout << "[ " << std::setw(W_SIZE) << WA_NAME << " ] "
			<< "Copy constructor." << std::endl;
}

WrongAnimal&	WrongAnimal::operator=(WrongAnimal const& animal) {
	this->type = animal.type;
	std::cout << "[ " << std::setw(W_SIZE) << WA_NAME << " ] "
			<< "operator= assignment." << std::endl;
	return (*this);
}

std::string	WrongAnimal::getType(void) const {
	return (this->type);
}

void		WrongAnimal::setTyep(std::string const& type) {
	this->type = type;
}

void		WrongAnimal::makeSound(void) const {
	std::cout << "[ " << std::setw(W_SIZE) << WA_NAME << " ] "
			<< "Cannot make sound." << std::endl;
}