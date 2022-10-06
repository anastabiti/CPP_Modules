/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: atabiti <atabiti@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/01 11:33:45 by atabiti           #+#    #+#             */
/*   Updated: 2022/09/07 08:46:38 by atabiti          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>

#ifndef CLAPTRAP_HPP
# define CLAPTRAP_HPP


class ClapTrap
{
/*++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++ */
  private:
	std::string name;
	int hitpoints;
	int energy;
	int damage;
/*++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++ */

/*++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++ */
  public:
	ClapTrap();
	~ClapTrap();
	ClapTrap(std::string name);
	ClapTrap(ClapTrap const &rhs);
	ClapTrap &operator=(ClapTrap const &rhs);
	//member functions
	void attack(const std::string &target);
	void takeDamage(unsigned int amount);
	void beRepaired(unsigned int amount);
/*++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++ */

};

#endif
