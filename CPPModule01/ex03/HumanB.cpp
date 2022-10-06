/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanB.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: atabiti <atabiti@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/20 10:24:29 by atabiti           #+#    #+#             */
/*   Updated: 2022/08/23 10:25:29 by atabiti          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "HumanB.hpp"

	void HumanB::attack()
	{
		std::cout << this->name << " attacks with their    " << wp->getType() << std::endl;
	}

    	void HumanB::setWeapon(Weapon &a)
	{
		wp = &a;
	}

    	HumanB::HumanB(std::string ty)
	{
		this->name = ty;
	}

    	HumanB::HumanB(std::string ty, Weapon a)
	{
		this->name = ty;
				wp = &a;
	}