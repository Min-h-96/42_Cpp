/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: minchoi <minchoi@student.42seoul.kr>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/15 16:02:31 by minchoi           #+#    #+#             */
/*   Updated: 2022/02/08 16:37:18 by minchoi          ###   ########.fr       */
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
	if (!ifs.is_open()) {
		std::cout << "There is no file has that filename." << std::endl;
		return (1);
	}
	std::ofstream	ofs(filename + ".replace");
	std::string		s1(argv[2]);
	std::string		s2(argv[3]);
	if (ifs.is_open() && ofs.is_open()) {
		while (!ifs.eof()) {
			std::string	readstr;
			getline(ifs, readstr);
			std::size_t found;
			while ((found = readstr.find(s1)) != std::string::npos) {
				readstr.erase(found, s1.length());
				readstr.insert(found, s2);
			}
			ofs << readstr;
			if (!ifs.eof())
				ofs << "\n";
		}
	}
	ofs.close();
	ifs.close();
}