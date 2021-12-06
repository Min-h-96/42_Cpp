/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: minchoi <minchoi@student.42seoul.kr>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/24 21:06:29 by minchoi           #+#    #+#             */
/*   Updated: 2021/12/06 12:48:23 by minchoi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"

ClapTrap::ClapTrap() {
	this->name = "noname";
	this->hitPoints = 10;
	this->energyPoints = 10;
	this->attackDamage = 0;
	std::cout << this->name << ", Default constructor is called." << std::endl;
}

ClapTrap::~ClapTrap() {
	std::cout << this->name << ", Destructor is called." << std::endl;
}

ClapTrap::ClapTrap(ClapTrap const& trap) {
	*this = trap;
	std::cout << this->name << ", Copy constructor is called." << std::endl;
}

ClapTrap& ClapTrap::operator=(ClapTrap const& trap) {
	this->name = trap.name;
	this->hitPoints = trap.hitPoints;
	this->energyPoints = trap.energyPoints;
	this->attackDamage = trap.attackDamage;
	std::cout << this->name << ", operator= is called." << std::endl;
	return (*this);
}

ClapTrap::ClapTrap(std::string const name) {
	this->name = name;
	this->hitPoints = 10;
	this->energyPoints = 10;
	this->attackDamage = 0;
	std::cout << this->name << ", Constructor is called." << std::endl;
}

void	ClapTrap::attack(std::string const& target) {
	std::cout << "ClapTrap " << this->name << " attacks " << target\
		<< ", causing " << this->attackDamage << " points of damage!" << std::endl;
}

void	ClapTrap::takeDamage(unsigned int amount) {
	std::cout << "ClapTrap " << this->name << " takes "\
		<< amount << " point of damage!" << std::endl;
	if (this->hitPoints <= amount) {
		this->hitPoints = 0;
		std::cout << "ClapTrap " << this->name << " is dead." << std::endl;
	} else {
		this->hitPoints -= amount;
		std::cout << "ClapTrap " << this->name << " has " << this->hitPoints << " HP left." << std::endl;
	}
}

void	ClapTrap::beRepaired(unsigned int amount) {
	std::cout << "ClapTrap " << this->name << " be repaired "\
		<< amount << " point." << std::endl;
	this->hitPoints += amount;
	std::cout << "ClapTrap " << this->name << " has " << this->hitPoints << " HP left." << std::endl;
}

std::string	ClapTrap::getName(void) const {
	return (this->name);
}

void	ClapTrap::setName(const std::string name) {
	this->name = name;
}

unsigned int	ClapTrap::getHitPoints(void) const {
	return (this->hitPoints);
}

void	ClapTrap::setHitPoints(const unsigned int point) {
	this->hitPoints = point;
}

unsigned int	ClapTrap::getEnergyPoints(void) const {
	return (this->energyPoints);
}

void	ClapTrap::setEnergyPoints(const unsigned int point) {
	this->energyPoints = point;
}

unsigned int	ClapTrap::getAttackDamage(void) const {
	return (this->attackDamage);
}

void	ClapTrap::setAttackDamage(const unsigned int damage) {
	this->attackDamage = damage;
}