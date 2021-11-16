/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: minchoi <minchoi@student.42seoul.kr>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/15 16:02:31 by minchoi           #+#    #+#             */
/*   Updated: 2021/11/16 11:11:30 by minchoi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <fstream>
#include <string>

int main(int argc, char *argv[]) {
	if (argc != 4) {
		std::cout << "Invalid Argument: need 3 argument." << std::endl;
		return (1);
	}
	std::string		filename(argv[1]);
	std::ifstream	ifs(filename);
	std::ofstream	ofs(filename + ".replace");
	std::string		s1(argv[2]);
	std::string		s2(argv[3]);
	std::string 	readstr;
	char 			c;
	if (ifs.is_open() && ofs.is_open()) {
		while (ifs.get(c)) {
			readstr += c;
			if (readstr.size() == s1.size()) {
				if (readstr == s1)
					ofs << s2;
				else
					ofs << readstr;
				readstr.clear();
			}
		}
	}
	if (!readstr.empty())
		ofs << readstr;
	ofs.close();
	ifs.close();
}