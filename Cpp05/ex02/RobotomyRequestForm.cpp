/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   RobotomyRequestForm.cpp                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: minchoi <minchoi@student.42seoul.kr>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/11 14:24:40 by minchoi           #+#    #+#             */
/*   Updated: 2021/12/11 15:55:43 by minchoi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "RobotomyRequestForm.hpp"

RobotomyRequestForm::RobotomyRequestForm(): Form() {}

RobotomyRequestForm::~RobotomyRequestForm() {}

RobotomyRequestForm::RobotomyRequestForm(const std::string& target)
	: Form(target, R_SIGN, R_EXEC) {}

RobotomyRequestForm::RobotomyRequestForm(RobotomyRequestForm const& r)
	: Form(r) {}

RobotomyRequestForm&	RobotomyRequestForm::operator=(RobotomyRequestForm const& r) {
	return (*(dynamic_cast<RobotomyRequestForm*>(&(Form::operator=(r)))));
}

void	RobotomyRequestForm::execute(Bureaucrat const& b) const {
	executable(b);

	srand((unsigned int)time(NULL));
	int num = rand() % 10;

	if (num >= 5) {
		std::cout << "Drrrrrrrrr....!!!" << std::endl;
		std::cout << "<" << this->getName() << "> has been robotomized successfully." << std::endl;
	}
	else
		std::cout << "<" << this->getName() << "> failed to be robotomized." << std::endl;
}