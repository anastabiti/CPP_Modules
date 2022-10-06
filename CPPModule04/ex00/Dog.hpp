/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: atabiti <atabiti@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/07 11:18:39 by atabiti           #+#    #+#             */
/*   Updated: 2022/09/11 11:33:50 by atabiti          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef DOG_HPP
# define DOG_HPP
# include "Animal.hpp"
# include <iostream>

class Dog : public Animal
{
  public:
	Dog();
	~Dog();
	Dog(const Dog &rhs);
	Dog &operator=(const Dog &rhs);

	//member function
	void makeSound(void) const;
};

#endif