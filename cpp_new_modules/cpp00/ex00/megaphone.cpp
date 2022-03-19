/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   megaphone.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: araramya <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/19 16:37:15 by araramya          #+#    #+#             */
/*   Updated: 2022/03/19 16:37:24 by araramya         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>

int main(int argc, char **argv)
{
	if (argc == 1)
		std::cout << "* LOUD AND UNBEARABLE FEEDBACK NOIE *" << std::endl;
	else
	{
		for (int i = 1; i < argc; i++)
		{
			std::string str(argv[i]);
			for (int j = 0; j < str.length(); j++)
				std::cout <<(char)std::toupper(str[j]);
		}
		std::cout << std::endl;
	}
}
