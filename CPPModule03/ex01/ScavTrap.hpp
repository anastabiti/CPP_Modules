/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: atabiti <atabiti@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/02 12:28:15 by atabiti           #+#    #+#             */
/*   Updated: 2022/09/07 08:54:56 by atabiti          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SCAVTRAP_HPP
# define SCAVTRAP_HPP
# define RED "\033[31m"   /* Red */
# define GREEN "\033[32m" /* Green */
# define YELLOW "\033[33m"
# define BLUE "\033[34m"
# include "ClapTrap.hpp"



/*

	public inheritance makes :
	public members of  the base class public in the derived class,  
	and the   protected members of the base class remain protected in the derived class. 

*/ 

class ScavTrap : public ClapTrap // inherit the constructors and destructor... from ClapTrap (inheritance) 
// Base Class  = ClapTrap      			
// Derived Class = ScavTrap
{
  private:
  // Nothing
  public:
	ScavTrap();
	ScavTrap(std::string name);
	~ScavTrap();
	ScavTrap(ScavTrap const &rhs);
	ScavTrap &operator=(ScavTrap const &rhs);
	//
	void attack(const std::string &target);
	void guardGate();
};

#endif