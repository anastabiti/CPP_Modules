/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: atabiti <atabiti@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/19 11:34:57 by atabiti           #+#    #+#             */
/*   Updated: 2022/08/23 09:47:02 by atabiti          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ZOMBIE_HPP
# define ZOMBIE_HPP
# include <iostream>

class Zombie
{
	std::string name;

  public:
	Zombie();
	~Zombie();
	Zombie(std::string name);
	void initit(std::string name);
	void announce(void);
};

Zombie	*zombieHorde(int N, std::string name);

#endif
