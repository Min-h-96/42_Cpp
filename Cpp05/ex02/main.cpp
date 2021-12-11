/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: minchoi <minchoi@student.42seoul.kr>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/15 16:02:31 by minchoi           #+#    #+#             */
/*   Updated: 2021/12/11 16:14:00 by minchoi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ShrubberyCreationForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "PresidentialPardonForm.hpp"

int main( void ) {
	Bureaucrat	b1("minchoi", 1);
	Bureaucrat	b2("hynam", 50);
	Bureaucrat	b3("hyungyyo", 140);
	Bureaucrat	b4("gkim", 3);
	
	Form* f1 = new ShrubberyCreationForm("Tree");
	std::cout << *f1 << std::endl;
	b2.executeForm(*f1);
	b1.signForm(*f1);
	std::cout << *f1 << std::endl;
	b3.executeForm(*f1);
	b2.executeForm(*f1);
	std::cout << std::endl;

	Form* f2 = new RobotomyRequestForm("Robot");
	std::cout << *f2 << std::endl;
	b2.executeForm(*f2);
	b2.signForm(*f2);
	std::cout << *f2 << std::endl;
	b2.executeForm(*f2);
	b4.executeForm(*f2);
	std::cout << std::endl;

	Form* f3 = new PresidentialPardonForm("Pardon");
	std::cout << *f3 << std::endl;
	b2.executeForm(*f3);
	b4.signForm(*f3);
	std::cout << *f3 << std::endl;
	b2.executeForm(*f3);
	b4.executeForm(*f3);
	std::cout << std::endl;

	delete f1;
	delete f2;
	delete f3;
}