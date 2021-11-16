/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanB.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: minchoi <minchoi@student.42seoul.kr>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/15 16:38:24 by minchoi           #+#    #+#             */
/*   Updated: 2021/11/15 23:16:44 by minchoi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "HumanB.hpp"

HumanB::HumanB(std::string name) {
	this->name = name;
	this->weapon = NULL;
}

HumanB::~HumanB() {
}

void	HumanB::setWeapon(Weapon &weapon) {
	this->weapon = &weapon;
}

const std::string	&HumanB::getName(void) {
	return (this->name);
}

void	HumanB::attack(void) {
	std::cout << this->getName() << " attacks with his ";
	std::cout << this->weapon->getType() << std::endl;
}