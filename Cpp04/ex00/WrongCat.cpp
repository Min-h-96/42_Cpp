/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongCat.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: minchoi <minchoi@student.42seoul.kr>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/06 13:35:34 by minchoi           #+#    #+#             */
/*   Updated: 2021/12/06 13:36:07 by minchoi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cat.hpp"

WrongCat::WrongCat(): WrongAnimal() {
	this->type = WC_NAME;
	std::cout << "[ " << std::setw(W_SIZE) << WC_NAME << " ] "
			<< "Default constructor." << std::endl;
}

WrongCat::~WrongCat() {
	std::cout << "[ " << std::setw(W_SIZE) << WC_NAME << " ] "
			<< "Destructor." << std::endl;
}

WrongCat::WrongCat(const WrongCat& cat) {
	*this = cat;
	std::cout << "[ " << std::setw(W_SIZE) << WC_NAME << " ] "
			<< "Copy constructor." << std::endl;
}

WrongCat&	WrongCat::operator=(const WrongCat& cat) {
	this->type = cat.type;
	std::cout << "[ " << std::setw(W_SIZE) << WC_NAME << " ] "
			<< "operator= assignment." << std::endl;
	return (*this);
}

void	WrongCat::makeSound(void) const {
	std::cout << "[ " << std::setw(W_SIZE) << WC_NAME << " ] "
			<< "Woem~~~!!" << std::endl;
}