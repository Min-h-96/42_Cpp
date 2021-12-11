/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: minchoi <minchoi@student.42seoul.kr>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/15 14:23:39 by minchoi           #+#    #+#             */
/*   Updated: 2021/12/11 15:33:22 by minchoi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

int	main(void) {
	Zombie zombieStack1;
	Zombie zombieStack2("zombie2");
	Zombie *zombieHeap;

	zombieStack1.setName("zombie1");
	zombieStack1.announce();
	zombieStack2.announce();
	zombieHeap = newZombie("minchoi");
	zombieHeap->announce();
	randomChump("minchoi");
	delete zombieHeap;
}