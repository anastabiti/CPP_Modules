/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanA.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: atabiti <atabiti@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/20 11:28:20 by atabiti           #+#    #+#             */
/*   Updated: 2022/08/23 12:56:03 by atabiti          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "HumanA.hpp"

HumanA::HumanA(std::string nam, Weapon &a) : instance(a) //initializer list : This is because references must refer to something and therefore cannot be default constructed. References are not allowed be uninitialized
{
	this->name = nam;
};

void HumanA::attack()
{
	std::cout << this->name << " attacks with their    " << instance.getType() << std::endl;
}
