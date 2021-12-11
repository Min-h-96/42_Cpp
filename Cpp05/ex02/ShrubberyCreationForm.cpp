/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ShrubberyCreationForm.cpp                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: minchoi <minchoi@student.42seoul.kr>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/11 13:00:47 by minchoi           #+#    #+#             */
/*   Updated: 2021/12/11 19:25:34 by minchoi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ShrubberyCreationForm.hpp"

ShrubberyCreationForm::ShrubberyCreationForm(): Form() {}

ShrubberyCreationForm::~ShrubberyCreationForm() {}

ShrubberyCreationForm::ShrubberyCreationForm(const std::string& target)
	: Form(target, S_SIGN, S_EXEC) {}

ShrubberyCreationForm::ShrubberyCreationForm(ShrubberyCreationForm const& s)
	: Form(s) {
}

ShrubberyCreationForm&	ShrubberyCreationForm::operator=(ShrubberyCreationForm const &s) {
	return (*(dynamic_cast<ShrubberyCreationForm*>(&(Form::operator=(s)))));
}

void	ShrubberyCreationForm::execute(Bureaucrat const& b) const {
	executable(b);
	
	std::string		filename = "<" + this->getName() + ">_shrubbery";
	std::ofstream	out(filename.c_str());
	out << "                    " << std::endl
		<< "          &&& &&  & &&" << std::endl
		<< "      && &\\/&\\|& ()|/ @, &&" << std::endl
		<< "      &\\/(/&/&||/& /_/)_&/_&" << std::endl
		<< "   &() &\\/&|()|/&\\/ '%\" & ()" << std::endl
		<< "  &_\\_&&_\\ |& |&&/&__%_/_& &&" << std::endl
		<< "&&   && & &| &| /& & % ()& /&&" << std::endl
		<< "()&_---()&\\&\\|&&-&&--%---()~" << std::endl
		<< "     &&     \\|||" << std::endl
		<< "             |||" << std::endl
		<< "             |||" << std::endl
		<< "             |||" << std::endl
		<< "       , -=-~  .-^- _" << std::endl;
	out.close();
}