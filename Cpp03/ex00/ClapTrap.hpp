/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: minchoi <minchoi@student.42seoul.kr>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/24 21:06:36 by minchoi           #+#    #+#             */
/*   Updated: 2021/11/25 00:41:27 by minchoi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CLAPTRAP_HPP
# define CLAPTRAP_HPP

# include <iostream>
# include <string>

class ClapTrap {
	private:
		std::string name;
		unsigned int hitPoints;
		unsigned int energyPoints;
		unsigned int attackDamage;
	public:
		ClapTrap();
		~ClapTrap();
		ClapTrap(ClapTrap const& trap);
		ClapTrap&	operator=(ClapTrap const& trap);
		ClapTrap(std::string const name);
		void	attack(std::string const& target);
		void	takeDamage(unsigned int amount);
		void	beRepaired(unsigned int amount);
		// getter, setter
		std::string	getName(void) const;
		void	setName(const std::string name);
		unsigned int	getHitPoints(void) const;
		void	setHitPoints(const unsigned int point);
		unsigned int	getEnergyPoints(void) const;
		void	setEnergyPoints(const unsigned int point);
		unsigned int	getAttackDamage(void) const;
		void	setAttackDamage(const unsigned int damage);
};

#endif