/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bureaucrat.cpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: minchoi <minchoi@student.42seoul.kr>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/10 14:36:56 by minchoi           #+#    #+#             */
/*   Updated: 2021/12/10 15:30:24 by minchoi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"

Bureaucrat::Bureaucrat() {}

Bureaucrat::~Bureaucrat() {}

Bureaucrat::Bureaucrat(const std::string& name, const int& grade)
	: name(name), grade(grade) {
	if (this->grade < MAX_GRADE)
		throw GradeTooHighException();
	if (this->grade > MIN_GRADE)
		throw GradeTooLowException();
}

Bureaucrat::Bureaucrat(Bureaucrat const& b)
	: name(b.getName()), grade(b.getGrade()) {
	if (this->grade < MAX_GRADE)
		throw GradeTooHighException();
	if (this->grade > MIN_GRADE)
		throw GradeTooLowException();
}

Bureaucrat&	Bureaucrat::operator=(Bureaucrat const& b) {
	if (this != &b) {
		*(const_cast<std::string*>(&(this->name))) = b.getName();
		this->grade = b.getGrade();
	}
	return (*this);
}

const char*	Bureaucrat::GradeTooHighException::what(void) const throw() {
	return ("Bureaucrat's grade is too high.");
}

const char*	Bureaucrat::GradeTooLowException::what(void) const throw() {
	return ("Bureaucrat's grade is too low.");
}

std::string	Bureaucrat::getName(void) const {
	return (this->name);
}

int			Bureaucrat::getGrade(void) const {
	return (this->grade);
}

void		Bureaucrat::incrementGrade(void) {
	if (this->grade == MAX_GRADE)
		throw GradeTooHighException();
	this->grade--;
}

void		Bureaucrat::decrementGrade(void) {
	if (this->grade == MIN_GRADE)
		throw GradeTooLowException();
	this->grade++;
}

std::ostream&	operator<<(std::ostream& o, const Bureaucrat& b) {
	return (o << "[" << b.getName() << "], grade is " << b.getGrade());
}