/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: atabiti <atabiti@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/26 08:41:05 by atabiti           #+#    #+#             */
/*   Updated: 2022/09/28 10:21:52 by atabiti          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "iter.hpp"


int main() 
{
int tab[] = {0, 1, 2, 3, 4 };
std::string tab1[] = {"1337", "42", "SCHOOL"};
double tab2[] = {12.43,411.54,98.99,199.17};


iter(tab, 5, f1<int>);
std::cout << std::endl;


iter(tab1, 5, f1<std::string>);
std::cout << std::endl;


iter(tab2, 4, f1<double>);
return 0;
}


