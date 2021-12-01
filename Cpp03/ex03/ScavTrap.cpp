/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: minchoi <minchoi@student.42seoul.kr>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/25 00:45:28 by minchoi           #+#    #+#             */
/*   Updated: 2021/12/01 14:42:17 by minchoi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScavTrap.hpp"

ScavTrap::ScavTrap(): ClapTrap() {
	this->hitPoints = 100;
	this->energyPoints = 50;
	this->attackDamage = 20;
	std::cout << this->name << ", ScavTrap default constructor is called." << std::endl;
}

ScavTrap::~ScavTrap() {
	std::cout << this->name << ", ScavTrap destructor is called." << std::endl;
}

ScavTrap::ScavTrap(std::string const name): ClapTrap(name) {
	this->hitPoints = 100;
	this->energyPoints = 50;
	this->attackDamage = 20;
	std::cout << this->name << ", ScavTrap constructor is called." << std::endl;
}

ScavTrap::ScavTrap(ScavTrap const& scav) {
	*this = scav;
	std::cout << this->name << ", ScavTrap copy constructor is called." << std::endl;
}

ScavTrap& ScavTrap::operator=(ScavTrap const& scav) {
	this->name = scav.name;
	this->hitPoints = scav.hitPoints;
	this->energyPoints = scav.energyPoints;
	this->attackDamage = scav.attackDamage;
	std::cout << this->name << ", ScavTrap operator= is called" << std::endl;
	return *this;
}

void	ScavTrap::attack(std::string const& target) {
	std::cout << "ScavTrap " << this->name << " attacks " << target\
		<< ", causing " << this->attackDamage << " points of damage!" << std::endl;
}

void	ScavTrap::takeDamage(unsigned int amount) {
	std::cout << "ScavTrap " << this->name << " takes "\
		<< amount << " point of damage!" << std::endl;
	if (this->hitPoints <= amount) {
		this->hitPoints = 0;
		std::cout << "ScavTrap " << this->name << " is dead." << std::endl;
	} else {
		this->hitPoints -= amount;
		std::cout << "ScavTrap " << this->name << " has " << this->hitPoints << " HP left." << std::endl;
	}
}

void	ScavTrap::beRepaired(unsigned int amount) {
	std::cout << "ScavTrap " << this->name << " be repaired "\
		<< amount << " point." << std::endl;
	this->hitPoints += amount;
	std::cout << "ScavTrap " << this->name << " has " << this->hitPoints << " HP left." << std::endl;
}

void	ScavTrap::guardGate(void) {
	std::cout << "ScavTrap " << this->name << " has enterred in Gate keeper mode." << std::endl;
}