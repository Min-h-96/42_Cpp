/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   DiamondTrap.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: minchoi <minchoi@student.42seoul.kr>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/30 14:15:07 by minchoi           #+#    #+#             */
/*   Updated: 2021/12/01 15:06:21 by minchoi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "DiamondTrap.hpp"

// ClapTrap -> ScavTrap -> FrapTrap 순서로 생성자 호출
// 소멸은 반대로 된다.
DiamondTrap::DiamondTrap(): ClapTrap(), ScavTrap(), FragTrap(), name(ClapTrap::name) {
// 이 경우 마지막에 FragTrap 생성자 값으로 세팅되기 때문에 ScavTrap 값을 설정하려는
// 속성은 수동으로 바꿔줘야 한다.
	ClapTrap::name += "_clap_name";
	ClapTrap::energyPoints = 50;
	std::cout << this->name << ", DiamondTrap default constructor is called." << std::endl;
}

DiamondTrap::~DiamondTrap() {
	std::cout << this->name << ", DiamondTrap destructor is called." << std::endl;
}

DiamondTrap::DiamondTrap(std::string n): ClapTrap(n), FragTrap(n), ScavTrap(n), name(ClapTrap::name) {
	ClapTrap::name += "_clap_name";
	ClapTrap::energyPoints = 50;
	std::cout << this->name << ", DiamondTrap constructor is called." << std::endl;
}

DiamondTrap::DiamondTrap(DiamondTrap const& dia) {
	*this = dia;
	std::cout << this->name << ", DiamondTrap copy constructor is called." << std::endl;
}

DiamondTrap&	DiamondTrap::operator=( DiamondTrap const& diamond) {
	this->name = diamond.name;
	this->hitPoints = diamond.hitPoints;
	this->energyPoints = diamond.energyPoints;
	this->attackDamage = diamond.attackDamage;
	ClapTrap::name = this->name + "_clap_name";
	std::cout << "DiamondTrap " << this->name << " operator= is called" << std::endl;
	return *this;
}

void	DiamondTrap::attack(std::string const & target) {
	ScavTrap::attack(target);
}

void	DiamondTrap::whoAmI() {
	std::cout << "DiamondTrap name is " << this->name << " and ClapTrap name is " << ClapTrap::name << std::endl;
}