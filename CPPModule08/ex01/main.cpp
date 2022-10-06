/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: atabiti <atabiti@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/30 10:24:54 by atabiti           #+#    #+#             */
/*   Updated: 2022/10/04 11:23:36 by atabiti          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Span.hpp"

int	main(void)
{
	try
	{
		Span sp = Span(5);
		sp.addNumber(6);
		sp.addNumber(3);
		sp.addNumber(17);
		sp.addNumber(9);
		sp.addNumber(11);
		std::cout << sp.shortestSpan() << std::endl;
		std::cout << sp.longestSpan() << std::endl;
	}
	catch (const std::exception &e)
	{
		std::cerr << e.what() << '\n';
	}
	std::cout << "++++++++++++++++++++++++++++++++++++++++++++" << std::endl;

	try
	{
		Span sp = Span(10000);
		sp.fillthem();
		// sp.printall();
		std::cout << sp.shortestSpan() << std::endl;
		std::cout << sp.longestSpan() << std::endl;
	}
	catch (const std::exception &e)
	{
		std::cerr << e.what() << '\n';
	}

	std::cout << "++++++++++++++++++++++++++++++++++++++++++++" << std::endl;
	try
	{
		Span sp = Span(200);
		sp.addNumber(54);
		sp.addNumber(122);
		sp.addNumber(91);
		sp.addNumber(1323);
		sp.addNumber(212);
		sp.addNumber(34);
		sp.addNumber(265);
		sp.addNumber(212);
		sp.addNumber(2);
		sp.addNumber(82);
		sp.addNumber(9);
		// sp.printall();
		std::cout << sp.shortestSpan() << std::endl;
		std::cout << sp.longestSpan() << std::endl;
	}
	catch (const std::exception &e)
	{
		std::cerr << e.what() << '\n';
	}

	return (0);
}