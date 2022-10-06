/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: atabiti <atabiti@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/21 12:27:49 by atabiti           #+#    #+#             */
/*   Updated: 2022/09/25 11:22:18 by atabiti          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Data.hpp"

int	main(void)
{
	Data *first = new Data;
	first->test = 1337;
	first->name = "Coding School";
	std::cout << first->test << " " << first->name << std::endl;

	uintptr_t t = serialize(first);
	Data *newptr = deserialize(t);

	
	std::cout << newptr->test << " " << newptr->name << std::endl;
	delete first;
	return (0);
}