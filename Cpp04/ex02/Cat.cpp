/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: minchoi <minchoi@student.42seoul.kr>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/01 18:15:37 by minchoi           #+#    #+#             */
/*   Updated: 2021/12/06 17:04:19 by minchoi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cat.hpp"

Cat::Cat(): Animal() {
	this->type = C_NAME;
	this->brain = new Brain();
	std::cout << "[ " << std::setw(W_SIZE) << C_NAME << " ] "
			<< "Default constructor." << std::endl;
}

Cat::~Cat() {
	std::cout << "[ " << std::setw(W_SIZE) << C_NAME << " ] "
			<< "Destructor." << std::endl;
	delete brain;
}

Cat::Cat(const Cat& cat) {
	*this = cat;
	std::cout << "[ " << std::setw(W_SIZE) << C_NAME << " ] "
			<< "Copy constructor." << std::endl;
}

Cat&	Cat::operator=(const Cat& cat) {
	if (this != &cat) {
		this->type = cat.type;
		if (this->brain != NULL) {
			delete this->brain;
			this->brain = new Brain(*cat.brain);
		}
	}
	std::cout << "[ " << std::setw(W_SIZE) << C_NAME << " ] "
				<< "operator= assignment." << std::endl;
	return (*this);
}

void	Cat::makeSound(void) const {
	std::cout << "[ " << std::setw(W_SIZE) << C_NAME << " ] "
			"Meow~~~!!" << std::endl;
}

Brain*	Cat::getBrain(void) const {
	if (this->brain)
		return (this->brain);
	return (NULL);
}