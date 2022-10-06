/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Form.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: atabiti <atabiti@student.1337.ma>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/13 10:47:32 by atabiti           #+#    #+#             */
/*   Updated: 2022/09/18 18:52:05 by atabiti          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FORM_HPP
# define FORM_HPP
# include <iostream>
class	Bureaucrat;
class	Form;

class Form
{
  private:
	const std::string name;
	bool issigned;
	const int requiredG;
	const int executeG;

  public:
	Form(std::string NAME, int rG, int eG);
	Form();
	~Form();
	const std::string GetName() const;
	int GetGrade() const;
	bool Getbool() const;
	int GetexecuteG() const;
	void beSigned(Bureaucrat const &a);
	virtual void execute(Bureaucrat const &executor) = 0; // base class Form must be an abstract class
	/*+++++++++++++++++++++++++++++++++++++++++++++++++++++++++*/
	class GradeTooHighException : public std::exception
	{
		public:
		~GradeTooHighException() throw();
		virtual const char *what() const throw();
	};
	/*+++++++++++++++++++++++++++++++++++++++++++++++++++++++++*/
	class GradeTooLowException : public std::exception
	{
		public:
		~GradeTooLowException() throw();
		virtual const char *what() const throw();
	};
	/*+++++++++++++++++++++++++++++++++++++++++++++++++++++++++*/
};
std::ostream &operator<<(std::ostream &os, Form const &x);
#endif
