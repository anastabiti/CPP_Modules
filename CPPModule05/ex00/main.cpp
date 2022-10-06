/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: atabiti <atabiti@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/11 14:11:49 by atabiti           #+#    #+#             */
/*   Updated: 2022/09/19 08:58:37 by atabiti          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"

int	main(void)
{
	try
	{
		Bureaucrat a("ONE", 145);
		std::cout << a << std::endl;
		a.decrement();
		std::cout << a << std::endl;
		a.decrement();
		std::cout << a << std::endl;
		a.decrement();
		std::cout << a << std::endl;
		a.decrement();
		std::cout << a << std::endl;
		a.decrement();
		std::cout << a << std::endl;
		a.decrement();
		std::cout << a << std::endl;
		a.decrement();
	}
	catch (std::exception &e)
	{
		std::cerr << e.what() <<'\n';
		/* handle exception */
	}
	catch (...)
	{
		std::cout << "Other exceptions" << std::endl;
	}
	std::cout << std::endl;

/*++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++*/
	try
	{
		Bureaucrat a("ONE", 3);
		a.increment();
		std::cout << a << std::endl;
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << '\n';
	}
	
	std::cout << std::endl;
/*++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++*/
	try
	{
		Bureaucrat b("TWO", -1337); //Exception:GradeTooHigh
	}
	catch (const std::exception &e)
	{
		std::cerr << e.what() << '\n';
	}

	std::cout << std::endl;

/*++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++*/
	try
	{
		Bureaucrat c("THREE", 12);
		std::cout << c.getName() << " " << c.getGrade() << std::endl;
	}
	catch (const std::exception &e)
	{
		std::cerr << e.what() << '\n';
	}
}