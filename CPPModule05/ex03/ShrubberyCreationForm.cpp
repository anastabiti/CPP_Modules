/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ShrubberyCreationForm.cpp                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: atabiti <atabiti@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/15 09:11:29 by atabiti           #+#    #+#             */
/*   Updated: 2022/09/18 11:54:33 by atabiti          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"
#include "Form.hpp"
#include "ShrubberyCreationForm.hpp"

ShrubberyCreationForm::ShrubberyCreationForm()	: Form("Shrubbery", 145, 137)
{
}

ShrubberyCreationForm::ShrubberyCreationForm(std::string targett): Form("Shrubbery", 145, 137)
{
	this->target = targett;
}

ShrubberyCreationForm::~ShrubberyCreationForm()
{
}

ShrubberyCreationForm::ShrubberyCreationForm(ShrubberyCreationForm const &rhs): Form("Shrubbery", 145, 137)
{
	std::cout << "Copy constructor is called (ShrubberyCreationForm) " << std::endl;
	*this = rhs;
}
ShrubberyCreationForm ShrubberyCreationForm::operator=(ShrubberyCreationForm const &rhs)
{
	std::cout << "Operator Overload is called (Bureaucrat)" << std::endl;
	(void)rhs;
	return (*this);
}





const char *ShrubberyCreationForm::NotSignedException::what() const throw()
{
	return ("Not Signed Exception");
}
const char *ShrubberyCreationForm::ShrubberyException::what() const throw()
{
	return ("Shrubbery Exception : Grade Too Low");
}

void ShrubberyCreationForm::execute_form_action(void)
{
	std::ofstream createdfile(target + "_shrubbery");
	
	createdfile << "        # #### #### " << std::endl
				<< "      ### \\/#|### |/#### " << std::endl
				<< "      ##\\/#/ \\||/##/_/##/_# " << std::endl
				<< "   ###  \\/###|/ \\/ # ###" << std::endl
				<< " ##_\\_#\\_\\## | #/###_/_####" << std::endl
				<< "## #### # \\ #| /  #### ##/## " << std::endl
				<< " __#_--###`  |{,###---###-~"
				<< std::endl
				<< "           \\ }{" << std::endl
				<< "            \\}{" << std::endl
				<< "           \\}}{" << std::endl
				<< "            \\{}" << std::endl
				<< "            \\{}" << std::endl
				<< "  ___--__--__{}__--__--__" << std::endl;
			std::cout << "ASCII Three is created  "<< std::endl;
}

void ShrubberyCreationForm::execute(Bureaucrat const &executor)
{
	if (this->Getbool() == false)
		throw(NotSignedException());
	if (executor.getGrade() <= this->GetexecuteG())
		this->execute_form_action();
	else
		throw(Bureaucrat::GradeTooLowException());
}
