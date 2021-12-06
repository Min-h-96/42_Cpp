/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: minchoi <minchoi@student.42seoul.kr>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/01 18:15:48 by minchoi           #+#    #+#             */
/*   Updated: 2021/12/06 13:26:46 by minchoi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef DOG_HPP
# define DOG_HPP

# include "Animal.hpp"

# define D_NAME "Dog"
# define WD_NAME "WrongDog"

class Dog: public Animal {
	public:
		Dog();
		~Dog();
		Dog(Dog const& dog);
		Dog&	operator=(Dog const& dog);
		
		void	makeSound(void) const;
};

#endif