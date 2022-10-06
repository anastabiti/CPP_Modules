/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: atabiti <atabiti@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/07 11:05:07 by atabiti           #+#    #+#             */
/*   Updated: 2022/09/11 10:50:51 by atabiti          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Animal.hpp"
#include "Cat.hpp"
#include "Dog.hpp"
#include "WrongAnimal.hpp"
#include "WrongCat.hpp"
#define WHITE "\033[37m" /* White */

int	main(void)
{
	/*++++++++++++++*++++++++++++++    test 1 *++++++++++++++*++++++++++++++*/

	// const Animal *j = new Dog();
	// const Animal *i = new Cat();
	// j->makeSound();
	// i->makeSound();
	// delete j; //should not create a leak
	// delete i;
	/*++++++++++++++*++++++++++++++*++++++++++++++*++++++++++++++*+++++++++++++*/

	/*++++++++++++++*++++++++++++++    test 2 *++++++++++++++*++++++++++++++*/

	Animal *dogcat[4];
	int i = 0;
	while (i < 2)
	{
		dogcat[i] = new Cat();
		i++;
	}
	while (i < 4)
	{
		dogcat[i] = new Dog();
		i++;
	}
	//Free
	int x = 0;
	while (x < 4)
	{
		delete dogcat[x];
		x++;
	}
	/*++++++++++++++*++++++++++++++*++++++++++++++*++++++++++++++*+++++++++++++*/

	/*++++++++++++++*++++++++++++++    test 3 *++++++++++++++*++++++++++++++*/
	// Dog basic;
	// {
	// 	Dog tmp = basic;
	// }
	/*++++++++++++++*++++++++++++++*++++++++++++++*++++++++++++++*+++++++++++++*/

	/*++++++++++++++*++++++++++++++    test 4 *++++++++++++++*++++++++++++++*/
	//Delete called on non-final 'Animal' that has virtual functions but non-virtual destructor
	// Animal *f = new Animal();
	// delete f;
	/*++++++++++++++*++++++++++++++*++++++++++++++*++++++++++++++*+++++++++++++*/
	return (0);
}