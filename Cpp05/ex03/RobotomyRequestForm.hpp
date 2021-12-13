/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   RobotomyRequestForm.hpp                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: minchoi <minchoi@student.42seoul.kr>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/11 14:15:41 by minchoi           #+#    #+#             */
/*   Updated: 2021/12/12 21:36:53 by minchoi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ROBOTOMYREQUESTFORM_HPP
# define ROBOTOMYREQUESTFORM_HPP

# include "Form.hpp"
# include <cstdlib>
# include <ctime>

# define R_NAME "RobotomyRequestForm"
# define R_SIGN 72
# define R_EXEC 45

class RobotomyRequestForm: public Form {
	private:
		RobotomyRequestForm();
	public:
		~RobotomyRequestForm();
		RobotomyRequestForm(const std::string& target);
		RobotomyRequestForm(RobotomyRequestForm const & r);
		RobotomyRequestForm&	operator=(RobotomyRequestForm const& r);
		
		void	execute(Bureaucrat const& b) const;
		// Form*	makdRobotomy(const std::string target);
};

#endif