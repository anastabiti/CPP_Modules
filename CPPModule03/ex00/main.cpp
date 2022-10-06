/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: atabiti <atabiti@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/01 11:33:42 by atabiti           #+#    #+#             */
/*   Updated: 2022/09/07 09:15:06 by atabiti          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"

int	main(void)
{
	//case 1 Enmy Won th war
	ClapTrap a("HERO");
	ClapTrap b("ENMY");
	//war started
	a.attack("ENMY");
	b.takeDamage(8);
	b.beRepaired(10);
	a.attack("ENMY");
	b.takeDamage(12);
	
	// //case 2  //HERO Won th war
	// ClapTrap a("HERO");
	// ClapTrap b("ENMY");
	// //war started
	// a.attack("ENMY");
	// b.takeDamage(4);
	// a.attack("ENMY");
	// b.takeDamage(5);
	// b.attack("HERO");
	// a.takeDamage(3);
	// a.attack("ENMY");
	// b.takeDamage(2);
	// b.attack("HERO");
	// a.takeDamage(1);

	//case 3  beRepaired before losing
	// ClapTrap a("HERO");
	// ClapTrap b("ENMY");

	// b.attack("HERO");
	// a.takeDamage(3);
	// a.attack("ENMY");
	// b.takeDamage(2);
	// b.attack("HERO");
	// a.takeDamage(5);
	// a.attack("ENMY");
	// b.takeDamage(4);
	// a.beRepaired(3);
	// a.attack("ENMY");
	// b.takeDamage(2);
	// b.attack("HERO");
	// a.takeDamage(1);
	// a.attack("ENMY");
	// b.takeDamage(5);
	return (0);
}