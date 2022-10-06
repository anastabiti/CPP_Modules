/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: atabiti <atabiti@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/07 11:23:55 by atabiti           #+#    #+#             */
/*   Updated: 2022/09/11 11:33:08 by atabiti          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cat.hpp"
#define GREEN "\033[32m" /* Green */

/* +++++++++++++++++++++++++++++++++   canonical orthodox  form +++++++++++++++++++++++++++++++++ */
Cat::Cat()
{
	std::cout << GREEN << "Default constructor is called (Cat) 😹" << std::endl;
	this->br = new Brain();
	this->type = "Cat";
}

Cat::~Cat()
{
	std::cout << GREEN << "Destructor is called (Cat) 😹 (delete)" << std::endl;
	// std::cout << this->br << std::endl ; 
		// check memory address (deep copy or  shallow copy )
	delete this->br;
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
	this->br = new Brain(*(rhs.br));
	// std::cout << this->br << std::endl <<  rhs.br << std::endl ; 
		// check memory address (deep copy or  shallow copy )
	return (*this);
}

/* +++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++ */
void Cat::makeSound(void) const
{
	std::cout << GREEN << "This cat is Meowing 😼 " << std::endl;
}
/* +++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++ */