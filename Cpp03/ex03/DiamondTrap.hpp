/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   DiamondTrap.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: minchoi <minchoi@student.42seoul.kr>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/30 14:15:12 by minchoi           #+#    #+#             */
/*   Updated: 2021/11/30 15:06:57 by minchoi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef DIAMONDTRAP_HPP
# define DIAMONDTRAP_HPP

#include "ScavTrap.hpp"
#include "FragTrap.hpp"

class DiamondTrap: public ScavTrap, public FragTrap {
	private:
		std::string name;
	public:
		DiamondTrap();
		~DiamondTrap();
		DiamondTrap( std::string n);
		DiamondTrap(DiamondTrap const& dia);
		// DiamondTrap&	operator=( DiamondTrap const& Diamond);
		void	attack(std::string const & target);
		void	whoAmI(void);
};

#endif