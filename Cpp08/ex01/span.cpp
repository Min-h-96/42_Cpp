/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   span.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: minchoi <minchoi@student.42seoul.kr>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/11 12:28:43 by minchoi           #+#    #+#             */
/*   Updated: 2022/02/11 14:05:37 by minchoi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "span.hpp"

Span::Span(): _N(0) {}

Span::~Span() {}

Span::Span(unsigned int N): _N(N) {}

Span::Span(const Span& s) {
	this->_N = s._N;
	this->_v.clear();

	for (unsigned int i=0; i<this->_N; i++)
		this->_v.push_back(s._v[i]);
}

Span&	Span::operator=(const Span& s) {
	if (this == &s)
		return *this;
	this->_N = s._N;
	this->_v.clear();

	for (unsigned int i=0; i<this->_N; i++)
		this->_v.push_back(s._v[i]);
	return *this;
}

void	Span::addNumber(int n) {
	if (this->_v.size() == this->_N)
		throw SpanIsFull();
	this->_v.push_back(n);
}

void	Span::addNumber(const std::vector<int>::iterator& begin, const std::vector<int>::iterator& end) {
	std::vector<int>::iterator iter = begin;

	while (iter != end) {
		if (this->_v.size() == this->_N)
			throw SpanIsFull();
		this->_v.push_back(*iter);
		iter++;
	}
}

unsigned int	Span::shortestSpan(void) {
	if (this->_v.empty() || this->_v.size() == 1)
		throw CantFindSpan();
	
	std::vector<int> tmp = this->_v;
	sort(tmp.begin(), tmp.end());
	unsigned int minVal = static_cast<unsigned int>(tmp[1] - tmp[0]);
	for (unsigned int i=1; i<this->_v.size()-1; i++)
		minVal = std::min(minVal, static_cast<unsigned int>(tmp[i+1]) - static_cast<unsigned int>(tmp[i]));

	return minVal;
}

unsigned int	Span::longestSpan(void) {
	if (this->_v.empty() || this->_v.size() == 1)
		throw CantFindSpan();
	
	std::vector<int> tmp = this->_v;
	sort(tmp.begin(), tmp.end());
	
	return static_cast<unsigned int>(tmp.back() - tmp.front());
}