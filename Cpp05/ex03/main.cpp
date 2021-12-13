/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: minchoi <minchoi@student.42seoul.kr>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/15 16:02:31 by minchoi           #+#    #+#             */
/*   Updated: 2021/12/13 12:12:19 by minchoi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Intern.hpp"

void	test_simple(const std::string& name, const std::string& target) {
	Intern i;

	try {
		Form* f = i.makeForm(name, target);
		std::cout << *f << std::endl;
		delete f;
	} catch (std::exception& e) {
		std::cerr << "Intern cannot make <" << target
				<< "> because <" << e.what() << ">" << std::endl;
	}
}

void test_useful(const std::string& name, const std::string& target) {
	Intern	 	i;
	Bureaucrat	b("minchoi", 1);

	try {
		Form* f = i.makeForm(name, target);
		std::cout << *f << std::endl;
		b.signForm(*f);
		b.executeForm(*f);
		delete f;
	} catch (std::exception& e) {
		std::cerr << "Intern cannot make <" << target
				<< "> because <" << e.what() << ">" << std::endl;
	}
}

int main( void ) {
	test_simple("shrubbery creation", "test1");
	test_simple("robotomy request", "test2");
	test_simple("president pardon", "test3");
	std::cout << std::endl;

	test_simple("siadjfdfsiejf", "test4");
	std::cout << std::endl;

	test_useful("shrubbery creation", "test1");
	test_useful("robotomy request", "test2");
	test_useful("president pardon", "test3");
}