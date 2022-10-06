/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: atabiti <atabiti@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/01 11:33:42 by atabiti           #+#    #+#             */
/*   Updated: 2022/09/07 09:10:04 by atabiti          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"
#include "ScavTrap.hpp"

int	main(void)
{
	ScavTrap a("N1");
	a.init( 100, 50, 20);
	ScavTrap b("N2");
	b.init( 100, 50, 20);
	a.attack("N2");
	b.takeDamage(3);
	b.beRepaired(10);
	b.attack("N1");
	a.takeDamage(100);
//	a.ClapTrap::attack("dfs"); to attack from inherited attack() function
	return (0);
}