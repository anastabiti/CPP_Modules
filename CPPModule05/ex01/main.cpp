/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: atabiti <atabiti@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/11 14:11:49 by atabiti           #+#    #+#             */
/*   Updated: 2022/09/19 09:04:39 by atabiti          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"
#include "Form.hpp"
int	main(void)
{
	/*++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++*/
	try
	{
		Bureaucrat c("BU", 13);
		Form a("ANAS", 42, 55);
		c.signForm(a);
	}
	catch(std::exception &e )
	{
		std::cout << e.what() <<  std::endl;
	}
	std::cout << std::endl;
/*++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++*/
try
{
	Bureaucrat c("BU", 44);
	Form a("ANAS", 42, 55);
		c.signForm(a);
}
catch(const std::exception& e)
{
	std::cerr << e.what() << '\n';
}

	std::cout << std::endl;

/*++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++*/
	
	try
	{
		Bureaucrat c("BU", 0);
		Form a("ANAS", 11, 10);
		c.signForm(a);
		a.beSigned(c);
	}
	catch(std::exception &e )
	{
		std::cout << e.what() <<  std::endl;
	}

/*++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++*/

	
	std::cout << std::endl;
	try
	{
		Bureaucrat c("BU", 155);
		Form a("ANAS", 100, 60);
		c.signForm(a);
		a.beSigned(c);
	}
	catch(std::exception &e )
	{
		std::cout << e.what() <<  std::endl;
	}
	/*++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++*/
}
