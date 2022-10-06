/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanB.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: atabiti <atabiti@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/20 11:20:49 by atabiti           #+#    #+#             */
/*   Updated: 2022/08/24 07:20:35 by atabiti          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef HUMANB_HPP
# define HUMANB_HPP

# include "Weapon.hpp"

class HumanB
{
  private:
	Weapon *wp; // as ptr
	std::string name;

  public:
	HumanB(std::string ty);
	HumanB(std::string ty, Weapon a);
	void attack();
	void setWeapon(Weapon &a);
};

#endif