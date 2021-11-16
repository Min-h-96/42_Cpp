/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanB.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: minchoi <minchoi@student.42seoul.kr>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/15 16:38:25 by minchoi           #+#    #+#             */
/*   Updated: 2021/11/15 23:16:41 by minchoi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef HUMANB_HPP
# define HUMANB_HPP

# include "Weapon.hpp"
# include <iostream>

class HumanB {
	private:
		std::string name;
		Weapon *weapon;
	public:
		HumanB();
		HumanB(std::string name);
		~HumanB();
		void				setWeapon(Weapon &weapon);
		const std::string	&getName(void);
		void				attack(void);
};

#endif