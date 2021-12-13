/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Form.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: minchoi <minchoi@student.42seoul.kr>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/11 11:34:07 by minchoi           #+#    #+#             */
/*   Updated: 2021/12/11 14:49:14 by minchoi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FORM_HPP
# define FORM_HPP

# include "Bureaucrat.hpp"
# include <string>
# include <exception>
# include <iostream>

# define MAX_GRADE 1
# define MIN_GRADE 150

class Form {
	private:
		const std::string	name;
		bool				sign;
		const int			signGrade;
		const int			execGrade;
	public:
		Form();
		virtual ~Form();
		Form(const std::string& name, const int& signGrade, const int& execGrade);
		Form(Form const& f);
		Form&	operator=(Form const& f);

		class GradeTooHighException: public std::exception {
			public:
				const char* what(void) const throw();
		};
		class GradeTooLowException: public std::exception {
			public:
				const char* what(void) const throw();
		};
		class NoSignatureException: public std::exception {
			public:
				const char* what(void) const throw();
		};

		std::string	getName(void) const;
		bool			getSign(void) const;
		int			getSignGrade(void) const;
		int			getExecGrade(void) const;

		void				beSigned(Bureaucrat const& b);
		void				executable(Bureaucrat const& b) const;
		virtual void		execute(Bureaucrat const& b) const = 0;
};

std::ostream&	operator<<(std::ostream& o, const Form& f);

#endif