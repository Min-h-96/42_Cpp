/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   megaphone.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: minchoi <minchoi@student.42seoul.kr>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/10 13:45:18 by minchoi           #+#    #+#             */
/*   Updated: 2021/11/10 15:18:29 by minchoi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <locale>

int main(int argc, char *argv[])
{
    if (argc == 1)
        std::cout << "* LOUD AND UNBEARABLE FEEDBACK NOISE *" << std::endl;
    else
    {
        for (int i=1; i<argc; i++)
        {
            int j = -1;
            while (argv[i][++j] != 0)
                std::cout << (char)std::toupper(argv[i][j]);
        }
        std::cout << std::endl;
    }
}