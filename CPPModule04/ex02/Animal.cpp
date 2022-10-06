/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: atabiti <atabiti@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/07 11:05:44 by atabiti           #+#    #+#             */
/*   Updated: 2022/09/11 11:36:21 by atabiti          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Animal.hpp"
#define RED "\033[31m" /* Red */

/* +++++++++++++++++++++++++++++++++   canonical orthodox  form +++++++++++++++++++++++++++++++++ */
Animal::Animal()
{
	std::cout << RED << "Default constructor is called (Animal) " << std::endl;
}

// Animal::~Animal()
// {
// 	std::cout << RED<< "Destructor is called (Animal) " << std::endl;
// }
Animal::~Animal()
{
	std::cout << RED << "Virtual Destructor is called (Animal) " << std::endl;
}

Animal::Animal(const Animal &rhs)
{
	std::cout << RED << "copy constructor is called (Animal) " << std::endl;
	*this = rhs;
}
Animal &Animal::operator=(const Animal &rhs)
{
	std::cout << RED << "operator overload is called (Animal) " << std::endl;
	this->type = rhs.type;
	return (*this);
}
/* +++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++ */
void Animal::makeSound(void) const
{
	std::cout << RED << "BASE CLASS ! (Animal)" << std::endl;
}

std::string Animal::getType() const
{
	return (this->type);
}
