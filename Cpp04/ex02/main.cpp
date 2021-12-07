/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: minchoi <minchoi@student.42seoul.kr>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/15 16:02:31 by minchoi           #+#    #+#             */
/*   Updated: 2021/12/07 13:50:37 by minchoi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Dog.hpp"
#include "Cat.hpp"
#include "Animal.hpp"

void	test_subject(void) {
	const Animal* i = new Cat();
	const Animal* j = new Dog();

	delete j;
	delete i;
}

// void	test_main(void) {
// 	Animal a;
// }

int main( void ) {
	std::cout << "-----Test Subject-----" << std::endl;
	test_subject();
	std::cout << std::endl;

	// std::cout << "-----Test Main-----" << std::endl;
	// test_main();
}