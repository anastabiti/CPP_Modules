/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PresidentialPardonForm.cpp                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: atabiti <atabiti@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/15 12:23:56 by atabiti           #+#    #+#             */
/*   Updated: 2022/09/19 09:23:43 by atabiti          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"
#include "Form.hpp"
#include "PresidentialPardonForm.hpp"

PresidentialPardonForm::PresidentialPardonForm(): Form("Presidential", 25, 5)
{
}

PresidentialPardonForm::PresidentialPardonForm(std::string target): Form("Presidential", 25, 5)
{
	this->target = target;
}

PresidentialPardonForm::~PresidentialPardonForm()
{
	std::cout << "Destructor is called (PresidentialPardonForm)" << std::endl;
}

PresidentialPardonForm::PresidentialPardonForm(PresidentialPardonForm const &rhs)	: Form("Presidential", 25, 5)
{
	*this = rhs;
}
PresidentialPardonForm PresidentialPardonForm::operator=(PresidentialPardonForm const &rhs)
{
	(void)rhs;
	return (*this);
}

const char *PresidentialPardonForm::PresidentialException::what() const throw()
{
	return ("Presidential Exception : Grade Too Low");
}

const char *PresidentialPardonForm::NotSigned::what() const throw()
{
	return ("Presidential Exception : Not Signed");
}

void PresidentialPardonForm::execute_form_action()
{
	std::cout << target << " , has been pardoned by Zaphod Beeblebrox  " << std::endl;
}
void PresidentialPardonForm::execute(Bureaucrat const &executor)
{
	if (this->Getbool() == false)
	{
		throw(NotSigned());
	}
	if (executor.getGrade() < this->GetexecuteG())
		this->execute_form_action();
		else
	throw(PresidentialException());
}