/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: atabiti <atabiti@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/07 11:05:47 by atabiti           #+#    #+#             */
/*   Updated: 2022/09/11 11:35:26 by atabiti          ###   ########.fr       */
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
	virtual ~Animal(); //delete called on non-final 'Animal' that has virtual functions but non-virtual destructor
	Animal(const Animal &rhs);
	Animal &operator=(const Animal &rhs);
	std::string getType() const;
	/* Virtual Function  */
	virtual void makeSound(void) const; //this type of polymorphism is called Runtime Polymorphism   Function Overriding
};

#endif