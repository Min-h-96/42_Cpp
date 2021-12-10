/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Ice.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: minchoi <minchoi@student.42seoul.kr>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/07 14:48:28 by minchoi           #+#    #+#             */
/*   Updated: 2021/12/10 13:00:15 by minchoi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Ice.hpp"

Ice::Ice(): AMateria(I_NAME) {
	std::cout << "[" << std::setw(W_SIZE) << "Default Constructor on Ice." << "]" << std::endl;
}

Ice::~Ice() {
	std::cout << "[" << std::setw(W_SIZE) << "Destructor on Ice." << "]" << std::endl;
}

Ice::Ice(std::string const& type): AMateria(type) {
	std::cout << "[" << std::setw(W_SIZE) << "Constructor on Ice." << "]" << std::endl;
}

Ice::Ice(Ice const& i): AMateria(i.getType()) {
	std::cout << "[" << std::setw(W_SIZE) << "Copy Constructor on Ice." << "]" << std::endl;
}

Ice&	Ice::operator=(Ice const& i) {
	if (this != &i)
		this->type = i.getType();
	std::cout << "[" << std::setw(W_SIZE) << "Assigning operator= on Ice." << "]" << std::endl;
	return (*this);
}

AMateria*	Ice::clone(void) const {
	return (new Ice());
}

void		Ice::use(ICharacter& target) {
	std::cout << "[" << std::setw(W_SIZE) << "use Function on Ice." << "]"
			<< " * shoots an ice bolt at " << target.getName() << " *" << std::endl;
}