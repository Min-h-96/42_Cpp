/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: minchoi <minchoi@student.42seoul.kr>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/15 16:02:31 by minchoi           #+#    #+#             */
/*   Updated: 2021/12/01 14:47:56 by minchoi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "FragTrap.hpp"

int main( void ) {
	{
		FragTrap a;
	}
	std::cout << "======================" << std::endl;
	{
		FragTrap a("minchoi");
		FragTrap b(a);
		FragTrap c;
		c = a;
		std::cout << "--------------" << std::endl;
		std::cout << "a " << a.getName() << std::endl;
		std::cout << "b " << b.getName() << std::endl;
		std::cout << "c " << c.getName() << std::endl;
	}
	std::cout << "======================" << std::endl;
	{
		FragTrap a("minchoi");
		ClapTrap b("hynam");
		
		a.attack("noname");
		a.takeDamage(10);
		a.beRepaired(5);
		std::cout << "--------------" << std::endl;
		b.attack("noname");
		b.takeDamage(10);
		b.beRepaired(5);
		std::cout << "--------------" << std::endl;
		a.highFiveGuys();
	}
	
	return 0;
}