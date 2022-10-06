/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: atabiti <atabiti@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/11 14:11:49 by atabiti           #+#    #+#             */
/*   Updated: 2022/09/19 09:28:19 by atabiti          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"
#include "Form.hpp"
#include "Intern.hpp"
#include "PresidentialPardonForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "ShrubberyCreationForm.hpp"
int	main(void)
{
		Intern someRandomIntern;
		Form *rrf;
		Intern someRandomIntern1;
		Form *rrf1;
		Intern someRandomIntern3;
		Form *rrf3;

	try
	{
		rrf = someRandomIntern.makeForm("presidential request", "Bender");
	}
	catch (std::exception &e)
	{
		std::cout << e.what() << std::endl;
	}


	try
	{
		rrf1 = someRandomIntern1.makeForm("1337esidential request", "Bender");
	}
	catch (const std::exception &e)
	{
		std::cerr << e.what() << '\n';
	}



	try
	{
				rrf3 = someRandomIntern3.makeForm("robotomy request", "Bender");

	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << '\n';
	}
	
}
