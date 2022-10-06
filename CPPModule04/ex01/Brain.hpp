/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Brain.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: atabiti <atabiti@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/08 09:39:14 by atabiti           #+#    #+#             */
/*   Updated: 2022/09/11 11:25:46 by atabiti          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef BRAIN_HPP
# define BRAIN_HPP

# include "Animal.hpp"
# include <iostream>


class Brain
{
  private:
	std::string ideas[100];

  public:
	Brain();
	~Brain();
	Brain(const Brain &rhs);
	const Brain &operator=(const Brain &rhs);
};

#endif