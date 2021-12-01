/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: minchoi <minchoi@student.42seoul.kr>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/25 00:45:21 by minchoi           #+#    #+#             */
/*   Updated: 2021/11/30 21:02:02 by minchoi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SCAVTRAP_HPP
# define SCAVTRAP_HPP

# include "ClapTrap.hpp"

class ScavTrap: public ClapTrap {
	public:
		ScavTrap();
		~ScavTrap();
		ScavTrap(std::string const name);
		ScavTrap(ScavTrap const& scav);
		ScavTrap&	operator=(ScavTrap const& scav);
		void	attack(std::string const& target);
		void	takeDamage(unsigned int amount);
		void	beRepaired(unsigned int amount);
		void	guardGate(void);
};

#endif