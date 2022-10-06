/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: atabiti <atabiti@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/02 12:28:12 by atabiti           #+#    #+#             */
/*   Updated: 2022/09/07 09:18:43 by atabiti          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"
#include "ScavTrap.hpp"
/*+++++++++++++++++++++++ Orthodox Canonical Form +++++++++++++++++++++++++ */

ScavTrap::ScavTrap()
{
	std::cout << YELLOW << "Default constructor is called (from ScavTrap) " << std::endl;
}

ScavTrap::ScavTrap(std::string name)
{
	std::cout << YELLOW << "Constructor is called (from ScavTrap) " << std::endl;
	this->setname(name);
	
}

ScavTrap::~ScavTrap()
{
	std::cout << YELLOW << "Destructor is called (from ScavTrap)" << std::endl;
}

ScavTrap::ScavTrap(ScavTrap const &rhs)
{
	std::cout << YELLOW << "Copy constructor is called (from ScavTrap) " << std::endl;
		*this = rhs;
}

ScavTrap &ScavTrap::operator=(ScavTrap const &rhs)
{

	std::cout << YELLOW << "Oerload Operator is called (from ScavTrap) " << std::endl;
	(void) rhs;
	return (*this);
}
/*++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++ */




/*+++++++++++++++++++++++  Member functions  +++++++++++++++++++++++++ */
void ScavTrap::attack(const std::string &target)
{
	std::cout << BLUE << std::endl
				<< "ATTACK                   (╯°□°)--⌐╦╦═─ - - -" << std::endl
				<< std::endl;
	std::cout << "        "
				<< "███████░░░░░░ " << std::endl
				<< "    ▃▃▃▄▅█████████▅▄▂▂▄▄▄▄▄▄▄▄▄▄▄  💥💥💥💥" << std::endl
				<< "     [███████████████████] " << std::endl
				<< "      ◥⊙▲⊙▲⊙▲⊙▲⊙▲⊙▲⊙◤.." << std::endl;
	std::cout << BLUE << "ScavTrap " << this->getname() << " attacks " << target << " ,	causing " << this->getdamage() << " points of damage!" << std::endl;
}

    void ScavTrap:: guardGate()
	{
		std::cout << "special capacity" << std::endl;
	}

/*++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++ */
