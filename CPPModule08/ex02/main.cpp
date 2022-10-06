/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: atabiti <atabiti@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/01 09:29:33 by atabiti           #+#    #+#             */
/*   Updated: 2022/10/04 09:09:22 by atabiti          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "MutantStack.hpp"
#include <list>

int	main(void)
{
	{
		MutantStack<int> mstack;
		mstack.push(5);
		mstack.push(17);
		std::cout << "Top = " <<mstack.top() << std::endl;
		mstack.pop();
		std::cout << "Size = "<< mstack.size() << std::endl;
		mstack.push(3);
		mstack.push(5);
		mstack.push(737);
		mstack.push(67);
		mstack.push(344);
		mstack.push(453);
		mstack.push(804);
		std::cout << "Size = "<< mstack.size() << std::endl;
		std::cout <<"Top = " <<mstack.top() << std::endl;
		MutantStack<int>::iterator it = mstack.begin();
		MutantStack<int>::iterator ite = mstack.end();
		++it;
		--it;
		while (it != ite)
		{
			std::cout << *it << std::endl;
			++it;
		}
		std::stack<int> s(mstack);
        
	}
    
    //using list
	std::cout << std::endl;
    
	{
		std::list<int> mstack;
		mstack.push_back(5);
		mstack.push_back(17);
		std::cout <<"TOP = " <<  mstack.back() << std::endl;
		mstack.pop_back();
		std::cout <<"Size = " << mstack.size() << std::endl;
		mstack.push_back(3);
		mstack.push_back(5);
		mstack.push_back(737);
		mstack.push_back(67);
		mstack.push_back(344);
		mstack.push_back(453);
		mstack.push_back(804);
		std::cout << "Size = "<< mstack.size() << std::endl;
		std::cout <<"Top = " <<mstack.back() << std::endl;
		std::list<int>::iterator it = mstack.begin();
		std::list<int>::iterator ite = mstack.end();
		++it;
		--it;
		while (it != ite)
		{
			std::cout << *it << std::endl;
			++it;
		}
		std::list<int> s(mstack);
	}
	return (0);
}