/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: minchoi <minchoi@student.42seoul.kr>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/01 18:15:31 by minchoi           #+#    #+#             */
/*   Updated: 2021/12/06 13:33:45 by minchoi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CAT_HPP
# define CAT_HPP

# include "Animal.hpp"

# define C_NAME "Cat"
# define WC_NAME "WrongCat"

class Cat: public Animal {
	public:
		Cat();
		~Cat();
		Cat(const Cat& cat);
		Cat&	operator=(const Cat& cat);
		
		void	makeSound(void) const;
};

class WrongCat: public WrongAnimal {
	public:
		WrongCat();
		~WrongCat();
		WrongCat(const WrongCat& cat);
		WrongCat&	operator=(const WrongCat& cat);
		
		void		makeSound(void) const;
};

#endif