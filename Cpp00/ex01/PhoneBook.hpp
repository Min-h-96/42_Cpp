/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: minchoi <minchoi@student.42seoul.kr>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/10 16:25:55 by minchoi           #+#    #+#             */
/*   Updated: 2021/11/11 00:40:47 by minchoi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PHONEBOOK_HPP
# define PHONEBOOK_HPP

# include "Contact.hpp"
# include <limits>

class Phonebook
{
	private:
		int		amount;
		int		oldest;
		Contact contact[8];
	public:
		Phonebook();
		~Phonebook();
		void	replaceOldestContact(void);
		void	addContact(void);
		void	showContactHeader(void);
		void	getContactList(void);
};

#endif