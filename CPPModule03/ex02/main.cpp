/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: atabiti <atabiti@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/01 11:33:42 by atabiti           #+#    #+#             */
/*   Updated: 2022/09/07 09:23:20 by atabiti          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"
#include "FragTrap.hpp"
#include "ScavTrap.hpp"

int	main(void)
{
	FragTrap a("a");
	FragTrap b("b");
	a.init( 100,100, 30);
	a.highFivesGuys();
	b.init( 100,100, 30);
	b.highFivesGuys();
	a.attack("b");
	b.takeDamage(100);
// 	FragTrap b("b");
// 	b.init( 100,100, 30);
// 	b.highFivesGuys();


// b.attack("a");
// a.takeDamage(120);
	return (0);
}