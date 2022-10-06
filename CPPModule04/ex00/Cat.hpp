/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: atabiti <atabiti@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/07 11:23:58 by atabiti           #+#    #+#             */
/*   Updated: 2022/09/11 11:33:42 by atabiti          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CAT_HPP
# define CAT_HPP
# include "Animal.hpp"
# include <iostream>

class Cat : public Animal
{
  public:
	Cat();
	~Cat();
	Cat(const Cat &rhs);
	Cat &operator=(const Cat &rhs);

	void makeSound(void) const;
};

#endif