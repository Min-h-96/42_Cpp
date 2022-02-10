/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Base.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: minchoi <minchoi@student.42seoul.kr>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/10 13:21:51 by minchoi           #+#    #+#             */
/*   Updated: 2022/02/10 14:50:47 by minchoi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Base.hpp"

Base::~Base() {}

Base*	generate(void) {
	Base*	p;
	int		i = rand() % 3;
	std::cout << i << " = ";
	switch (i) {
	case 0:
		p = new A();
		std::cout << "A is generated." << std::endl;
		break;
	case 1:
		p = new B();
		std::cout << "B is generated." << std::endl;
		break;
	case 2:
		p = new C();
		std::cout << "C is generated." << std::endl;
		break;
	}
	return p;
}

void	identify(Base* p) {
	if (dynamic_cast<A*>(p))
		std::cout << "A" << std::endl;
	if (dynamic_cast<B*>(p))
		std::cout << "B" << std::endl;
	if (dynamic_cast<C*>(p))
		std::cout << "C" << std::endl;
}

void	identify(Base& p) {
	A	a;
	B	b;
	C	c;
	
	try {
		a = dynamic_cast<A&>(p);
		std::cout << "A" << std::endl;
	} catch (std::exception& e) {
		try {
			b = dynamic_cast<B&>(p);
			std::cout << "B" << std::endl;
		} catch (std::exception& e) {
			try {
				c = dynamic_cast<C&>(p);
				std::cout << "C" << std::endl;
			} catch (std::exception& e) {
				std::cerr << e.what() << std::endl;
			}
		}
	}
	
}