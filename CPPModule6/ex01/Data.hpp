/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Data.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: atabiti <atabiti@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/21 12:38:29 by atabiti           #+#    #+#             */
/*   Updated: 2022/09/25 11:21:09 by atabiti          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef DATA_HPP
# define DATA_HPP
# include <iostream>
#include <stdint.h>

class Data
{
  public:
	int test;
  std::string name;
};

uintptr_t	serialize(Data *ptr);
Data		*deserialize(uintptr_t raw);

#endif