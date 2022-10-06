/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   megaphone.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: atabiti <atabiti@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/06 07:48:45 by atabiti           #+#    #+#             */
/*   Updated: 2022/08/17 09:54:27 by atabiti          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <string>

int	main(int ac, char **av)
{
	(void)ac;
	if (av[1] != NULL)
	{
		int x = 1;
		while (av[x])
		{
			int i = 0;
			while (av[x][i])
			{
				char tmp;
				tmp = av[x][i];
				std::cout << (char)toupper(tmp);
				i++;
			}
			x++;
			if (av[x] != NULL)
				std::cout << " ";
		}
		std::cout << "\n";
	}
	else
	{
		std::cout << "* LOUD AND UNBEARABLE FEEDBACK NOISE *" << "\n";
	}
	return (0);
}