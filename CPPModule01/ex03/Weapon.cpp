/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Weapon.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: atabiti <atabiti@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/20 09:46:22 by atabiti           #+#    #+#             */
/*   Updated: 2022/08/23 10:28:57 by atabiti          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Weapon.hpp"

const std::string &Weapon::getType()
{
	return (this->type);
}
void Weapon::setType(std::string type)
{
	this->type = type;
}

 Weapon::Weapon(std::string typ)
	{
		this->type = typ;
	}