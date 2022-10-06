/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: atabiti <atabiti@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/07 11:18:37 by atabiti           #+#    #+#             */
/*   Updated: 2022/09/11 10:27:58 by atabiti          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Dog.hpp"

#define BLUE "\033[34m" /* Blue */
/* +++++++++++++++++++++++++++++++++   canonical orthodox  form +++++++++++++++++++++++++++++++++ */

Dog::Dog()
{
	std::cout << BLUE << "Default constructor is called (Dog)  🦮" << std::endl;
	this->type = "Dog";
	this->br = new Brain();
	// std::cout << this->type  << std::endl;
}

Dog::~Dog()
{
	std::cout << BLUE << "Destructor is called (Dog) 🦮 (delete)" << std::endl;
	// std::cout << this->br << std::endl ; 
		// check memory address (deep copy or  shallow copy )
	delete this->br;
}

Dog::Dog(const Dog &rhs)
{
	std::cout << BLUE << "Copy constructor is called (Dog) 🦮" << std::endl;
	*this = rhs;
}

Dog &Dog::operator=(const Dog &rhs)
{
	std::cout << BLUE << "Operator Overload  is called (Dog) 🦮" << std::endl;
	this->br = new Brain(*rhs.br);
	// std::cout << this->br << std::endl <<  rhs.br << std::endl ; 
		// check memory address (deep copy or  shallow copy )
	return (*this);
}

/* +++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++ */

void Dog::makeSound() const
{
	std::cout << BLUE << "This dog is barking ! 🦮" << std::endl;
}