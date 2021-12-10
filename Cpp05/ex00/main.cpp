/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: minchoi <minchoi@student.42seoul.kr>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/15 16:02:31 by minchoi           #+#    #+#             */
/*   Updated: 2021/12/10 15:59:21 by minchoi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"

void	changeGrade(Bureaucrat& b, void (Bureaucrat::*f)(void)) {
	try {
		(b.*f)();
		std::cout << b << std::endl;
	} catch (std::exception& e) {
		std::cout << e.what() << std::endl;
	}
}

void	makeBureaucrat(const std::string& name, const int& grade) {
	try {
		Bureaucrat b(name, grade);
		std::cout << b << std::endl;
	} catch (std::exception& e) {
		std::cout << e.what() << std::endl;
	}
}

int main( void ) {
	Bureaucrat b1("minchoi", 1);
	Bureaucrat b2("hynam", 150);

	std::cout << b1 << std::endl;
	std::cout << b2 << std::endl;
	changeGrade(b1, &Bureaucrat::incrementGrade);
	changeGrade(b2, &Bureaucrat::decrementGrade);
	std::cout << std::endl;

	makeBureaucrat("minchoi", 0);
	makeBureaucrat("minchoi", -1);
	makeBureaucrat("minchoi", 151);
	makeBureaucrat("minchoi", 75);
	std::cout << std::endl;
	
	changeGrade(b1, &Bureaucrat::decrementGrade);
	changeGrade(b2, &Bureaucrat::incrementGrade);
	std::cout << b1 << std::endl;
	std::cout << b2 << std::endl;
}