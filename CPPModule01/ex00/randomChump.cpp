/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   randomChump.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: atabiti <atabiti@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/19 08:33:21 by atabiti           #+#    #+#             */
/*   Updated: 2022/08/23 09:29:33 by atabiti          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

void randomChump( std::string name )
{
    /* It creates a zombie, name it, and the zombie announces itself. */
    Zombie instance(name );
    std::cout << name << " : BraiiiiiiinnnzzzZ..." << "\n" ;
}