/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Form.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: atabiti <atabiti@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/13 10:47:29 by atabiti           #+#    #+#             */
/*   Updated: 2022/09/19 08:46:20 by atabiti          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"
#include "Form.hpp"

/*+++++++++++++++++++++++++++++++ Orthodox Canonical Form+++++++++++++++++++++++++++++++++++++++++++*/
Form::Form() : requiredG(), executeG()
{
	
}

Form::Form(std::string NAME, int rG, int eG) : name(NAME), requiredG(rG), executeG(eG)
{
	if (this->requiredG <= 0 || this->executeG <= 0)
	{
		throw(GradeTooHighException());
	}
	else if (this->requiredG >= 150 || this->executeG >= 150)
	{
		throw(GradeTooHighException());
	}
	issigned = false;
}
Form::~Form()
{
	std::cout << "Destructor is called (form) " << std::endl;
}

/*++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++*/

const std::string Form::GetName() const
{
	return (this->name);
}
/*++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++*/

int Form::GetGrade() const
{
	return (this->requiredG);
}

/*++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++*/
bool Form::Getbool() const
{
	return (this->issigned);
}
int Form::GetexecuteG() const
{
	return (this->executeG);
}

/*++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++*/
void Form::beSigned(Bureaucrat const &a)
{
	// std::cout << a.getGrade() << "   " << requiredG << std::endl;
	if (a.getGrade() > requiredG)
	{
		throw(Form::GradeTooLowException());
	}
	else if (a.getGrade() <= requiredG)
	{
		issigned = true;
	}
}
/*++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++*/
std::ostream &operator<<(std::ostream &os, Form const &x)
{
	os << "GRADE : " << x.GetGrade() << " NAME : " << x.GetName() << "  UN/SIGNED " << x.Getbool() << std::endl;
	return (os);
}
/*++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++*/

/*+++++++++++++++++++++++++++++   GradeTooHighException +++++++++++++++++++++++++++++++++++++++++++++*/
/*++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++*/
Form::GradeTooHighException::~GradeTooHighException() throw()
{
	std::cout << "Destructor is called  (Form::GradeTooHighException) " << std::endl;
}
const char *Form::GradeTooHighException::what() const throw()
{
	return ("Exception:GradeTooHigh");
}

/*++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++*/
/*++++++++++++++++++++++++++++++++ GradeTooLowException ++++++++++++++++++++++++++++++++++++++++++*/
Form::GradeTooLowException::~GradeTooLowException() throw()
{
	std::cout << "Destructor is called (Form::GradeTooLowException)" << std::endl;
}
const char *Form::GradeTooLowException::what() const throw()
{
	return ("Exception:GradeTooLow");
}

/*++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++*/
/*++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++*/