/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bureaucrat.hpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: minchoi <minchoi@student.42seoul.kr>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/10 14:36:58 by minchoi           #+#    #+#             */
/*   Updated: 2021/12/10 15:17:26 by minchoi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef BUREAUCRAT_HPP
# define BUREAUCRAT_HPP

# include <exception>
# include <iostream>
# include <string>

# define MAX_GRADE 1
# define MIN_GRADE 150

class Bureaucrat {
	private:
		const std::string	name;
		int					grade;

		Bureaucrat();
	public:
		~Bureaucrat();
		Bureaucrat(const std::string& name, const int& grade);
		Bureaucrat(Bureaucrat const& b);
		Bureaucrat&	operator=(Bureaucrat const& b);

		class GradeTooHighException: public std::exception {
			public:
				const char* what(void) const throw();
		};
		class GradeTooLowException: public std::exception {
			public:
				const char* what(void) const throw();
		};

		std::string	getName(void) const;
		int			getGrade(void) const;

		void		incrementGrade(void);
		void		decrementGrade(void);
};

std::ostream&	operator<<(std::ostream& o, const Bureaucrat& b);


#endif