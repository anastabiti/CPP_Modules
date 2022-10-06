/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongCat.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: atabiti <atabiti@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/08 11:11:04 by atabiti           #+#    #+#             */
/*   Updated: 2022/09/11 11:37:11 by atabiti          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "WrongCat.hpp"
#define YELLOW "\033[33m" /* Yellow */

/* +++++++++++++++++++++++++++++++++   canonical orthodox  form +++++++++++++++++++++++++++++++++ */

WrongCat::WrongCat()
{
	std::cout << YELLOW << "Default constructor is called (WrongCat) " << std::endl;
}

WrongCat::~WrongCat()
{
	std::cout << YELLOW << "Destructor is called (WrongCat) " << std::endl;
}

WrongCat::WrongCat(const WrongCat &rhs)
{
	std::cout << YELLOW << "copy constructor is called (WrongCat) " << std::endl;
	(void)rhs;
	*this = rhs;
}
WrongCat &WrongCat::operator=(const WrongCat &rhs)
{
	std::cout << YELLOW << "operator overload is called (WrongCat) " << std::endl;
	(void)rhs;
	return (*this);
}
/* +++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++ */

void WrongCat::makeSound(void) const
{
	std::cout << YELLOW << "WrongCat sound " << std::endl;
}