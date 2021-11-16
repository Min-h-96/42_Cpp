/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: minchoi <minchoi@student.42seoul.kr>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/15 14:23:39 by minchoi           #+#    #+#             */
/*   Updated: 2021/11/15 16:06:48 by minchoi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

int	main(void) {
	Zombie z1;
	Zombie *z2;

	z1.setName("zombie1");
	z1.announce();
	z2 = newZombie("minchoi");
	z2->announce();
	randomChump("minchoi");
	delete z2;
}