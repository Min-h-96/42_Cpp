/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: minchoi <minchoi@student.42seoul.kr>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/11 12:28:44 by minchoi           #+#    #+#             */
/*   Updated: 2022/02/11 14:06:17 by minchoi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "span.hpp"

int main(void) {
	{
		std::cout << "Default Test" << std::endl;
		Span sp = Span(5);

		sp.addNumber(5);
		sp.addNumber(3);
		sp.addNumber(17);
		sp.addNumber(9);
		sp.addNumber(11);
		std::cout << sp.shortestSpan() << std::endl;
		std::cout << sp.longestSpan() << std::endl;
	}
	std::cout << std::endl;
	{
		std::cout << "Exception Test" << std::endl;
		Span sp = Span(3);

		try {
			std::cout << sp.shortestSpan() << std::endl;
		} catch (std::exception& e) {
			std::cerr << e.what() << std::endl;
		}
		try {
			std::cout << sp.longestSpan() << std::endl;
		} catch (std::exception& e) {
			std::cerr << e.what() << std::endl;
		}
		try {
			for (int i=0; i<5; i++)
				sp.addNumber(i);
		} catch (std::exception& e) {
			std::cerr << e.what() << std::endl;
		}
	}
	std::cout << std::endl;
	{
		std::cout << "Iterator addNumber" << std::endl;
		Span sp = Span(10001);

		std::vector<int> v;
		for (int i=0; i<10000; i++)
			v.push_back(i);
		
		sp.addNumber(v.begin(), v.end());

		std::cout << sp.shortestSpan() << std::endl;
		std::cout << sp.longestSpan() << std::endl;
	}
}