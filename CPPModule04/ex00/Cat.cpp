/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: atabiti <atabiti@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/07 11:23:55 by atabiti           #+#    #+#             */
/*   Updated: 2022/09/11 11:33:37 by atabiti          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cat.hpp"
#define GREEN "\033[32m" /* Green */

/* +++++++++++++++++++++++++++++++++   canonical orthodox  form +++++++++++++++++++++++++++++++++ */
Cat::Cat()
{
	std::cout << GREEN << "Default constructor is called (Cat) 😹" << std::endl;
	this->type = "Cat";
}

Cat::~Cat()
{
	std::cout << GREEN << "Destructor is called (Cat) 😹" << std::endl;
}
Cat::Cat(const Cat &rhs)
{
	std::cout << GREEN << "Copy constructor is called (Cat) 😹" << std::endl;
	*this = rhs;
}

Cat &Cat::operator=(const Cat &rhs)
{
	std::cout << GREEN << "Operator Overload  is called (Cat) 😹" << std::endl;
	this->type = rhs.type;
	return (*this);
}

/* +++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++ */
void Cat::makeSound(void) const
{
	std::cout << "This cat is Meowing 😼 " << std::endl;
}
/* +++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++ */