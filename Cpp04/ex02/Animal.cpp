/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: minchoi <minchoi@student.42seoul.kr>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/30 20:49:10 by minchoi           #+#    #+#             */
/*   Updated: 2021/12/07 13:46:24 by minchoi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Animal.hpp"

Animal::Animal(): type(A_NAME) {
	std::cout << "[ " << std::setw(W_SIZE) << A_NAME << " ] "
			<< "Default constructor." << std::endl;
}

Animal::~Animal() {
	std::cout << "[ " << std::setw(W_SIZE) << A_NAME << " ] "
			<< "Destructor." << std::endl;
}

Animal::Animal(Animal const& animal) {
	*this = animal;
	std::cout << "[ " << std::setw(W_SIZE) << A_NAME << " ] "
			<< "Copy constructor." << std::endl;
}

Animal&	Animal::operator=(Animal const& animal) {
	this->type = animal.type;
	std::cout << "[ " << std::setw(W_SIZE) << A_NAME << " ] "
			<< "operator= assignment." << std::endl;
	return (*this);
}

std::string	Animal::getType(void) const {
	return (this->type);
}

void		Animal::setTyep(std::string const& type) {
	this->type = type;
}