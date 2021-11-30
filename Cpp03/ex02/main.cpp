/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: minchoi <minchoi@student.42seoul.kr>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/15 16:02:31 by minchoi           #+#    #+#             */
/*   Updated: 2021/11/30 15:23:22 by minchoi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "FragTrap.hpp"

int main( void ) {
	{
		FragTrap a;
	}
	std::cout << "-------" << std::endl;
	{
		FragTrap a("minchoi");
		FragTrap b(a);
	}
	std::cout << "-------" << std::endl;
	{
		FragTrap a("minchoi");
		a.attack("something");
		a.highFiveGuys();
	}
	
	return 0;
}