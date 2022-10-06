/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanA.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: atabiti <atabiti@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/20 10:22:49 by atabiti           #+#    #+#             */
/*   Updated: 2022/08/24 07:17:09 by atabiti          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef HUMANA_HPP
# define HUMANA_HPP

# include "Weapon.hpp"

class HumanA
{
  private:
  
	// They both have a Weapon and a name.
	Weapon &instance;  // as reference 
	
	std::string name;
	
  public:
  
	//HumanA takes the Weapon in its constructor  
  	HumanA(std::string nam, Weapon& a);//initializer list : This is because references must refer to something and therefore cannot be default constructed.
	  
	//have a member function attack()  that displays...
	void attack();
};

#endif