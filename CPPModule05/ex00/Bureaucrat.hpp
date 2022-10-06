/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bureaucrat.hpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: atabiti <atabiti@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/11 14:11:40 by atabiti           #+#    #+#             */
/*   Updated: 2022/09/18 11:34:33 by atabiti          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef BUREAUCRAT_HPP
# define BUREAUCRAT_HPP
# include <iostream>

/* class exception {
public:
  exception () throw();
  exception (const exception&) throw();
  exception& operator= (const exception&) throw();
  virtual ~exception() throw();
    virtual const char* what() const throw();
 */

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
	
	/*+++++++++++++++++++++++++++++++++++++++++ Member Functions ++++++++++++++++++++++++++++++++++++++++*/
	void increment();
	void decrement();
	//getters
	std::string getName() const;
	int getGrade() const;

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
		 ~GradeTooHighException() throw();
		virtual const char *what() const throw();
	};

	/*++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++*/
};

std::ostream &operator<<(std::ostream &os, Bureaucrat const &rhs);
#endif