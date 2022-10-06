/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bureaucrat.hpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: atabiti <atabiti@student.1337.ma>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/11 14:11:40 by atabiti           #+#    #+#             */
/*   Updated: 2022/09/18 18:50:52 by atabiti          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef BUREAUCRAT_HPP
# define BUREAUCRAT_HPP
# include <iostream>
/*   Problem: header files including each other mutually
 was solved by : You shouldn't include the header files inside the other ones,
 just include the header files in your source files. In the headers you can use a forward declaration: */
class	Bureaucrat;
class	Form;

class Bureaucrat
{
  private:
	std::string const name;
	int grade;

  public:
	Bureaucrat();
	~Bureaucrat();
		Bureaucrat(std::string const nameit, int i);
	Bureaucrat(Bureaucrat const &rhs);
		Bureaucrat operator=(Bureaucrat const &rhs);
	void signForm(Form  &g);
	/*+++++++++++++++++++++++++++++++++++++++++ Member Functions ++++++++++++++++++++++++++++++++++++++++*/
	void increment();
	void decrement();
	std::string getName() const;
	int getGrade() const;
	void executeForm(Form &form) const;

	/* ++++++++++++++++++++++++++++++++++++++   Nested classe +++++++++++++++++++++++++++++++++++++*/
	class GradeTooLowException : public std::exception
	{
		public:
		// add throw() to fix the annoying error : exception specification of overriding function is more lax than base version
		~GradeTooLowException() throw();
		virtual const char *what() const throw();
	};
	/* ++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++*/
	/* +++++++++++++++++++++++++++++++++++++ Nested classe +++++++++++++++++++++++++++++++++++++++++++++*/
	class GradeTooHighException : public std::exception
	{
		public:
		virtual ~GradeTooHighException() throw();
		virtual const char *what() const throw();
	};
	/*++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++*/
};

std::ostream &operator<<(std::ostream &os, Bureaucrat const &rhs);
#endif
