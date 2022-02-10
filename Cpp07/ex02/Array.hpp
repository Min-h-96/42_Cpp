/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Array.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: minchoi <minchoi@student.42seoul.kr>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/10 18:24:42 by minchoi           #+#    #+#             */
/*   Updated: 2022/02/11 00:28:44 by minchoi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ARRAY_HPP
# define ARRAY_HPP

# include <iostream>
# include <string>
# include <exception>

template <typename T>
class Array {
	protected:
		T*				_arr;
		unsigned int	_size;
	public:
		Array();
		~Array();
		Array(unsigned int n);
		Array(const Array<T>& a);
		Array<T>&		operator=(const Array<T>& a);
		T&		operator[](unsigned int i);
		unsigned int	size(void);

		class OutOfRangeException: public std::exception {
			public:
				const char* what(void) const throw();
		};
};

template <typename T>
Array<T>::Array() {
	_arr = new T[0];
	_size = 0;
}

template <typename T>
Array<T>::~Array() {
	delete[] _arr;
}

template <typename T>
Array<T>::Array(unsigned int n) {
	_arr = new T[n];
	_size = n;
}

template <typename T>
Array<T>::Array(const Array<T>& a) {
	this->_arr = new T[a._size];
	this->_size = a._size;

	for (unsigned int i=0; i<a._size; i++)
		this->_arr[i] = a._arr[i];
}

template <typename T>
Array<T>&	Array<T>::operator=(const Array<T>& a) {
	if (this == a)
		return this;
	this->_arr = new T[a._size];
    this->_size = a._size;
    for (int i = 0; i < a._size; i++)
        this->_arr[i] = a._arr[i];
    return this;
}

template <typename T>
T&	Array<T>::operator[](unsigned int i) {
	if (i == 0)
		return this->_arr[0];
	if (i > this->_size)
		throw Array<T>::OutOfRangeException();
	return this->_arr[i];
}

template <typename T>
unsigned int	Array<T>::size() {
	return this->_size;
}

template <typename T>
const char*	Array<T>::OutOfRangeException::what(void) const throw() {
	return "Error: Out of the array.";
}

#endif