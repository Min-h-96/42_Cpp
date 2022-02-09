/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Convert.hpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: minchoi <minchoi@student.42seoul.kr>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/05 19:59:31 by minchoi           #+#    #+#             */
/*   Updated: 2022/02/09 14:44:34 by minchoi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CONVERT_HPP
# define CONVERT_HPP

# include <iostream>
# include <cstdlib>
# include <string>
# include <climits>

typedef enum e_type {
	CHAR, INT, FLOAT, DOUBLE, UNKNOWN
}	t_type;

t_type	getType(std::string str);
t_type	checkExcept(std::string& str);
bool	checkChar(std::string& str);
bool	checkInt(std::string& str);
bool	checkFloat(std::string& str);
bool	checkDouble(std::string& str);

void	convert(std::string str);
void	fromChar(std::string& str);
void	fromInt(std::string& str);
void	fromFloat(std::string& str);
void	fromDouble(std::string& str);

#endif