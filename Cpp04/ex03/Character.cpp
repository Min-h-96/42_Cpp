/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Character.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: minchoi <minchoi@student.42seoul.kr>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/07 14:12:35 by minchoi           #+#    #+#             */
/*   Updated: 2021/12/07 17:40:26 by minchoi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Character.hpp"

Character::Character(): name("") {
	for (int i=0; i<AM_SIZE; i++)
		this->inven[i] = NULL;
	std::cout << "[" << std::setw(W_SIZE) << "Default Constructor on Character." << "]" << std::endl;
}

Character::~Character() {
	for (int i=0; i<AM_SIZE; i++) {
		if (inven[i]) {
			delete inven[i];
			inven[i] = NULL;
		}
	}
	std::cout << "[" << std::setw(W_SIZE) << "Destructor on Character." << "] " << this->name << std::endl;
}

Character::Character(std::string const& name): name(name) {
	for (int i=0; i<AM_SIZE; i++)
		this->inven[i] = NULL;
	std::cout << "[" << std::setw(W_SIZE) << "Constructor on Character." << "] " << this->name << std::endl;
}

Character::Character(Character const& c): name(c.getName()) {
	const AMateria*	tmp;

	for (int i=0; i<AM_SIZE; i++) {
		if (this->inven[i]) {
			delete this->inven[i];
			this->inven[i] = NULL;
		}
		tmp = c.getInven(i);
		if (tmp)
			this->inven[i] = tmp->clone();
	}
	std::cout << "[" << std::setw(W_SIZE) << "Copy Constructor on Character." << "] " << this->name << std::endl;
}

Character&	Character::operator=(Character const& c) {
	const AMateria*	tmp;

	if (this != &c) {
		for (int i=0; i<AM_SIZE; i++) {
			if (this->inven[i]) {
				delete this->inven[i];
				this->inven[i] = NULL;
			}
			tmp = c.getInven(i);
			if (tmp)
				this->inven[i] = tmp->clone();
		}
	}
	std::cout << "[" << std::setw(W_SIZE) << "Assigning operator= on Character." << "] " << this->name << std::endl;
	return (*this);
}

AMateria const*		Character::getInven(int idx) const {
	return (this->inven[idx]);
}

std::string const&	Character::getName(void) const {
	return (this->name);
}

void 				Character::equip(AMateria* m) {
	if (!m)
		return ;

	for (int i=0; i<AM_SIZE; i++) {
		if (!this->inven[i]) {
			this->inven[i] = m;
			std::cout << "[" << std::setw(W_SIZE) << "equip Function on Character." << "] " << this->name << std::endl;
			return ;
		}
	}
	std::cout << "[" << std::setw(W_SIZE) << "equip Function on Character." << "] " << this->name
			<< " failed equip(Inven is full)." << std::endl;
}

void 				Character::unequip(int idx) {
	if (idx >= 0 && idx < AM_SIZE && this->inven[idx])
	{
		this->inven[idx] = NULL;
		std::cout << "[ " << std::setw(W_SIZE) << "unequip Function on Character" << "] " << this->name << std::endl;
		return ;
	} else
		std::cout << "[" << std::setw(W_SIZE) << "equip Function on Character." << "] " << this->name
				<< " failed to unequip (Empty or Wrong Access)." << std::endl;
}

void 				Character::use(int idx, ICharacter& target) {
	if (idx >= 0 && idx < AM_SIZE && this->inven[idx])
		this->inven[idx]->use(target);
	else
		std::cout << "[ " << std::setw(W_SIZE) << "use Function on Character" << "] "
				<< this->name << " failed to use (Empty or Wrong Access)" << std::endl;
}