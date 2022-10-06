/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   newZombie.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: atabiti <atabiti@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/19 08:33:18 by atabiti           #+#    #+#             */
/*   Updated: 2022/08/23 09:03:20 by atabiti          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#include "Zombie.hpp"


Zombie* newZombie( std::string name )
{
    /* It creates a zombie, name it, and return it so you can use it outside of the function scope. */
    Zombie *newzombie = new Zombie(name);
    return newzombie;
}