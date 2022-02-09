/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Convert.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: minchoi <minchoi@student.42seoul.kr>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/05 19:59:26 by minchoi           #+#    #+#             */
/*   Updated: 2022/02/09 15:39:26 by minchoi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Convert.hpp"

void	fromChar(std::string& str) {
	char c = static_cast<char>(str[0]);
	
	if (c < 32 || c > 126)
		std::cout << "char: Non displayable" << std::endl;
	else
		std::cout << "char: " << c << std::endl;
	std::cout << "int: " << static_cast<int>(c) << std::endl;
	std::cout << "float: " << static_cast<float>(c) << ".0f" << std::endl;
	std::cout << "double: " << static_cast<double>(c) << ".0" << std::endl;
}

void	fromInt(std::string& str) {
	double d = strtod(str.c_str(), NULL);

	if (d < static_cast<double>(CHAR_MIN) || d > static_cast<double>(CHAR_MAX))
		std::cout << "char: Overflow/Underflow" << std::endl;
	else if (d < 32 || static_cast<char>(d) > 126)
		std::cout << "char: Non displayable" << std::endl;
	else
		std::cout << "char: " << static_cast<char>(d) << std::endl;
	if (d < static_cast<double>(INT_MIN) || d > static_cast<double>(INT_MAX))
		std::cout << "int: Overflow/Underflow" << std::endl;
	else
		std::cout << "int: " << static_cast<int>(d) << std::endl;
	std::cout << "float: " << static_cast<float>(d) << ".0f" << std::endl;
	std::cout << "double: " << static_cast<double>(d) << ".0" << std::endl;
}

void	fromFloat(std::string& str) {
	double d = strtod(str.c_str(), NULL);

	if (!str.compare("+inff") || !str.compare("-inff") || !str.compare("nanf")) {
		std::cout << "char: impossible" << std::endl;
		std::cout << "int: impossible" << std::endl;
		std::cout << "float: ";
		if (!str.compare("+inff"))
			std::cout << "+";
		std::cout << static_cast<float>(d) << "f" << std::endl;
		std::cout << "double: ";
		if (!str.compare("+inff"))
			std::cout << "+";
		std::cout << static_cast<double>(d) << std::endl;
		return ;
	}

	if (static_cast<char>(d) < 32 || static_cast<char>(d) > 126)
		std::cout << "char: Non displayable" << std::endl;
	else
		std::cout << "char: " << static_cast<char>(d) << std::endl;
	if (d < static_cast<double>(INT_MIN) || d > static_cast<double>(INT_MAX))
		std::cout << "int: Overflow/Underflow" << std::endl;
	else
		std::cout << "int: " << static_cast<int>(d) << std::endl;
	std::cout << "float: " << static_cast<float>(d);
	int i = static_cast<int>(d);
	if (static_cast<float>(d) - i == 0 && d < 1000000)
		std::cout << ".0f" << std::endl;
	else
		std::cout << "f" << std::endl;
	std::cout << "double: " << static_cast<double>(d);
	if (static_cast<float>(d) - i == 0 && d < 1000000)
		std::cout << ".0" << std::endl;
	else
		std::cout << std::endl;
}

void	fromDouble(std::string& str) {
	double d = strtod(str.c_str(), NULL);

	if (!str.compare("+inf") || !str.compare("-inf") || !str.compare("nan")) {
		std::cout << "char: impossible" << std::endl;
		std::cout << "int: impossible" << std::endl;
		std::cout << "float: ";
		if (!str.compare("+inf"))
			std::cout << "+";
		std::cout << static_cast<float>(d) << "f" << std::endl;
		std::cout << "double: ";
		if (!str.compare("+inf"))
			std::cout << "+";
		std::cout << static_cast<double>(d) << std::endl;
		return ;
	}

	if (static_cast<char>(d) < 32 || static_cast<char>(d) > 126)
		std::cout << "char: Non displayable" << std::endl;
	else
		std::cout << "char: " << static_cast<char>(d) << std::endl;
	if (d < static_cast<double>(INT_MIN) || d > static_cast<double>(INT_MAX))
		std::cout << "int: Overflow/Underflow" << std::endl;
	else
		std::cout << "int: " << static_cast<int>(d) << std::endl;
	int i = static_cast<int>(d);
	std::cout << "float: " << static_cast<float>(d);
	if (static_cast<float>(d) - i == 0 && d < 1000000)
		std::cout << ".0f" << std::endl;
	else
		std::cout << "f" << std::endl;
	std::cout << "double: " << static_cast<double>(d);
	if (static_cast<float>(d) - i == 0 && d < 1000000)
		std::cout << ".0" << std::endl;
	else
		std::cout << std::endl;
}