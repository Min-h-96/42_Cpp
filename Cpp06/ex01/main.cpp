/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: minchoi <minchoi@student.42seoul.kr>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/10 11:23:27 by minchoi           #+#    #+#             */
/*   Updated: 2022/02/10 12:28:28 by minchoi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Serialize.hpp"

uintptr_t	serialize(Data* ptr) {
	uintptr_t	s_ptr;

	s_ptr = reinterpret_cast<uintptr_t>(ptr);
	return s_ptr;
}

Data*		deserialize(uintptr_t raw) {
	Data*	d_data;

	d_data = reinterpret_cast<Data *>(raw);
	return d_data;
}

int 		main(void) {
	Data		d;
	Data*		nd;
	uintptr_t	ptr;

	memcpy(d.str1, "abcdefg", 8);
	d.i = 4242;
	d.dou = -42.4242;

	ptr = serialize(&d);
	nd = deserialize(ptr);

	std::cout << d.str1 << " " << d.i << " " << d.dou << std::endl;
	std::cout << &(d.str1) << " " << &(d.i) << " " << &(d.dou) << std::endl;
	std::cout << nd->str1 << " " << nd->i << " " << nd->dou << std::endl;
	std::cout << &(nd->str1) << " " << &(nd->i) << " " << &(nd->dou) << std::endl;
}