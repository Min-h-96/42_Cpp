/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: minchoi <minchoi@student.42seoul.kr>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/10 22:33:22 by minchoi           #+#    #+#             */
/*   Updated: 2022/02/11 01:21:08 by minchoi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Array.hpp"
#define MAX_VAL 750

int	main(void) {
	{
		Array<std::string> s(2);

		s[0] = "42";
		s[1] = "seoul";

		std::cout << "String Array : " << std::endl;
		for (unsigned int i=0; i<s.size(); i++)
			std::cout << "s[" << i << "] : " << s[i] << std::endl;
		std::cout << std::endl;
		
		Array<std::string> sCopy(s);
		std::cout << "Check Deep Copy : ";
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
	}
	{
		Array<int> numbers(MAX_VAL);
    	int* mirror = new int[MAX_VAL];
    	srand(time(NULL));
    	for (int i = 0; i < MAX_VAL; i++)
    	{
    	    const int value = rand();
    	    numbers[i] = value;
    	    mirror[i] = value;
    	}
    	//SCOPE
    	{
    	    Array<int> tmp = numbers;
    	    Array<int> test(tmp);
    	}

    	for (int i = 0; i < MAX_VAL; i++)
    	{
    	    if (mirror[i] != numbers[i])
    	    {
    	        std::cerr << "didn't save the same value!!" << std::endl;
    	        return 1;
    	    }
    	}
    	try
    	{
    	    numbers[-2] = 0;
    	}
    	catch(const std::exception& e)
    	{
    	    std::cerr << e.what() << '\n';
    	}
    	try
    	{
    	    numbers[MAX_VAL] = 0;
    	}
    	catch(const std::exception& e)
    	{
    	    std::cerr << e.what() << '\n';
    	}

    	for (int i = 0; i < MAX_VAL; i++)
    	{
    	    numbers[i] = rand();
    	}
    	delete [] mirror;//
	}
	
	return 0;
}