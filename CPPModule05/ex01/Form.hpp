/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Form.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: atabiti <atabiti@student.1337.ma>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/13 10:47:32 by atabiti           #+#    #+#             */
/*   Updated: 2022/09/18 18:41:49 by atabiti          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FORM_HPP
# define FORM_HPP
# include <iostream>

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
	Form(Form const &rhs);
	Form operator=(Form const &rhs);
	const std::string GetName() const;
	int GetGrade() const;
	bool Getbool() const;
	int GetexecuteG() const;
	void beSigned( Bureaucrat const &a);
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
