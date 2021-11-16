/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   randomChump.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: minchoi <minchoi@student.42seoul.kr>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/15 14:42:34 by minchoi           #+#    #+#             */
/*   Updated: 2021/11/16 21:46:49 by minchoi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

void	randomChump(std::string name) {
	Zombie z;

	for (int i=0; i<name.size(); i++) {
		if ('a' <= name[i]  && name[i] <= 'z')
			name[i] = 'a' + rand() % 26;
		else if ('A' <= name[i] && name[i] <= 'Z')
			name[i] = 'A' + rand() % 26;
	}
	z.setName(name);
	z.announce();
}