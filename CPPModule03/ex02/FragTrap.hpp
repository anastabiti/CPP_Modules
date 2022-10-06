/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: atabiti <atabiti@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/05 11:34:04 by atabiti           #+#    #+#             */
/*   Updated: 2022/09/07 09:24:35 by atabiti          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FRAGTRAP_HPP
# define FRAGTRAP_HPP
# include "ClapTrap.hpp"
# include <iostream>

# define RED "\033[31m"    /* Red */
# define GREEN "\033[32m"  /* Green */
# define YELLOW "\033[33m" /* Yellow */
# define BOLDMAGENTA "\033[1m\033[35m"
# define BOLDCYAN "\033[1m\033[36m"

/*

	public inheritance makes :
	public members of  the base class public in the derived class,  
	and the   protected members of the base class remain protected in the derived class. 

*/ 

class FragTrap : public ClapTrap
{
  private:
// nothing
  public:
	FragTrap(/* args */);
	FragTrap(std::string nm);
	~FragTrap();
	FragTrap(const FragTrap &rhs);
	FragTrap &operator=(const FragTrap &rhs);
	void highFivesGuys(void);
};

#endif