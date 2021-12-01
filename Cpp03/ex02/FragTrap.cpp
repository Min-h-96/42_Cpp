/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: minchoi <minchoi@student.42seoul.kr>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/25 00:45:28 by minchoi           #+#    #+#             */
/*   Updated: 2021/12/01 14:33:36 by minchoi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "FragTrap.hpp"

FragTrap::FragTrap(): ClapTrap() {
	this->hitPoints = 100;
	this->energyPoints = 100;
	this->attackDamage = 30;
	std::cout << this->name << ", FragTrap default constructor is called." << std::endl;
}

FragTrap::~FragTrap() {
	std::cout << this->name << ", FragTrap destructor is called." << std::endl;
}

FragTrap::FragTrap(std::string const name): ClapTrap(name) {
	this->hitPoints = 100;
	this->energyPoints = 100;
	this->attackDamage = 30;
	std::cout << this->name << ", FragTrap constructor is called." << std::endl;
}

FragTrap::FragTrap(FragTrap const& frag) {
	*this = frag;
	std::cout << this->name << ", FragTrap copy constructor is called." << std::endl;
}

FragTrap& FragTrap::operator=(FragTrap const& frag) {
	this->name = frag.name;
	this->hitPoints = frag.hitPoints;
	this->energyPoints = frag.energyPoints;
	this->attackDamage = frag.attackDamage;
	std::cout << this->name << ", FragTrap operator= is called" << std::endl;
	return *this;
}

void	FragTrap::attack(std::string const& target) {
	std::cout << "FragTrap " << this->name << " attacks " << target\
		<< ", causing " << this->attackDamage << " points of damage!" << std::endl;
}

void	FragTrap::takeDamage(unsigned int amount) {
	std::cout << "FragTrap " << this->name << " takes "\
		<< amount << " point of damage!" << std::endl;
	if (this->hitPoints <= amount) {
		this->hitPoints = 0;
		std::cout << "FragTrap " << this->name << " is dead." << std::endl;
	} else {
		this->hitPoints -= amount;
		std::cout << "FragTrap " << this->name << " has " << this->hitPoints << " HP left." << std::endl;
	}
}

void	FragTrap::beRepaired(unsigned int amount) {
	std::cout << "FragTrap " << this->name << " be repaired "\
		<< amount << " point." << std::endl;
	this->hitPoints += amount;
	std::cout << "FragTrap " << this->name << " has " << this->hitPoints << " HP left." << std::endl;
}

void	FragTrap::highFiveGuys(void) {
	std::cout << "FragTrap " << this->name << " request a positive high five." << std::endl;
}