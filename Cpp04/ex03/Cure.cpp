/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cure.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: minchoi <minchoi@student.42seoul.kr>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/07 15:00:38 by minchoi           #+#    #+#             */
/*   Updated: 2021/12/10 13:00:19 by minchoi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cure.hpp"

Cure::Cure(): AMateria(C_NAME) {
	std::cout << "[" << std::setw(W_SIZE) << "Default Constructor on Cure." << "]" << std::endl;
}

Cure::~Cure() {
	std::cout << "[" << std::setw(W_SIZE) << "Destructor on Cure." << "]" << std::endl;
}

Cure::Cure(std::string const& type): AMateria(type) {
	std::cout << "[" << std::setw(W_SIZE) << "Constructor on Cure." << "]" << std::endl;
}

Cure::Cure(Cure const& i): AMateria(i.getType()) {
	std::cout << "[" << std::setw(W_SIZE) << "Copy Constructor on Cure." << "]" << std::endl;
}

Cure&	Cure::operator=(Cure const& i) {
	if (this != &i)
		this->type = i.getType();
	std::cout << "[" << std::setw(W_SIZE) << "Assigning operator= on Cure." << "]" << std::endl;
	return (*this);
}

AMateria*	Cure::clone(void) const {
	return (new Cure());
}

void		Cure::use(ICharacter& target) {
	std::cout << "[" << std::setw(W_SIZE) << "use Function on Cure." << "]"
			<< " *  heals " << target.getName() << "’s wounds *" << std::endl;
}