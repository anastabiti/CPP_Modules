/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: atabiti <atabiti@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/24 11:25:05 by atabiti           #+#    #+#             */
/*   Updated: 2022/09/28 09:18:59 by atabiti          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "templates.hpp"
#include <iostream>


int	main(void)
{
	/*+++++++++++++++++++++++++++ int ++++++++++++++++++++++++++++++++*/
	int	a;
	int	b;
	a = 2;
	b = 3;
	::swap(a, b);
	std::cout << "a = " << a << ", b = " << b << std::endl;
	std::cout << "min( a, b ) = " << ::min( a, b ) << std::endl;
	std::cout << "max( a, b ) = " << ::max( a, b ) << std::endl;
	
	/*+++++++++++++++++++++++++++ std::string +++++++++++++++++++++++++*/
	std::cout << "____________________________________________________"<< std::endl;
	std::string c = "chaine1";
	std::string d = "chaine2";
	
	::swap(c, d);
	std::cout << "c = " << c << ", d = " << d << std::endl;
	std::cout << "min( c, d ) = " << ::min( c, d ) << std::endl;
	std::cout << "max( c, d ) = " << ::max( c, d ) << std::endl;

	
	std::cout << "____________________________________________________"<< std::endl;

	
	/*+++++++++++++++++++++++++++ char +++++++++++++++++++++++++++++++*/
	char e = 'A';
	char f  = 'B';
	std::cout << "min( e, f) = " << min( e, f ) << std::endl;
	std::cout << "max( e, f) = " << max( e, f ) << std::endl;
	std::cout << "e = " << e<< "  f = " << f <<  std::endl;
	swap(e, f);
	std::cout << "e = " << e<< "  f = " << f <<  std::endl;
	/*+++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++*/
	std::cout << "____________________________________________________"<< std::endl;

	
	/*+++++++++++++++++++++  float  ++++++++++++++++++++++++++++++*/
	float fl1 = 1337.42; 
	float fl2 = 42.1337;
	std::cout << "fl1 = " << fl1 << "  fl2 = " << fl2 <<  std::endl;
	std::cout << "min( fl1, fl2) = " << min( fl1, fl2 ) << std::endl;
	std::cout << "max( fl1, fl2) = " << max( fl1, fl2 ) << std::endl;
	/*+++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++*/

	return (0);
}
