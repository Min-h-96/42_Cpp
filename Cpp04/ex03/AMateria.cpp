/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AMateria.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: minchoi <minchoi@student.42seoul.kr>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/07 14:18:13 by minchoi           #+#    #+#             */
/*   Updated: 2021/12/07 16:17:30 by minchoi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "AMateria.hpp"
#include "ICharacter.hpp"

AMateria::AMateria(): type("") {
	std::cout << "[" << std::setw(W_SIZE) << "Default Constructor on AMateria." << "]" <<std::endl;
}

AMateria::~AMateria() {
	std::cout << "[" << std::setw(W_SIZE) << "Destructor on AMateria." << "]" << std::endl;
}

AMateria::AMateria(std::string const& type): type(type) {
	std::cout << "[" << std::setw(W_SIZE) << "Constructor on AMateria." << "]" << std::endl;
}

AMateria::AMateria(AMateria const& am): type(am.getType()) {
	std::cout << "[" << std::setw(W_SIZE) << "Copy Constructor on AMateria." << "]" << std::endl;
}

AMateria&	AMateria::operator=(AMateria const& am) {
	if (this != &am)
		this->type = am.getType();
	std::cout << "[" << std::setw(W_SIZE) << "Assigning operator= on AMateria." << "]" << std::endl;
	return (*this);
}

std::string const&	AMateria::getType(void) const {
	return (this->type);
}

void				AMateria::use(ICharacter& target) {
	std::cout << "[" << std::setw(W_SIZE) << "use Function on AMateria." << "]" << std::endl;
}