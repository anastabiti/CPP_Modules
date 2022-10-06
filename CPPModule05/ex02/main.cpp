/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: atabiti <atabiti@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/11 14:11:49 by atabiti           #+#    #+#             */
/*   Updated: 2022/09/19 09:24:35 by atabiti          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"
#include "Form.hpp"
#include "PresidentialPardonForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "ShrubberyCreationForm.hpp"
int	main(void)
{
	try
	{
		Bureaucrat m("F1", 10);
		ShrubberyCreationForm ROBO("target");
		ROBO.beSigned(m);
		m.executeForm(ROBO);
	}
	catch (std::exception &e)
	{
		std::cout << e.what() << std::endl;
	}
	std::cout << "____________" << std::endl;
	std::cout << std::endl;
	/*++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++*/
	try
	{
		Bureaucrat m("F2", 1337);
		ShrubberyCreationForm ROBO("target2");
		ROBO.beSigned(m);
		m.executeForm(ROBO);
	}
	catch (std::exception &e)
	{
		std::cout << e.what() << std::endl;
	}
	std::cout << std::endl;
	/*++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++*/
	try
	{

				Bureaucrat m("F1", 4);
				PresidentialPardonForm PRE("PRE");
				PRE.beSigned(m);
				m.executeForm(PRE);

	}
	catch (std::exception &e)
	{
				std::cout << e.what() << std::endl;

	}
}
