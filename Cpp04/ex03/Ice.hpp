/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Ice.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: minchoi <minchoi@student.42seoul.kr>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/07 14:40:44 by minchoi           #+#    #+#             */
/*   Updated: 2021/12/07 16:19:03 by minchoi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ICE_HPP
# define ICE_HPP

# include "AMateria.hpp"
# include "ICharacter.hpp"

# define I_NAME "ice"

class Ice: public AMateria {
	public:
		Ice();
		~Ice();
		Ice(std::string const& type);
		Ice(Ice const& i);
		Ice& operator=(Ice const& i);

		AMateria*	clone() const;
		void		use(ICharacter& target);
};

#endif