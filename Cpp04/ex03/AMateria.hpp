/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AMateria.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: minchoi <minchoi@student.42seoul.kr>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/07 14:13:46 by minchoi           #+#    #+#             */
/*   Updated: 2021/12/11 15:40:58 by minchoi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef AMATERIA_HPP
# define AMATERIA_HPP

# include <iostream>
# include <string>
# include <iomanip>

# define W_SIZE 40
# define AM_SIZE 4

class ICharacter;

class AMateria {
	protected:
		std::string	type;
	public:
		AMateria();
		virtual ~AMateria();
		AMateria(std::string const& type);
		AMateria(AMateria const& am);
		AMateria& operator=(AMateria const& am);

		std::string const& getType() const;
		virtual AMateria* clone() const = 0;
		virtual void use(ICharacter& target) = 0;
};

#endif