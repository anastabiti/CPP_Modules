/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Base.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: atabiti <atabiti@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/23 09:57:32 by atabiti           #+#    #+#             */
/*   Updated: 2022/09/25 11:35:24 by atabiti          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "A.hpp"
#include "B.hpp"
#include "Base.hpp"
#include "C.hpp"
#include <stdlib.h>
#include <time.h>
Base::~Base()
{
	// std::cout << "Virtual destructor is called " << std::endl;
}

Base *Base::generate(void)
{
	int		n;
	Base	*a;
	Base	*b;
	Base	*c;

	srand(time(NULL));
	n = rand() % 3 + 1;
	if (n == 1)
	{
		a = new A;
		return (a);
	}
	else if (n == 2)
	{
		b = new B;
		return (b);
	}
	else
	{
		c = new C;
		return (c);
	}
}

void Base::identify(Base *p)
{
	if (dynamic_cast<A *>(p) != NULL)
		std::cout << "type is A (ptr)" << std::endl;
	else if (dynamic_cast<B *>(p) != NULL)
		std::cout << "type is B (ptr)" << std::endl;
	else if (dynamic_cast<C *>(p) != NULL)
		std::cout << "type is C (ptr)" << std::endl;
}
void Base::identify(Base &p)
{
	try
	{
		(void)dynamic_cast<A &>(p);
		std::cerr << "type is A (ref)" << std::endl;
	}
	catch (const std::exception &e)
	{
		std::cerr << e.what() << '\n';
	}
	try
	{
		(void)dynamic_cast<B &>(p);
		std::cerr << "type is B (ref)" << std::endl;
	}
	catch (const std::exception &e)
	{
		std::cerr << e.what() << '\n';
	}
	try
	{
		(void)dynamic_cast<C &>(p);
		std::cerr << "type is C (ref)" << std::endl;
	}
	catch (const std::exception &e)
	{
		std::cerr << e.what() << '\n';
	}
}
