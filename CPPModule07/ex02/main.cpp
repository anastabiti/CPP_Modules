/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: atabiti <atabiti@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/26 12:54:49 by atabiti           #+#    #+#             */
/*   Updated: 2022/09/28 10:24:12 by atabiti          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Array.hpp"

int	main(void)
{

	unsigned int size = 4;
	//int
	Array<int> arr1(size);
	//empty one
	Array<int> empty;
	//char
	Array<char> arr4(size);
	//float
	Array<float> flt(size);
	//std::string
	Array<std::string> str(size);


std::cout << "________________________________________________________________" << std::endl;

	try
	{
		unsigned int i = 0;
		unsigned int x = 0;
		while (x < size)
		{
			arr1[x] = 2022;
			std::cout << "arr1     : " << arr1[x] << std::endl;
			x++;
		}
		//test  Copy constructor
			Array<int> copyarray(arr1);
		while (i < size)
		{
			std::cout << "copyarray     : " << copyarray[i] << std::endl;
			i++;
		}
	}
	catch (std::exception &e)
	{
		std::cerr << e.what() << std::endl;
	}

	
	std::cout << "________________________________________________________________" << std::endl;
	//test exception
	try
	{
		std::cout << "arr1     : " << arr1[1337] << std::endl;
	}
	catch (const std::exception &e)
	{
		std::cerr << e.what() << '\n';
	}


	
	std::cout << "________________________________________________________________" << std::endl;
	//test :  read and write with []
	try
	{
		arr1[0] = 42;
		std::cout << arr1[0] << std::endl;
	}
	catch (const std::exception &e)
	{
		std::cerr << e.what() << '\n';
	}


	
	std::cout << "________________________________________________________________" << std::endl;
	//test empty Array
	try
	{
		std::cout<< "EMPTY  :" << empty[9] << std::endl;
	}
	catch (const std::exception &e)
	{
		std::cerr << e.what() << '\n';
	}





	std::cout << "________________________________________________________________" << std::endl;
	try
	{
		arr4[0] = 'S';
		std::cout << arr4[0] << std::endl;
	}
	catch (const std::exception &e)
	{
		std::cerr << e.what() << '\n';
	}
	std::cout << "________________________________________________________________" << std::endl;







	try
	{
		flt[0] = 12.43f;
		std::cout << flt[0] << std::endl;

	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << '\n';
	}




	
	std::cout << "________________________________________________________________" << std::endl;
	
	try
	{
		str[0] = "LAST ONE";
		std::cout << str[0] << std::endl;
		std::cout << str[420] << std::endl;
		

	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << '\n';
	}
	
	
	std::cout << "________________________________________________________________" << std::endl;
	
	

	
	return (0);
}