/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: minchoi <minchoi@student.42seoul.kr>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/15 16:02:31 by minchoi           #+#    #+#             */
/*   Updated: 2021/12/01 15:03:14 by minchoi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "DiamondTrap.hpp"

int main( void ) {
	{
		DiamondTrap a;
	}
	std::cout << "======================" << std::endl;
	{
		DiamondTrap a("minchoi");
		DiamondTrap b(a);
		DiamondTrap c;
		c = a;
		std::cout << "--------------" << std::endl;
		a.whoAmI();
		b.whoAmI();
		c.whoAmI();
	}
	std::cout << "======================" << std::endl;
	{
		DiamondTrap a("minchoi");
		DiamondTrap b(a);
		DiamondTrap c;
		c = a;
		std::cout << "--------------" << std::endl;
		std::cout << a.getName() << " " << a.getAttackDamage() << " " << a.getEnergyPoints() << std::endl;
		std::cout << b.getName() << " " << b.getAttackDamage() << " " << b.getEnergyPoints() << std::endl;
		std::cout << c.getName() << " " << c.getAttackDamage() << " " << c.getEnergyPoints() << std::endl;
	}
	
	return 0;
}