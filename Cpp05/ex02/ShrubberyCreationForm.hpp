/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ShrubberyCreationForm.hpp                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: minchoi <minchoi@student.42seoul.kr>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/11 12:56:27 by minchoi           #+#    #+#             */
/*   Updated: 2021/12/11 13:38:15 by minchoi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SHRUBBERYCREATIONFORM_HPP
# define SHRUBBERYCREATIONFORM_HPP

# include "Form.hpp"
# include <fstream>

# define S_NAME "ShrubberyCreationForm"
# define S_SIGN 145
# define S_EXEC 137

class ShrubberyCreationForm: public Form {
	private:
		ShrubberyCreationForm();
	public:
		~ShrubberyCreationForm();
		ShrubberyCreationForm(const std::string& target);
		ShrubberyCreationForm(ShrubberyCreationForm const& s);
		ShrubberyCreationForm&	operator=(ShrubberyCreationForm const& s);

		void	execute(Bureaucrat const& b) const;
};

#endif