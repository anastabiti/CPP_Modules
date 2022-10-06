/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Span.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: atabiti <atabiti@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/30 10:25:02 by atabiti           #+#    #+#             */
/*   Updated: 2022/10/04 08:57:53 by atabiti          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SPAN_HPP
# define SPAN_HPP
# include <cstdlib>
# include <ctime> // std::time
# include <iostream>
# include <vector>
#include <algorithm>


class Span
{
  private:
	unsigned int N; //a maximum of N integers
	unsigned int iterator;
	std::vector<int> v1;


  public:
	Span();
	Span(unsigned int n);
	~Span();
	Span(const Span &rhs);
	Span &operator=(const Span &rhs);
	void printall(void);
	void fillthem();

	void addNumber(int tobeadded);
	int shortestSpan();
	int longestSpan();
	//exception handling 
	class exp : public std::exception
	{
		const char *what() const throw()
		{
			return ("Exception ");
		}
	};
};

#endif