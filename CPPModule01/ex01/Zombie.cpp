/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: atabiti <atabiti@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/19 11:34:52 by atabiti           #+#    #+#             */
/*   Updated: 2022/08/23 09:49:23 by atabiti          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

Zombie::Zombie()
{
	// Default constructor ; empty I do not need it
}

Zombie::~Zombie()
{
	std::cout << this->name << " is deallocated (IS DEAD)" << "\n";
}

void Zombie::initit(std::string name)
{
	this->name = name;
}

void Zombie::announce(void)
{
	std::cout << this->name << " : is announcing  that he is still alive " << "\n";
}

Zombie::Zombie(std::string name)
{
	this->name = name;
	std::cout << this->name << " created " << "\n";
}