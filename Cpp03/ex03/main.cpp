/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: minchoi <minchoi@student.42seoul.kr>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/15 16:02:31 by minchoi           #+#    #+#             */
/*   Updated: 2021/11/30 15:23:16 by minchoi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "DiamondTrap.hpp"

int main( void ) {
	{
		DiamondTrap a;
	}
	std::cout << "-------" << std::endl;
	{
		DiamondTrap a("minchoi");
		a.attack("something");
		a.whoAmI();
	}
	
	return 0;
}