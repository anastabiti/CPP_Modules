/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: atabiti <atabiti@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/07 11:23:58 by atabiti           #+#    #+#             */
/*   Updated: 2022/09/11 11:35:49 by atabiti          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CAT_HPP
# define CAT_HPP
# include "Animal.hpp"
# include "Brain.hpp"
# include <iostream>

class Cat : public Animal
{
  private:
	Brain *br;

  public:
	Cat();
	virtual ~Cat();
	Cat(const Cat &rhs);
	Cat &operator=(Cat const &rhs);
	void makeSound(void) const;
};

#endif