/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: minchoi <minchoi@student.42seoul.kr>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/15 16:02:31 by minchoi           #+#    #+#             */
/*   Updated: 2021/12/07 13:04:16 by minchoi          ###   ########.fr       */
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

void	test_deepcopy(void) {
	const Cat* c1 = new Cat();
	Cat* c2 = new Cat();
	const Dog* d1 = new Dog();
	Dog* d2 = new Dog();
	std::cout << std::endl;

	*c2 = *c1;
	c2->getBrain()->setIdea(1, "change no.1 idea.");
	std::cout << "Idea 1 of c1 : "  << c1->getBrain()->getIdea(1) << std::endl;
	std::cout << "Idea 1 of c2 : "  << c2->getBrain()->getIdea(1) << std::endl;
	std::cout << std::endl;

	*d2 = *d1;
	d2->getBrain()->setIdea(1, "I want to eat a snack");
	std::cout << "Idea 1 of d1 : "  << d1->getBrain()->getIdea(1) << std::endl;
	std::cout << "Idea 1 of d2 : "  << d2->getBrain()->getIdea(1) << std::endl;
	std::cout << std::endl;

	delete c1;
	delete c2;
	delete d1;
	delete d2;
}

void	test_array(void) {
	Animal*	meta[20];

	for (int i=0; i<20; i++) {
		if (i % 2)
			meta[i] = new Cat();
		else
			meta[i] = new Dog();
	}

	for (int i=0; i<20; i++)
		delete meta[i];
}

int main( void ) {
	std::cout << "-----Test Subject-----" << std::endl;
	test_subject();
	std::cout << std::endl;

	std::cout << "-----Test Deepcopy-----" << std::endl;
	test_deepcopy();
	std::cout << std::endl;
	
	std::cout << "-----Test Array-----" << std::endl;
	test_array();
	while (1);
}