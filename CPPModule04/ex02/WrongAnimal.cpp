/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongAnimal.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: atabiti <atabiti@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/08 10:58:53 by atabiti           #+#    #+#             */
/*   Updated: 2022/09/09 09:45:12 by atabiti          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "WrongAnimal.hpp"
#define MAGENTA "\033[35m" /* Magenta */

/* +++++++++++++++++++++++++++++++++   canonical orthodox  form +++++++++++++++++++++++++++++++++ */

WrongAnimal::WrongAnimal()
{
	std::cout << MAGENTA << "Default constructor is called (WrongAnimal) " << std::endl;
}

WrongAnimal::~WrongAnimal()
{
	std::cout << MAGENTA << "Destructor  is called (WrongAnimal) " << std::endl;
}

WrongAnimal::WrongAnimal(const WrongAnimal &rhs)
{
	std::cout << MAGENTA << "Copy  constructor is called (WrongAnimal) " << std::endl;
	*this = rhs;
}

const WrongAnimal &WrongAnimal::operator=(const WrongAnimal &rhs)
{
	std::cout << MAGENTA << "Operator overload   is called (WrongAnimal) " << std::endl;
	(void)rhs;
	return (*this);
}
/* +++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++ */
void WrongAnimal::makeSound(void) const
{
	std::cout << "BASE CLASS sound ! (WrongAnimal)" << std::endl;
}

std::string WrongAnimal::getType() const
{
	return (this->type);
}
