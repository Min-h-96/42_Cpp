/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Base.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: minchoi <minchoi@student.42seoul.kr>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/10 13:16:27 by minchoi           #+#    #+#             */
/*   Updated: 2022/02/10 14:36:30 by minchoi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef BASE_HPP
# define BASE_HPP

# include <iostream>
# include <exception>

class Base {
	public:
		virtual ~Base();
};

class A : public Base {
	
};

class B : public Base {

};

class C : public Base {

};

Base*	generate(void);
void	identify(Base* p);
void	identify(Base& p);

#endif