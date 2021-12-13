/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Intern.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: minchoi <minchoi@student.42seoul.kr>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/11 18:40:35 by minchoi           #+#    #+#             */
/*   Updated: 2021/12/12 22:54:48 by minchoi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef INTERN_HPP
# define INTERN_HPP

# include "ShrubberyCreationForm.hpp"
# include "RobotomyRequestForm.hpp"
# include "PresidentialPardonForm.hpp"

class Intern {
	public:
		Intern();
		~Intern();
		Intern(Intern const& i);
		Intern&	operator=(Intern const& i);

		Form*	makeForm(const std::string& type, const std::string& target);
		Form*	makdShrubbery(const std::string target);
		Form*	makdRobotomy(const std::string target);
		Form*	makePresident(const std::string target);

		class NoMatchedFormTypeException: public std::exception {
			public:
				const char* what(void) const throw();
		};
};

#endif