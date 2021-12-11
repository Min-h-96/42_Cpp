/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PresidentialPardonForm.hpp                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: minchoi <minchoi@student.42seoul.kr>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/11 15:55:52 by minchoi           #+#    #+#             */
/*   Updated: 2021/12/11 16:02:23 by minchoi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PRESIDENTIALPARDONFORM_HPP
# define PRESIDENTIALPARDONFORM_HPP

# include "Form.hpp"

# define P_NAME "PresidentialPardonForm"
# define P_SIGN 25
# define P_EXEC 5

class PresidentialPardonForm: public Form {
	private:
		PresidentialPardonForm();
	public:
		~PresidentialPardonForm();
		PresidentialPardonForm(const std::string& target);
		PresidentialPardonForm(PresidentialPardonForm const& p);
		PresidentialPardonForm&	operator=(PresidentialPardonForm const& p);

		void	execute(Bureaucrat const& b) const;
};

#endif