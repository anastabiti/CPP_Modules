/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bureaucrat.cpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: atabiti <atabiti@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/11 14:11:38 by atabiti           #+#    #+#             */
/*   Updated: 2022/09/19 08:55:20 by atabiti          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"
#include <iostream>

/*+++++++++++++++++++++++++++++++++++++++++  Orthodox Canonical Form ++++++++++++++++++++++++++++++++++++++++*/

Bureaucrat::Bureaucrat()
{
	std::cout << " default Constructor is called (Bureaucrat)" << std::endl;
}
Bureaucrat::~Bureaucrat()
{
	std::cout << "Destructor is called (Bureaucrat)" << std::endl;
}

Bureaucrat::Bureaucrat(std::string const nameit, int i): name(nameit)
{
	std::cout << "Constructor is called (Bureaucrat)" << std::endl;
	if (i <= 0)
		throw(GradeTooHighException());
	else if (i >= 150)
		throw(GradeTooLowException());
	else
		grade = i;
}

Bureaucrat::Bureaucrat(Bureaucrat const &rhs)
{
	std::cout << "Copy constructor is called (Bureaucrat)" << std::endl;
	*this = rhs;
}

Bureaucrat Bureaucrat::operator=(Bureaucrat const &rhs)
{
	std::cout << "Operator overload  is called (Bureaucrat)" << std::endl;
	(void)rhs;
	return (*this);
}

std::ostream &operator<<(std::ostream &os, Bureaucrat const &rhs)
{
	os << rhs.getName() << ", bureaucrat grade " << rhs.getGrade();
	return (os);
}
/* ++++++++++++++++++++++++++++++++++++Member Functions+++++++++++++++++++++++++++++++++++++++++++++++++++++*/

void Bureaucrat::increment()
{
	std::cout << this->grade << std::endl;
	if (this->grade < 1)
	{
		throw(GradeTooHighException());
	}
	else
		this->grade -= 1;
}

void Bureaucrat::decrement()
{
		std::cout << this->grade << std::endl;

	if (this->grade >= 150)
	{
		throw(GradeTooLowException());
	}
	else
		this->grade += 1;
}

std::string Bureaucrat::getName() const
{
	return (this->name);
}
int Bureaucrat::getGrade() const
{
	return (this->grade);
}
/* ++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++*/

/* +++++++++++++++++++++++++++++++++++++++++ Nested classes +++++++++++++++++++++++++++++++++++++*/
/*+++++++++++++++++++++++++++++++++++++++   GradeTooLowException ++++++++++++++++++++++++++++++++*/

Bureaucrat::GradeTooLowException::~GradeTooLowException() throw()
{
	std::cout << "Destructor is called (GradeTooLowException)" << std::endl;
}
const char *Bureaucrat::GradeTooLowException::what() const throw()
{
	return ("Exception:GradeTooLow");
}
/*++++++++++++++++++++++++++++++++++++   GradeTooHighException ++++++++++++++++++++++++++++++++++++*/
Bureaucrat::GradeTooHighException::~GradeTooHighException() throw()
{
	std::cout << "Destructor is called (GradeTooLowException)" << std::endl;
}

const char *Bureaucrat::GradeTooHighException::what() const throw()
{
	return ("Exception:GradeTooHigh");
}
/*++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++*/
