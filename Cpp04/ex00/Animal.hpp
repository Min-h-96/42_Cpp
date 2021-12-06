/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: minchoi <minchoi@student.42seoul.kr>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/30 20:49:04 by minchoi           #+#    #+#             */
/*   Updated: 2021/12/06 13:26:37 by minchoi          ###   ########.fr       */
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
		Animal&			operator=(const Animal& animal);
		
		std::string		getType(void) const;
		void			setTyep(const std::string& animal);
		virtual void	makeSound(void) const;
};

class WrongAnimal {
	protected:
		std::string type;
	public:
		WrongAnimal();
		~WrongAnimal();
		WrongAnimal(const WrongAnimal& animal);
		WrongAnimal&	operator=(const WrongAnimal& animal);
		
		std::string	getType(void) const;
		void		setTyep(const std::string& animal);
		void		makeSound(void) const;
};

#endif