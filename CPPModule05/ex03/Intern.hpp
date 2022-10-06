/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Intern.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: atabiti <atabiti@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/16 12:26:10 by atabiti           #+#    #+#             */
/*   Updated: 2022/09/18 11:27:43 by atabiti          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef INTERN_HPP
# define INTERN_HPP
# include "Bureaucrat.hpp"
# include "Form.hpp"
# include "PresidentialPardonForm.hpp"
# include "RobotomyRequestForm.hpp"
# include "ShrubberyCreationForm.hpp"
# include <iostream>


class Intern
{
  private:
  public:
	Intern();
	~Intern();
	Intern(Intern const &rhs);
	Intern operator=(Intern const &rhs);
	Form *f1(std::string a)
	{
		return (new ShrubberyCreationForm(a));
	}
	Form *f2(std::string a)
	{
		return (new PresidentialPardonForm(a));
	}
	Form *f3(std::string a)
	{
		return (new RobotomyRequestForm(a));
	}

	class InternfailedException : public std::exception
	{
		virtual const char *what() const throw()
		{
			return ("Intern failed to create Form");
		}
	};
    
	Form *makeForm(std::string form_name, std::string form_taget)
	{
		//return_type (class_name::*pointer_name) (parameter types)
		typedef Form *(Intern::*ptr)(std::string form_taget);
		std::string str[] = {"shrubbery request", "robotomy request","presidential request"};
		ptr newptr[] = {&Intern::f1, &Intern::f2, &Intern::f3};
		int i = 0;
		while (i < 3)
		{
			if (form_name.compare(str[i]) == 0)
			{
				std::cout << "Intern creates " << form_taget << std::endl;
				return ((this->*newptr[i])(form_taget));
			}
			i++;
		}
		throw(InternfailedException());
	}
};

#endif
