/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   MateriaSource.hpp                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: minchoi <minchoi@student.42seoul.kr>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/07 16:44:56 by minchoi           #+#    #+#             */
/*   Updated: 2021/12/10 13:42:27 by minchoi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef MATERIASOURCE_HPP
# define MATERIASOURCE_HPP

# include "IMateriaSource.hpp"
# include <iostream>
# include <iomanip>

class MateriaSource: public IMateriaSource {
	private:
		AMateria*	am[AM_SIZE];
	public:
		MateriaSource();
		~MateriaSource();
		MateriaSource(MateriaSource const& ms);
		MateriaSource	operator=(MateriaSource const& ms);

		AMateria const*	getMateria(int idx) const;
		void 			learnMateria(AMateria* am);
		AMateria*		createMateria(std::string const & type);
};

#endif