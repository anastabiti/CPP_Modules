/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongAnimal.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: atabiti <atabiti@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/08 10:58:50 by atabiti           #+#    #+#             */
/*   Updated: 2022/09/09 08:55:43 by atabiti          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef WRONGANIMA_HPP
# define WRONGANIMA_HPP
# include <iostream>

class WrongAnimal
{
  protected:
	std::string type;

  public:
	WrongAnimal();
	~WrongAnimal();
	WrongAnimal(const WrongAnimal &rhs);
	const WrongAnimal &operator=(const WrongAnimal &rhs);

	//member functions
	void makeSound(void) const;
	std::string getType() const;
};

#endif