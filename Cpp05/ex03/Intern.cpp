/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Intern.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: minchoi <minchoi@student.42seoul.kr>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/11 18:52:22 by minchoi           #+#    #+#             */
/*   Updated: 2022/02/14 00:48:13 by minchoi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Intern.hpp"

Intern::Intern() {}

Intern::~Intern() {}

Intern::Intern(Intern const& i) {
	(void)i;
}

Intern&		Intern::operator=(Intern const& i) {
	(void)i;
	return (*this);
}

Form*		Intern::makeForm(const std::string& type, const std::string& target) {
	std::string types[3] = {
		"shrubbery creation",
		"robotomy request",
		"president pardon"
	};
	Form*	(Intern::* func[3])(const std::string) = {
		&Intern::makeShrubbery,
		&Intern::makeRobotomy,
		&Intern::makePresident
	};

	for (int i=0; i<3; i++) {
		if (types[i] == type) {
			Form* form = (this->*func[i])(target);
			std::cout << "Intern creates " << form->getName() << std::endl;
			return (form);
		}
	}
	throw Intern::NoMatchedFormTypeException();
}

Form*		Intern::makeShrubbery(const std::string target) {
	return (new ShrubberyCreationForm(target));
}

Form*		Intern::makeRobotomy(const std::string target) {
	return (new RobotomyRequestForm(target));
}

Form*		Intern::makePresident(const std::string target) {
	return (new PresidentialPardonForm(target));
}

const char*	Intern::NoMatchedFormTypeException::what(void) const throw() {
	return ("Type doesn't match any form.");
}