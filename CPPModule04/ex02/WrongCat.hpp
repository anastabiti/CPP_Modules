/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongCat.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: atabiti <atabiti@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/08 11:09:08 by atabiti           #+#    #+#             */
/*   Updated: 2022/09/11 11:37:07 by atabiti          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef WRONGCAT_HPP
# define WRONGCAT_HPP
# include "WrongAnimal.hpp"
# include "WrongCat.hpp"
# include <iostream>

class WrongCat : public WrongAnimal
{
 
  public:
	WrongCat();
	~WrongCat();
	WrongCat(const WrongCat &rhs);
	WrongCat &operator=(const WrongCat &rhs);
	//member function
	void makeSound(void) const;
};

#endif