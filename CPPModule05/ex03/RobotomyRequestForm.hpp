/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   RobotomyRequestForm.hpp                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: atabiti <atabiti@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/15 12:21:42 by atabiti           #+#    #+#             */
/*   Updated: 2022/09/18 11:20:50 by atabiti          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ROBOTOMYREQUESTFORM_HPP
# define ROBOTOMYREQUESTFORM_HPP

# include "Form.hpp"
# include <iostream>

class	Bureaucrat;
class	Form;
class RobotomyRequestForm : public Form
{
  private:
	std::string target;

  public:
	RobotomyRequestForm();
	RobotomyRequestForm(std::string target);
	RobotomyRequestForm(RobotomyRequestForm const &rhs);
	RobotomyRequestForm operator=(RobotomyRequestForm const &rhs);
	~RobotomyRequestForm();
	void execute(Bureaucrat const &executor);
	void execute_form_action();
	class Notsigned : public std::exception
	{
		virtual const char *what() const throw();
	};
	class RobotomyException : public std::exception
	{
		virtual const char *what() const throw();
	};
};

#endif
