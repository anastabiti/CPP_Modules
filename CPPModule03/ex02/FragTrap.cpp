/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: atabiti <atabiti@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/05 11:34:07 by atabiti           #+#    #+#             */
/*   Updated: 2022/09/07 09:21:06 by atabiti          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "FragTrap.hpp"

/*+++++++++++++++++++++++ Orthodox Canonical Form +++++++++++++++++++++++++ */

FragTrap::FragTrap()
{
	std::cout << BOLDCYAN << "Default constructor is called (FragTrap)" << std::endl;
}
 FragTrap::FragTrap(std::string nm)
{
	std::cout << BOLDCYAN << "Constructor is called (FragTrap)" << std::endl;
		this->setname(nm);
}

FragTrap::~FragTrap()
{
	std::cout << BOLDCYAN << "Destructor is called  (FragTrap)" << std::endl;
}
FragTrap::FragTrap(const FragTrap &rhs)
{
	std::cout << BOLDCYAN << "copy constructor is called (FragTrap)" << std::endl;
	*this = rhs;
}
FragTrap &FragTrap::operator=(const FragTrap &rhs)
{
	std::cout << BOLDCYAN << "Oevrload operator constructor is called (FragTrap)" << std::endl;
	(void) rhs;
	return (*this);
}
/*++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++ */
void  FragTrap::highFivesGuys(void)
{
	std::cout <<  "FragTrap has a special capacity ✋" << std::endl;
}