/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   easyfind.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: atabiti <atabiti@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/30 09:09:00 by atabiti           #+#    #+#             */
/*   Updated: 2022/10/03 12:45:18 by atabiti          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef EASYFIND_HPP
# define EASYFIND_HPP
# include <algorithm>
# include <iostream>
# include <vector>
#include <array>
#include <list>

template <typename T>
int	easyfind(T a, int n)
{

	if (std::find(a.begin(), a.end(), n) != a.end())
	{
		std::cout << "Found" <<  std::endl;
		return (1);
	}
	else
	{
		std::cout << "Not found " << std::endl;
		return (127);
	}
}

#endif