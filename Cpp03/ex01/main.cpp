/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: minchoi <minchoi@student.42seoul.kr>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/15 16:02:31 by minchoi           #+#    #+#             */
/*   Updated: 2021/11/30 15:23:27 by minchoi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScavTrap.hpp"

int main( void ) {
	{
		ScavTrap a;
	}
	std::cout << "-------" << std::endl;
	{
		ScavTrap a("minchoi");
		ScavTrap b(a);
	}
	std::cout << "-------" << std::endl;
	{
		ScavTrap a("minchoi");
		a.attack("noname");
		a.guardGate();
	}
	
	return 0;
}