/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ShrubberyCreationForm.hpp                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: atabiti <atabiti@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/15 09:11:27 by atabiti           #+#    #+#             */
/*   Updated: 2022/09/18 11:16:19 by atabiti          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SHRUBBERYCREATIONFORM_HPP
# define SHRUBBERYCREATIONFORM_HPP

# include "Form.hpp"
# include <fstream>
# include <iostream>

class ShrubberyCreationForm : public Form
{
  private:
	std::string target;

  public:
	ShrubberyCreationForm();
	ShrubberyCreationForm(std::string target);
	ShrubberyCreationForm(ShrubberyCreationForm const &rhs);
	ShrubberyCreationForm operator=(ShrubberyCreationForm const &rhs);

	~ShrubberyCreationForm();
	void execute(Bureaucrat const &executor);
	void execute_form_action();
/*+++++++++++++++++++++++++++++++++++++++++++++++++++++++++*/
	class NotSignedException : public std::exception
	{
		virtual const char *what() const throw();
	};
/*+++++++++++++++++++++++++++++++++++++++++++++++++++++++++*/
	class ShrubberyException : public std::exception
	{
		virtual const char *what() const throw();
	};
/*+++++++++++++++++++++++++++++++++++++++++++++++++++++++++*/
};

#endif
