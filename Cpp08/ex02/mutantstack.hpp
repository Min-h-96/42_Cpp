/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   mutantstack.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: minchoi <minchoi@student.42seoul.kr>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/11 14:10:46 by minchoi           #+#    #+#             */
/*   Updated: 2022/02/21 14:05:44 by minchoi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef MUTANTSTACK_HPP
# define MUTANTSTACK_HPP

# include <iostream>
# include <stack>

template <typename T>
class MutantStack : public std::stack<T> {
	public:
		MutantStack();
		~MutantStack();
		MutantStack(const MutantStack& mstack);
		MutantStack<T>&	operator=(const MutantStack& mstack);

		typedef typename std::stack<T>::container_type::iterator iterator;
		iterator	begin();
		iterator	end();
};

template <typename T>
MutantStack<T>::MutantStack() : std::stack<T>() {}

template <typename T>
MutantStack<T>::MutantStack(const MutantStack<T>& mstack) : std::stack<T>(mstack) {}

template <typename T>
MutantStack<T>::~MutantStack() {}

template <typename T>
MutantStack<T>& MutantStack<T>::operator=(const MutantStack<T>& mstack) {
	if (this == &mstack)
		return *this;
	this->c = mstack.c;
	return *this;
}

template <typename T>
typename MutantStack<T>::iterator	MutantStack<T>::begin(void) {
	return this->c.begin();
}

template <typename T>
typename MutantStack<T>::iterator	MutantStack<T>::end(void) {
	return this->c.end();
}

#endif