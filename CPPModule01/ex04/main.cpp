/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: atabiti <atabiti@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/20 13:12:04 by atabiti           #+#    #+#             */
/*   Updated: 2022/08/24 07:44:32 by atabiti          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "sed.hpp"

int	ft_sed(std::string filename, std::string s1, std::string s2)
{
	size_t	i;
	int		lenght1;
	std::string str;

	if (s1 == s2) //compare the two strings if thery are identical 
	{
		std::cout << "ERROR !  s1 and s2 are identical  : Nothing to change\n";
		return (0);
	}
	
/*____________________________________________________OPEN FILE TO READ____________________________________________________*/
	
	std::ifstream instream; //Creating an ifstream Object
	instream.open(filename); //open file 
	
	if (!instream.is_open()) // Check if the file is opened correctly 
	{
		std::cout << "No such file!\n";
		return (1);
	}
	
	std::string extension = ".replace";  // replace file extension
	
	std::string replaceit = filename + extension; // merge filename + extension = filename.replace
	
/*______________________________________________________________________________________________________________________________*/



/*____________________________________________________OPEN FILE TO WRITE____________________________________________________*/

	std::ofstream newfile(replaceit);
	std::string temp;
	i = 0;
	while (getline(instream, str))
	{
		i = 0;
		temp = str;
		while ((i = (str.find(s1, i))) < str.length())
		{
			lenght1 = s1.length();
			temp = str.erase(i, lenght1).insert(i, s2);
			i += s2.length();
		}
		newfile << temp << std::endl;
	}
/*______________________________________________________________________________________________________________________________*/



/* Close opened streams */
	instream.close();
	newfile.close();

	return (0);
}





int	main(int ac, char **av)
{
	if (ac == 4)
	{
		ft_sed(av[1], av[2], av[3]);
	}
	else
		std::cout << "ERROR ! This program takes three parameters in the following order: a filename and two strings, s1 and s2 \n";
	return (0);
}