/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Brain.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: atabiti <atabiti@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/08 09:39:17 by atabiti           #+#    #+#             */
/*   Updated: 2022/09/11 11:26:34 by atabiti          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Brain.hpp"
#define YELLOW "\033[33m" /* Yellow */




/* +++++++++++++++++++++++++++++++++   canonical orthodox  form +++++++++++++++++++++++++++++++++ */

Brain::Brain()
{
	std::cout << YELLOW << "Default constructor is called (BRAIN) " << std::endl;
}

Brain::~Brain()
{
	std::cout << YELLOW << "Destructor is called (BRAIN) " << std::endl;
}

Brain::Brain(const Brain &rhs)
{
	std::cout << YELLOW << "copy constructor is called (BRAIN) " << std::endl;
	*this = rhs;
}

const Brain &Brain::operator=(const Brain &rhs)
{
	int	i;

	std::cout << YELLOW << "Operator overload is called (BRAIN) " << std::endl;
	i = 0;
	while (i < 100)
	{
		this->ideas[i] = rhs.ideas[i];
		i++;
	}
	return (*this);
}
/*+++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++ */
