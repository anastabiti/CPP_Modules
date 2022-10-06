/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: atabiti <atabiti@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/19 08:33:12 by atabiti           #+#    #+#             */
/*   Updated: 2022/08/23 09:26:46 by atabiti          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"
#include<stdlib.h>

 /* Constructor  */
Zombie::Zombie(std::string name)
{
	this->name = name;
}

 /* Destructor */
Zombie::~Zombie()
{
	std::cout << this->name << "  died " << "\n";
}

int	main()
{
	
	/*    creates a zombie with     newZombie                        */
	
		Zombie *zo = newZombie("ZOMBIE (1)");
		zo->announce();

	/*---------------------------------------------------------------*/


	
	
	
	/*    creates a zombie with     randomChump                        */

	randomChump("ZOMBIE (2)");

	/*---------------------------------------------------------------*/


	



	
	/*   Zombies must be destroyed when you don’t need them anymore  */

	delete zo;

	/*---------------------------------------------------------------*/
	
	
	}