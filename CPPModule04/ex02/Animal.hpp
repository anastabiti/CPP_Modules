/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: atabiti <atabiti@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/07 11:05:47 by atabiti           #+#    #+#             */
/*   Updated: 2022/09/11 11:36:30 by atabiti          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ANIMAL_HPP
# define ANIMAL_HPP
# include <iostream>

/* A virtual function is a member function which is 
declared within a base class and is re-defined (overridden) by a derived class.  */
class Animal
{
  protected:
	std::string type;

  public:
	Animal();
	/* Pure virtual member function */
	virtual ~Animal();

	Animal(const Animal &rhs);
	Animal &operator=(const Animal &rhs);
	std::string getType() const;

	/* Virtual Function  */
	virtual void makeSound(void) const = 0;
	/* The = 0 syntax doesn't mean we are assigning 0 to the function. It's just the way we define pure virtual functions.*/
	//this type of polymorphism is called Runtime Polymorphism   Function Overriding
};

#endif