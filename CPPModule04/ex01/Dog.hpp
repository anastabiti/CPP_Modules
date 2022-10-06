/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: atabiti <atabiti@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/07 11:18:39 by atabiti           #+#    #+#             */
/*   Updated: 2022/09/11 11:35:55 by atabiti          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef DOG_HPP
# define DOG_HPP
# include "Animal.hpp"
# include "Brain.hpp"
# include <iostream>

class Dog : public Animal
{
  private:
	Brain *br;

  public:
	Dog();
	virtual ~Dog();
	Dog(const Dog &rhs);
	Dog &operator=(const Dog &rhs);

	//member function
	void makeSound(void) const;
	//test
};

#endif