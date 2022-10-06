/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bureaucrat.cpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: atabiti <atabiti@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/11 14:11:38 by atabiti           #+#    #+#             */
/*   Updated: 2022/09/19 08:46:00 by atabiti          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"
#include "Form.hpp"
#include <iostream>

/*+++++++++++++++++++++++++++++++++++++++ Orthodox Canonical Form +++++++++++++++++++++++++++++++++++++++++++++*/
Bureaucrat::Bureaucrat()
{
	std::cout << " default Constructor is called (Bureaucrat)" << std::endl;
}

Bureaucrat::~Bureaucrat()
{
	std::cout << "destructor is called (Bureaucrat)" << std::endl;
}

Bureaucrat::Bureaucrat(std::string const nameit, int i)
	: name(nameit)
{
	std::cout << "Constructor is called (Bureaucrat)" << std::endl;
	if (i <= 0)
		throw(GradeTooHighException()); // throw(test());
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
	std::cout << "Operator Overload is called (Bureaucrat)" << std::endl;
	this->grade = rhs.grade;
	return (*this);
}

std::ostream &operator<<(std::ostream &os, Bureaucrat const &rhs)
{
	os << rhs.getName() << " " << rhs.getGrade();
	return (os);
}
/*+++++++++++++++++++++++++++++++++++++++Member Functions +++++++++++++++++++++++++++++++++++++++++++++++++*/

void Bureaucrat::increment()
{
	if (this->grade < 1)
	{
		throw(GradeTooHighException());
	}
	else
		this->grade -= 1;
}

void Bureaucrat::decrement()
{
	if (this->grade > 150)
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

void Bureaucrat::signForm(Form  &g)
{
	if (this->grade <= g.GetGrade())
	{
		g.beSigned(*this);
		std::cout << this->getName() << " is signed with " << g.GetName() << std::endl;
	}
	else
		std::cout << this->getName() << " couldn’t sign " << g.GetName() << " because his  grade is too low" << std::endl;
}
/*+++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++*/

/*+++++++++++++++++++++++++++++++++++++++   GradeTooLowException +++++++++++++++++++++++++++++++++++++++++*/

Bureaucrat::GradeTooLowException::~GradeTooLowException() throw()
{
	std::cout << "destructor is called (GradeTooLowException)" << std::endl;
}
const char *Bureaucrat::GradeTooLowException::what() const throw()
{
	return ("Exception:GradeTooLow");
}
/*+++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++*/
/*+++++++++++++++++++++++++++++++++++++++   GradeTooHighException +++++++++++++++++++++++++++++++++++++++++*/

Bureaucrat::GradeTooHighException::~GradeTooHighException() throw()
{
	std::cout << "destructor is called (GradeTooHighException)" << std::endl;
}

const char *Bureaucrat::GradeTooHighException::what() const throw()
{
	return ("Exception:GradeTooHigh");
}
/*+++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++*/


//test
// std::string test()
// {
// 	return ("WRONG  ");
// }
