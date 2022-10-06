/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   RobotomyRequestForm.cpp                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: atabiti <atabiti@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/15 12:21:40 by atabiti           #+#    #+#             */
/*   Updated: 202∑2/09/15 12:21:41 by atabiti          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"
#include "Form.hpp"
#include "RobotomyRequestForm.hpp"
#include <cstdlib>
RobotomyRequestForm::RobotomyRequestForm(): Form("Robotomy", 72, 45)
{
}

RobotomyRequestForm::~RobotomyRequestForm()
{
}
RobotomyRequestForm::RobotomyRequestForm(std::string target):Form("Robotomy", 72, 45)
{
	this->target = target;
}

RobotomyRequestForm::RobotomyRequestForm(RobotomyRequestForm const &rhs): Form("Robotomy", 72, 45)
{
	*this = rhs;
}
RobotomyRequestForm RobotomyRequestForm::operator=(RobotomyRequestForm const &rhs)
{
	(void)rhs;
	return (*this);
}



const char *RobotomyRequestForm::Notsigned::what() const throw()
{
	return ("Not signed ");
}

const char *RobotomyRequestForm::RobotomyException::what() const throw()
{
	return ("Robotomy Exception : Grade Too Low ");
}

void RobotomyRequestForm::execute(Bureaucrat const &executor)
{
	if (this->Getbool() == false)
	{
		throw(Notsigned());
	}
	if (executor.getGrade() <= this->GetexecuteG())
	{
		this->execute_form_action();
	}
	else
	{
		throw(RobotomyException());
	}
}

void RobotomyRequestForm::execute_form_action()
{
	int	i;

	std::cout << (rand() % 3 + 1) << std::endl
				<< std::endl;
	std::cout << (rand() % 3 + 1) << std::endl
				<< std::endl;
	std::srand(time(NULL));
	i = rand() % 2 + 1;
	// std::cout << this->target << "   " << i << "  " << std::endl;
	if (i == 1)
	{
		std::cout << this->target << " has been robotomized successfully 50% of the time" << std::endl;
	}
	else
	{
		std::cout << this->target << " has been failed to  robotomized  50% of the time" << std::endl;
	}
}
