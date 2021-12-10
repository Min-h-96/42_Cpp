/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Character.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: minchoi <minchoi@student.42seoul.kr>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/07 14:11:44 by minchoi           #+#    #+#             */
/*   Updated: 2021/12/10 13:24:25 by minchoi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CHARACTER_HPP
# define CHARACTER_HPP

# include "ICharacter.hpp"

class Character: public ICharacter {
	private:
		AMateria*	inven[AM_SIZE];
		std::string	name;
	public:
		Character();
		~Character();
		Character(std::string const& name);
		Character(Character const& c);
		Character& operator=(Character const& c);

		AMateria const*		getInven(int idx) const;
		std::string const&	getName(void) const;
		void 				equip(AMateria* m);
		void 				unequip(int idx);
		void 				use(int idx, ICharacter& target);
};

#endif