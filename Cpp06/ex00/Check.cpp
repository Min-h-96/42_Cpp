/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Check.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: minchoi <minchoi@student.42seoul.kr>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/05 20:16:44 by minchoi           #+#    #+#             */
/*   Updated: 2022/02/09 15:23:03 by minchoi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Convert.hpp"

bool	checkChar(std::string& str) {
	if (isdigit(str[0]))
		return false;
	if (str.length() == 1 && isprint(str[0]))
		return true;
	return false;
}

bool	checkInt(std::string& str) {
	if (!(isdigit(str[0]) || str[0] == '+' || str[0] == '-'))
		return false;
	for (size_t i=1; i<str.length(); i++) {
		if (!isdigit(str[i]))
			return false;
	}
	return true;
}

bool	checkFloat(std::string& str) {
	bool	decPoint = false;

	if (!(isdigit(str[0]) || str[0] == '+' || str[0] == '-'))
		return false;
	for (size_t i=1; i<str.length(); i++) {
		if (i == str.length()-1)
			return (str[i] == 'f');
		if (!isdigit(str[i])) {
			if (str[i] == '.') {
				if (decPoint)
					return false;
				decPoint = true;
			} else
				return false;
		}
	}
	return false;
}

bool	checkDouble(std::string& str) {
	bool	decPoint = false;

	if (!(isdigit(str[0]) || str[0] == '+' || str[0] == '-'))
		return false;
	for (size_t i=1; i<str.length(); i++) {
		if (!isdigit(str[i])) {
			if (str[i] == '.') {
				if (decPoint)
					return false;
				decPoint = true;
			} else
				return false;
		}
	}
	return true;
}

t_type	checkExcept(std::string& str) {
	if (!str.compare("+inff") || !str.compare("-inff") || !str.compare("nanf"))
		return FLOAT;
	if (!str.compare("+inf") || !str.compare("-inf") || !str.compare("nan"))
		return DOUBLE;
	return UNKNOWN;
}

t_type	getType(std::string str) {
	t_type	tmp;

	if ((tmp = checkExcept(str)) != UNKNOWN)
		return checkExcept(str);
	if (checkChar(str))
		return CHAR;
	if (checkInt(str))
		return INT;
	if (checkFloat(str))
		return FLOAT;
	if (checkDouble(str))
		return DOUBLE;
	return UNKNOWN;
}

void	convert(std::string str) {
	t_type	t;
	void	(*converter[4])(std::string&) = {
		&fromChar,
		&fromInt,
		&fromFloat,
		&fromDouble
	};

	t = getType(str);
	if (t == UNKNOWN)
		std::cout << "Unknown String." << std::endl;
	else
		converter[t](str);
}