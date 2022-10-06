/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: atabiti <atabiti@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/19 12:56:30 by atabiti           #+#    #+#             */
/*   Updated: 2022/09/25 11:31:06 by atabiti          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Converter.hpp"


int	main(int ac, char **av)
{
	int			i;
	Converter	A;
	int			index;
	if (ac == 2)
	{
		std::string str[ac];
/*+++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++*/
		//convert char** to std::string[]
		index = 0;
		while (av[index])
		{
			str[index] = av[index];
			index++;
		}
/*+++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++*/
		i = 1;
		if (A.is_pseudo_literals_float(str[1]) == true || A.is_pseudo_literals_double(str[1]) == true) //detect the type
		{
			std::cout << "char: impossible" << std::endl
						<< "int: impossible" << std::endl
						<< "float: nanf" << std::endl
						<< "double: nan " << std::endl;
		}
		else if (A.ischar(str[i]) == true) //detect the type
		{
			A.from_char(str); //convert
		}
		else if (A.isint(str[i]) == true) //detect the type
		{
			A.from_int(str); //convert
		}
		else if (A.isfloat(str[i]) == true) //detect the type
		{
			A.from_float(str); //convert
		}
		else if (A.isdouble(str[i]) == true) //detect the type
		{
			A.from_double(str); //convert
		}
	}
	else
	{
		std::cerr << "WRONG INPUT !" << std::endl;
	}
	return (0);
}
