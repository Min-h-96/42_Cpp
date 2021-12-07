/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: minchoi <minchoi@student.42seoul.kr>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/30 20:49:04 by minchoi           #+#    #+#             */
/*   Updated: 2021/12/06 15:56:06 by minchoi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ANIMAL_HPP
# define ANIMAL_HPP

# include <iostream>
# include <string>
# include <iomanip>

# define W_SIZE 12
# define A_NAME "Animal"
# define WA_NAME "WrongAnimal"

class Animal {
	protected:
		std::string type;
	public:
		Animal();
		virtual ~Animal();
		Animal(const Animal& animal);
		virtual Animal&	operator=(const Animal& animal);
		
		std::string		getType(void) const;
		void			setTyep(const std::string& animal);
		virtual void	makeSound(void) const;
};

#endif