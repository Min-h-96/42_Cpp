/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: minchoi <minchoi@student.42seoul.kr>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/11 14:11:00 by minchoi           #+#    #+#             */
/*   Updated: 2022/02/11 14:51:53 by minchoi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "mutantstack.hpp"
#include "mutantstack.cpp"
#include <list>

int main(void) {
	{
		std::cout << "Default Test" << std::endl;
		MutantStack<int> mstack;
		mstack.push(5);
		mstack.push(17);
		std::cout << mstack.top() << std::endl;
		mstack.pop();
		std::cout << mstack.size() << std::endl;
		mstack.push(3);
		mstack.push(5);
		mstack.push(737);
		mstack.push(0);
		MutantStack<int>::iterator it = mstack.begin();
		MutantStack<int>::iterator ite = mstack.end();
		++it;
		--it;
		while (it != ite)
		{
		std::cout << *it << std::endl;
		++it;
		}
		std::stack<int> s(mstack);
	}
	std::cout << std::endl;
	{
		std::cout << "Replace MutantStack to std::list Test" << std::endl;
		MutantStack<int> mstack;
		mstack.push(42);
		mstack.push(424);
		std::cout << mstack.top() << std::endl;
		mstack.pop();
		std::cout << mstack.size() << std::endl;
		mstack.push(4242);
		mstack.push(424242);
		mstack.push(42424);
		mstack.push(0);
		std::cout << "Mutant Stack" << std::endl;
		MutantStack<int>::iterator it = mstack.begin();
		MutantStack<int>::iterator ite = mstack.end();
		++it;
		--it;
		while (it != ite) {
			std::cout << *it << std::endl;
			++it;
		}
		std::cout << std::endl;

		std::list<int> l(mstack.begin(), mstack.end());
		std::list<int>::iterator lit = l.begin();
		std::list<int>::iterator lite = l.end();
		while (lit != lite) {
			std::cout << *lit << std::endl;
			++lit;
		}
	}
	return 0;
}