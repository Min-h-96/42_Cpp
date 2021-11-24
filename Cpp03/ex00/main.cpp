/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: minchoi <minchoi@student.42seoul.kr>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/15 16:02:31 by minchoi           #+#    #+#             */
/*   Updated: 2021/11/25 00:19:06 by minchoi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"

int main( void ) {
	ClapTrap a;
	ClapTrap b("CLP4P-TP");

	a.attack("Enemy1");
	a = b;
	a.attack("Enemy1");

	b.attack("Enemy2");
	b.takeDamage(5);
	b.takeDamage(7);
	b.beRepaired(7);

	ClapTrap c(b);

	c.attack("Enemy3");
	return 0;
}