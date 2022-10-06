/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: atabiti <atabiti@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/30 09:08:58 by atabiti           #+#    #+#             */
/*   Updated: 2022/10/04 11:29:07 by atabiti          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "easyfind.hpp"


int	main(void)
{
	std::cout << "___________________ vector ____________________" << std::endl;
	std::vector<int> v2;
	v2.push_back(42);
	v2.push_back(21);
	v2.push_back(1337);
	v2.push_back(19);
	easyfind(v2, 1337);
	
	std::cout << "_____________________ array __________________" << std::endl;
	//array
	std::array<int, 10> arr2 = {45, 98, 1345, 986, 3445, 341, 1337, 123, 53,635};
	easyfind(arr2, 1337);

	std::cout << "_____________________ list __________________" << std::endl; //  doubly linked list , on-contiguous memory allocation
	std::list<int> lst;
	lst.push_back(07);
	lst.push_back(65);
	lst.push_back(123);
	lst.push_back(453);
	lst.push_back(654);
	easyfind(lst, 65);
	return (0);
	//
}