/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: atabiti <atabiti@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/20 09:20:23 by atabiti           #+#    #+#             */
/*   Updated: 2022/08/24 07:13:08 by atabiti          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>

int	main(void)
{
	std::string str = "HI THIS IS BRAIN";
	std::string *stringPTR; // A pointer to the string
	std::string &stringREF = str; //A reference to the string
	stringPTR = &str; // Pointer Initialization 


	std::cout << "• The memory address of the string variable  \t" << &str << std::endl;
	std::cout << "• The memory address held by stringPTR       \t" << stringPTR << std::endl;
	std::cout << "• The memory address held by stringREF       \t" << &stringREF << std::endl;
	std::cout << "• The value of the string variable        \t" << str << std::endl;
	std::cout << "• The value pointed to by stringPTR         \t" << *stringPTR << std::endl;
	std::cout << "• The value pointed to by stringREF.        \t" << stringREF << std::endl;
}