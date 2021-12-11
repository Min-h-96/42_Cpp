/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: minchoi <minchoi@student.42seoul.kr>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/15 16:02:31 by minchoi           #+#    #+#             */
/*   Updated: 2021/12/11 12:40:03 by minchoi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Form.hpp"

void	makeForm(const std::string& name, const int& signGrade, const int& execGrade) {
	try {
		Form(name, signGrade, execGrade);
	} catch (std::exception& e) {
		std::cout << e.what() << std::endl;
	}
}

int main( void ) {
	Bureaucrat	b1("minchoi", 1);
	Bureaucrat	b2("hynam", 75);
	Form		f1("f1", 5, 75);
	Form		f2(f1);
	Form		f3("f3", 50, 75);

	std::cout << f1 << std::endl;
	std::cout << f2 << std::endl;
	std::cout << f3 << std::endl;
	std::cout << std::endl;

	b1.signForm(f1);
	b2.signForm(f3);
	std::cout << f1 << std::endl;
	std::cout << f2 << std::endl;
	std::cout << f3 << std::endl;
	std::cout << std::endl;

	makeForm("test1", 0, 50);
	makeForm("test1", 50, 0);
	makeForm("test1", 151, 25);
	makeForm("test1", 25, 151);
}