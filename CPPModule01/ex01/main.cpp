/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: atabiti <atabiti@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/19 11:34:47 by atabiti           #+#    #+#             */
/*   Updated: 2022/08/23 09:54:38 by atabiti          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

int	main(void)
{
	Zombie *ptr = zombieHorde(12, "ZO");

	/*      delete all the zombies  : deallocation */
	delete[] ptr;
	/* ---------------------------  */

	return (0);
}