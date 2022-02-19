/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: minchoi <minchoi@student.42seoul.kr>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/10 22:33:22 by minchoi           #+#    #+#             */
/*   Updated: 2022/02/18 18:05:51 by minchoi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Array.hpp"
#define MAX_VAL 750

int	main(void) {
	{
		std::cout << "--- Basic Test ---" << std::endl;
		Array<std::string> s(2);

		s[0] = "42";
		s[1] = "seoul";

		std::cout << "String Array : " << std::endl;
		for (unsigned int i=0; i<s.size(); i++)
			std::cout << "s[" << i << "] : " << s[i] << std::endl;
		std::cout << std::endl;
		
		Array<std::string> sCopy(s);
		std::cout << "Check Deep Copy : " << std::endl;;
		sCopy[0] = "42change";
		std::cout << "sCopy[0] : " << sCopy[0] << std::endl;
		std::cout << "s[0] : " << s[0] << std::endl;
		std::cout << std::endl;

		Array<int> arrInt(5);
		int* basicInt = new int[5];
		std::cout << "Check to initial by default : " << std::endl;
		for (unsigned int i=0; i<arrInt.size(); i++)
			std::cout << "basicInt[" << i << "] : " << basicInt[i] << std::endl;
		for (unsigned int i=0; i<arrInt.size(); i++)
			std::cout << "arrInt[" << i << "] : " << arrInt[i] << std::endl;
		std::cout << std::endl;
		
		for (unsigned int i=0; i<arrInt.size(); i++)
			arrInt[i] = i;
		Array<int> assginArr = arrInt;
		std::cout << "Check Assign Operator : " << std::endl;
		for (unsigned int i=0; i<assginArr.size(); i++)
			std::cout << "assginArr[" << i << "] : " << assginArr[i] << std::endl;
		std::cout << std::endl;

		std::cout << "Check Out of Range : " << std::endl;
		try {
			std::cout << arrInt[20] << std::endl;
		} catch (std::exception& e) {
			std::cout << e.what() << std::endl;
		}
		try {
    	    arrInt[-2] = 0;
    	} catch(const std::exception& e) {
    	    std::cerr << e.what() << '\n';
    	}
	}
	
	return 0;
}