/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: atabiti <atabiti@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/19 08:33:26 by atabiti           #+#    #+#             */
/*   Updated: 2022/08/23 09:29:25 by atabiti          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ZOMBIE_HPP
# define ZOMBIE_HPP
# include <iostream>
class Zombie
{
  private:
	std::string name;

  public:
	Zombie(std::string name);
	~Zombie();
	//member function
	void announce(void);
};
Zombie	*newZombie(std::string name);
void	randomChump(std::string name);
#endif