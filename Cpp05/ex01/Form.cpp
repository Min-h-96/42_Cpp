/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Form.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: minchoi <minchoi@student.42seoul.kr>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/11 11:43:34 by minchoi           #+#    #+#             */
/*   Updated: 2021/12/11 12:35:01 by minchoi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Form.hpp"

Form::Form()
	: signGrade(0), execGrade(0) {}

Form::~Form() {}

Form::Form(const std::string& name, const int& signGrade, const int& execGrade)
	: name(name), sign(false), signGrade(signGrade), execGrade(execGrade) {
	if (this->signGrade < MAX_GRADE || this->execGrade < MAX_GRADE)
		throw GradeTooHighException();
	if (this->signGrade > MIN_GRADE || this->execGrade > MIN_GRADE)
		throw GradeTooLowException();
}

Form::Form(Form const& f)
	: name(f.getName()), sign(false), signGrade(f.getSignGrade()), execGrade(f.getExecGrade()) {
	if (this->signGrade < MAX_GRADE || this->execGrade < MAX_GRADE)
		throw GradeTooHighException();
	if (this->signGrade > MIN_GRADE || this->execGrade > MIN_GRADE)
		throw GradeTooLowException();
}

Form&	Form::operator=(Form const& f) {
	if (this != &f) {
		*(const_cast<std::string*>(&(this->name))) = f.getName();
		this->sign = f.getSign();
		*(const_cast<int*>(&(this->signGrade))) = f.getSignGrade();
		*(const_cast<int*>(&(this->execGrade))) = f.getExecGrade();
	}
	return (*this);
}

const char*	Form::GradeTooHighException::what(void) const throw() {
	return ("Form's grade is too high.");
}

const char*	Form::GradeTooLowException::what(void) const throw() {
	return ("Form's grade is too low.");
}

const std::string	Form::getName(void) const {
	return (this->name);
}

const bool			Form::getSign(void) const {
	return (this->sign);
}

const int			Form::getSignGrade(void) const {
	return (this->signGrade);
}

const int			Form::getExecGrade(void) const {
	return (this->execGrade);
}

void				Form::beSigned(Bureaucrat const& b) {
	if (b.getGrade() < this->signGrade)
		this->sign = true;
	else
		throw Form::GradeTooLowException();
}

std::ostream&	operator<<(std::ostream& o, const Form& f) {
	return (o << "<" << f.getName() << ">"
			<< ", form sign <" << f.getSign() << ">"
			<< ", sign grade <" << f.getSignGrade() << ">"
			<< ", exec grade <" << f.getExecGrade() << ">");
}