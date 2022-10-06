/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: atabiti <atabiti@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/01 11:33:47 by atabiti           #+#    #+#             */
/*   Updated: 2022/09/07 09:14:16 by atabiti          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"
#define RED "\033[31m"    /* Red */
#define GREEN "\033[32m"  /* Green */
#define YELLOW "\033[33m" /* Yellow */
#define BOLDMAGENTA "\033[1m\033[35m"
#define BOLDCYAN "\033[1m\033[36m"
#define WHITE "\033[37m" 

/*+++++++++++++++++++++++ Orthodox Canonical Form +++++++++++++++++++++++++ */

ClapTrap::ClapTrap()
{
	std::cout << YELLOW << "Default constructor is called " << std::endl;
	this->hitpoints = 10; //  health of the ClapTrap
	this->energy = 10;
	this->damage = 0;
}

ClapTrap::~ClapTrap()
{
	std::cout << YELLOW << "Destructor is called " << std::endl;
}

ClapTrap::ClapTrap(std::string name)
{
	std::cout << YELLOW << "Constructor is called " << std::endl;
	this->name = name;
	this->hitpoints = 10; //  health of the ClapTrap
	this->energy = 10;
	this->damage = 0;
}

ClapTrap::ClapTrap(ClapTrap const &rhs)
{
	std::cout << YELLOW << "Copy constructor is called" << std::endl;
	*this = rhs; 
}

ClapTrap &ClapTrap::operator=(ClapTrap const &rhs)
{
	std::cout << YELLOW << "Overload operator is called" << std::endl;
	this->damage = rhs.damage;
	this->energy = rhs.energy;
	this->hitpoints = rhs.damage;
	return (*this);
}
/*++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++ */

/*+++++++++++++++++++++++  Member functions  +++++++++++++++++++++++++ */
void ClapTrap::attack(const std::string &target)
{
	this->energy -= 1;
	if (this->energy <= 0)
	{
		std::cout << RED << this->name << "  DIED " << std::endl;
	}
	std::cout << RED << "--⌐╦╦═─ - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -" << std::endl;
	std::cout << WHITE << std::endl
				<< "ATTACK                   (╯°□°)--⌐╦╦═─ - - -" << std::endl
				<< std::endl;
	std::cout << "ClapTrap " << BOLDMAGENTA << this->name << WHITE << " attacks " << BOLDMAGENTA << target << WHITE << ", causing " << damage << " points of damage!" << std::endl;
	std::cout << YELLOW << this->name << " Energy : " << this->energy << " Hit points : " << this->hitpoints << std::endl;
	// std::cout << RED << "____________________________________________________________________________________" << std::endl;
}

/*++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++ */

void ClapTrap::takeDamage(unsigned int amount)
{
	std::cout << RED << "--⌐╦╦═─ - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -" << std::endl;
	std::cout << WHITE << std::endl
			<<	this->name << " TAKE DAMAGE           ─╦╤  \\(╥_╥) /  ╦╤─ " << std::endl
				<< std::endl;
	this->hitpoints = this->hitpoints - amount;
	this->damage += amount;
	if (this->hitpoints <= 0)
	{
		std::cout << RED << this->name << "  DIED " << std::endl;
	}
	std::cout << YELLOW << this->name << " Energy : " << this->energy << " Hit points : " << this->hitpoints << std::endl;
}

/*++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++ */

void ClapTrap::beRepaired(unsigned int amount)
{
	std::cout << GREEN << "--⌐╦╦═─ - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -" << std::endl;
	std::cout << std::endl
				<< this->name << " REPAIRED         ヽ༼﻿ ͡° ͜ʖ ͡° ༽ ﾉ   (~˘▾˘)~     (☞ﾟヮﾟ)☞" << std::endl
				<< std::endl;
	this->hitpoints += amount;
	std::cout << YELLOW << this->name << " Energy : " << this->energy << " Hit points : " << this->hitpoints << std::endl;
	std::cout << GREEN << "--⌐╦╦═─ - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -" << std::endl;
}
/*++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++ */