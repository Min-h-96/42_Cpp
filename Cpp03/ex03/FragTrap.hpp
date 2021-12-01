/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: minchoi <minchoi@student.42seoul.kr>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/25 00:45:21 by minchoi           #+#    #+#             */
/*   Updated: 2021/11/30 21:01:22 by minchoi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FRAGTRAP_HPP
# define FRAGTRAP_HPP

# include "ClapTrap.hpp"

class FragTrap: public virtual ClapTrap {
	public:
		FragTrap();
		~FragTrap();
		FragTrap(std::string const name);
		FragTrap(FragTrap const& frag);
		FragTrap&	operator=(FragTrap const& frag);
		void	attack(std::string const& target);
		void	takeDamage(unsigned int amount);
		void	beRepaired(unsigned int amount);
		void	highFiveGuys(void);
};

#endif