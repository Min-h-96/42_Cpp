/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: minchoi <minchoi@student.42seoul.kr>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/01 18:15:51 by minchoi           #+#    #+#             */
/*   Updated: 2021/12/06 13:13:48 by minchoi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Dog.hpp"

Dog::Dog(): Animal() {
	this->type = D_NAME;
	std::cout << "[ " << std::setw(W_SIZE) << D_NAME << " ] "
			<< "Default constructor." << std::endl;
}

Dog::~Dog() {
	std::cout << "[ " << std::setw(W_SIZE) << D_NAME << " ] "
			<< "Destructor." << std::endl;
}

Dog::Dog(Dog const& dog) {
	*this = dog;
	std::cout << "[ " << std::setw(W_SIZE) << D_NAME << " ] "
			<< "Copy constructor." << std::endl;
}

Dog&	Dog::operator=(Dog const& dog) {
	this->type = dog.type;
	std::cout << "[ " << std::setw(W_SIZE) << D_NAME << " ] "
			<< "operator= assignment." << std::endl;
	return (*this);
}

void	Dog::makeSound(void) const {
	std::cout << "[ " << std::setw(W_SIZE) << D_NAME << " ] "
			<< "Woof, woof!!" << std::endl;
}