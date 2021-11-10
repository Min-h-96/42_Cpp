/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contact.hpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: minchoi <minchoi@student.42seoul.kr>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/10 16:21:36 by minchoi           #+#    #+#             */
/*   Updated: 2021/11/11 00:39:19 by minchoi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CONTACT_HPP
# define CONTACT_HPP

#include <iostream>
#include <string>
#include <iomanip>

class Contact
{
	private:
		int index;
		std::string info[5];
	public:
		Contact();
		~Contact();
		int		setInfo(int index);
		void	getInfo(void);
		void	setIndex(int index);
		std::string	getIndex(void);
		void	getHeaderInfo();
};

#endif