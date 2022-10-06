/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   zombieHorde.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: atabiti <atabiti@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/19 11:34:55 by atabiti           #+#    #+#             */
/*   Updated: 2022/08/23 09:51:13 by atabiti          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

Zombie	*zombieHorde(int N, std::string name)
{
	Zombie *one = new Zombie[N]; // dynamic array of N Zombie objects
	int i = 0;
	
/*---it has to initialize the zombies, giving each one of them the name passed as parameter --- */

	while (i < N)
	{
		one[i].initit(name);
		i++;
	}
/*-----------------------------------------------------------------------------------------------*/


/*------------------- call announce() for each one of the zombies ------------------------------ */


	i = 0;
	while (i < N)
	{
		one[i].announce();
		i++;
	}
/*-----------------------------------------------------------------------------------------------*/
	
	return (one);
}