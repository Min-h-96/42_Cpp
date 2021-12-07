/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Brain.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: minchoi <minchoi@student.42seoul.kr>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/06 14:46:54 by minchoi           #+#    #+#             */
/*   Updated: 2021/12/06 16:20:54 by minchoi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef BRAIN_HPP
# define BRAIN_HPP

# include <iostream>
# include <string>
# include <iomanip>

# define W_SIZE	12
# define B_NAME "Brain"
# define B_SIZE	100

class Brain {
	private:
		std::string	ideas[B_SIZE];
	public:
		Brain();
		~Brain();
		Brain(const Brain& brain);
		Brain&		operator=(const Brain& brain);

		std::string	getIdea(const int& i) const;
		void		setIdea(const int& i, const std::string& idea);
};

#endif