/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   program.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: atabiti <atabiti@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/12 08:39:37 by atabiti           #+#    #+#             */
/*   Updated: 2022/08/17 10:14:57 by atabiti          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Contact.hpp"
#include "PhoneBook.hpp"

void	start(void)
{
	std::cout << "PhoneBook $" << std::endl
				<< "_________________________________________________________________________" << std::endl
				<< std::endl
				<< "  The program only accepts the following commands :  " << std::endl<< std::endl
				<< " \t - ADD    :        Save a new contact " << std::endl
				<< " \t - SEARCH :      Display a specific contact " << std::endl
				<< " \t - EXIT   :       Exit and remove all contacts " << std::endl
				<< "_________________________________________________________________________" << std::endl
				<< std::endl;
}

int	main(int ac, char **av)
{
	(void)ac;
	(void)av;
	PhoneBook phonebook;
	phonebook.contacts->fun(phonebook);
	return (0);
}