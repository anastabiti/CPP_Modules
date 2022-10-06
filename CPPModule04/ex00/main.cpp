/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: atabiti <atabiti@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/07 11:05:07 by atabiti           #+#    #+#             */
/*   Updated: 2022/09/11 11:23:59 by atabiti          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Animal.hpp"
#include "Cat.hpp"
#include "Dog.hpp"
#include "WrongAnimal.hpp"
#include "WrongCat.hpp"

int	main(void)
{
	/*  Correct sound   */
	const Animal *meta = new Animal();
	const Animal *j = new Dog();
	const Animal *i = new Cat();
	std::cout << j->getType() << " Type " << std::endl;
	std::cout << i->getType() << " Type" << std::endl;
	i->makeSound(); //will output the cat sound!
	j->makeSound();
	meta->makeSound();

	/*  WrongAnimal sound   */
	// const WrongAnimal *metaa = new WrongAnimal();
	// const WrongAnimal *ii = new WrongCat();
	// std::cout << ii->getType() << " " << std::endl;
	// ii->makeSound(); //will output the cat sound!
	// metaa->makeSound();
	//free
	delete meta;
	delete j;
	delete i;
	// delete metaa;
	// delete ii;

	return (0);
}