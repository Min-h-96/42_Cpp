/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanA.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: minchoi <minchoi@student.42seoul.kr>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/15 16:38:22 by minchoi           #+#    #+#             */
/*   Updated: 2021/11/16 00:34:00 by minchoi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef HUMANA_HPP
# define HUMANA_HPP

# include "Weapon.hpp"
# include <iostream>

class HumanA {
	private:
		std::string name;
		Weapon &weapon;
	public:
		HumanA();
		HumanA(std::string name, Weapon& weapon);
		~HumanA();
		const std::string	&getName(void);
		void				attack(void);
};

#endif