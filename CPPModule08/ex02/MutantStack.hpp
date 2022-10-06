/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   MutantStack.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: atabiti <atabiti@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/01 09:29:37 by atabiti           #+#    #+#             */
/*   Updated: 2022/10/04 09:06:59 by atabiti          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef MUTANTSTACK_HPP
# define MUTANTSTACK_HPP

# include "MutantStack.hpp"
# include <algorithm>
# include <cstddef>
# include <iostream>
# include <iterator> // For std::forward_iterator_tag
# include <stack>

template <typename T, class Container = std::deque<T> >
class MutantStack : public std::stack<T>
{
  public:
	typedef typename Container::iterator iterator;
	MutantStack(){}
	~MutantStack(){};
	MutantStack(const MutantStack &rhs)
	{
		*this = rhs;
	}
	MutantStack operator=(const MutantStack &rhs)
	{
		this->operator=(rhs);
		return (*this);
	}

	int getsize()
	{
		return (this->size());
	}
	iterator begin()
	{
		return (this->c.begin());
	}
	iterator end()
	{
		return (this->c.end());
	}
};






// deque is a sequential container that provides the functionality of a double-ended queue data structure

/* Stack in C++ STL is a LIFO (last-in-first-out) container adapter that uses 
an encapsulated vector/deque/list object as its underlying container.
 In a stack, we both add and delete elements only from the top of the stack.

*/

#endif