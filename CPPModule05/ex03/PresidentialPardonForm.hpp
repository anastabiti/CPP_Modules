/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PresidentialPardonForm.hpp                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: atabiti <atabiti@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/15 12:23:50 by atabiti           #+#    #+#             */
/*   Updated: 2022/09/18 11:23:29 by atabiti          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PRESIDENTIALPARDONFORM_HPP
# define PRESIDENTIALPARDONFORM_HPP
# include "Bureaucrat.hpp"
# include "Form.hpp"
# include <iostream>
class PresidentialPardonForm : public Form
{
  private:
	std::string target;

  public:
	PresidentialPardonForm();
	PresidentialPardonForm(std::string target);
	PresidentialPardonForm(PresidentialPardonForm const &rhs);
	PresidentialPardonForm operator=(PresidentialPardonForm const &rhs);
	
	~PresidentialPardonForm();
	void execute(Bureaucrat const &executor);
	/*+++++++++++++++++++++++++++++++++++++++++++++++++++++++++*/
	class PresidentialException : public std::exception
	{
		const char *what() const throw();
	};
	/*+++++++++++++++++++++++++++++++++++++++++++++++++++++++++*/
	class NotSigned : public std::exception
	{
		const char *what() const throw();
	};
	/*+++++++++++++++++++++++++++++++++++++++++++++++++++++++++*/
	void execute_form_action();
};

#endif