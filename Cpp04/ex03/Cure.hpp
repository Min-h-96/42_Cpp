/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cure.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: minchoi <minchoi@student.42seoul.kr>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/07 14:59:35 by minchoi           #+#    #+#             */
/*   Updated: 2021/12/07 16:19:13 by minchoi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef Cure_HPP
# define Cure_HPP

# include "AMateria.hpp"
# include "ICharacter.hpp"

# define C_NAME "cure"

class Cure: public AMateria {
	public:
		Cure();
		~Cure();
		Cure(std::string const& type);
		Cure(Cure const& i);
		Cure& operator=(Cure const& i);

		AMateria*	clone() const;
		void		use(ICharacter& target);
};

#endif