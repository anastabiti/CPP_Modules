/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: atabiti <atabiti@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/30 07:34:38 by atabiti           #+#    #+#             */
/*   Updated: 2022/09/01 09:10:25 by atabiti          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"

int main( void ) {
Fixed a;
Fixed const b( Fixed( 5.05f ) * Fixed( 2 ) );
std::cout << a << std::endl;
std::cout << ++a << std::endl;
std::cout << a << std::endl;
std::cout << a++ << std::endl;
std::cout << a << std::endl;
std::cout << b << std::endl;
std::cout << Fixed::max( a, b ) << std::endl;


/* Comparison Operators */
// Fixed a(12);
// Fixed b(10);
// std::cout << (a > b) << std::endl;
// Fixed a1(2);
// Fixed b1(10);
// std::cout << (a1 > b1) << std::endl;

// Fixed a(1.2f);
// Fixed b(10.233f);
// std::cout << (a < b) << std::endl;
// Fixed a1(212.4f);
// Fixed b1(10.31f);
// std::cout << (a1 == b1) << std::endl;

/* arithmetics */

// Fixed a(100);
// Fixed b(20);
// std::cout << (a + b) << std::endl;
// std::cout << (a - b) << std::endl;
// std::cout << (a / b) << std::endl;
// std::cout << (a * b) << std::endl;





}