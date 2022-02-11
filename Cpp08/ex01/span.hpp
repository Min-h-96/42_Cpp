/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   span.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: minchoi <minchoi@student.42seoul.kr>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/11 12:28:41 by minchoi           #+#    #+#             */
/*   Updated: 2022/02/11 14:05:39 by minchoi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SPAN_HPP
# define SPAN_HPP

# include <iostream>
# include <algorithm>
# include <vector>
# include <climits>

class Span {
	protected:
		unsigned int _N;
		std::vector<int> _v;
		Span();
	public:
		~Span();
		Span(unsigned int N);
		Span(const Span& s);
		Span&	operator=(const Span& s);
		void	addNumber(int n);
		void	addNumber(const std::vector<int>::iterator& begin, const std::vector<int>::iterator& end);
		unsigned int shortestSpan(void);
		unsigned int longestSpan(void);

		class SpanIsFull : public std::exception {
			public:
				const char* what(void) const throw() {
					return "Span is already full";
				};
		};

		class CantFindSpan : public std::exception {
			public:
				const char* what(void) const throw() {
					return "Span is empty or has only one element";
				};
		};
};

#endif