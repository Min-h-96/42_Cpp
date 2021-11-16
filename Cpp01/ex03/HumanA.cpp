/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanA.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: minchoi <minchoi@student.42seoul.kr>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/15 16:38:21 by minchoi           #+#    #+#             */
/*   Updated: 2021/11/15 21:56:51 by minchoi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "HumanA.hpp"

HumanA::HumanA(std::string name, Weapon &weapon): name(name), weapon(weapon) {
}

HumanA::~HumanA() {
}

const std::string	&HumanA::getName(void) {
	return (this->name);
}

void	HumanA::attack(void) {
	std::cout << this->getName() << " attacks with his ";
	std::cout << this->weapon.getType() << std::endl;
}