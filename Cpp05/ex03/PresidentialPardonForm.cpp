/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PresidentialPardonForm.cpp                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: minchoi <minchoi@student.42seoul.kr>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/11 16:00:29 by minchoi           #+#    #+#             */
/*   Updated: 2021/12/12 21:37:13 by minchoi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PresidentialPardonForm.hpp"

PresidentialPardonForm::PresidentialPardonForm(): Form() {}

PresidentialPardonForm::~PresidentialPardonForm() {}

PresidentialPardonForm::PresidentialPardonForm(const std::string& target)
	: Form(target, P_SIGN, P_EXEC) {}

PresidentialPardonForm::PresidentialPardonForm(PresidentialPardonForm const& p)
	: Form(p) {}

PresidentialPardonForm&	PresidentialPardonForm::operator=(PresidentialPardonForm const& p) {
	return (*(dynamic_cast<PresidentialPardonForm*>(&(Form::operator=(p)))));
}

void	PresidentialPardonForm::execute(Bureaucrat const& b) const {
	executable(b);

	std::cout << "<" << this->getName() << "> has been pardoned by Zafod Beeblebrox" << std::endl;
}

// Form*	PresidentialPardonForm::makePresident(const std::string target) {
// 	return (new PresidentialPardonForm(target));
// }