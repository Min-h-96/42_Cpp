/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: minchoi <minchoi@student.42seoul.kr>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/01 18:15:31 by minchoi           #+#    #+#             */
/*   Updated: 2021/12/06 16:44:42 by minchoi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CAT_HPP
# define CAT_HPP

# include "Animal.hpp"
# include "Brain.hpp"

# define C_NAME "Cat"
# define WC_NAME "WrongCat"

class Cat: public Animal {
	private:
		Brain* brain;
	public:
		Cat();
		~Cat();
		Cat(const Cat& cat);
		Cat&	operator=(const Cat& cat);
		
		void	makeSound(void) const;
		Brain*	getBrain(void) const;
};

#endif