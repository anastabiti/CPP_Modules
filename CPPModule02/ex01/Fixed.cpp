/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: atabiti <atabiti@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/26 09:33:09 by atabiti           #+#    #+#             */
/*   Updated: 2022/09/01 08:51:22 by atabiti          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"

/*+++++++++++++++++++++++ Orthodox Canonical Form +++++++++++++++++++++++++ */

/* 1  Default constructor */
Fixed::Fixed()
{
	this->fixed_point_number_value = 0;
	std::cout << "Default constructor called" << std::endl;
}

/* 2 Copy constructor */
Fixed::Fixed(const Fixed &oldobject)
{
	std::cout << "Copy constructor called" << std::endl;
	*this = oldobject; 		// This part is the part where operator overloading/ Copy assignment operator is executed
}

/* 3  Copy assignment operator */
Fixed &Fixed::operator=(const Fixed &rhs)
{
	std::cout << "Copy assignment operator called " << std::endl;
	this->fixed_point_number_value = rhs.getRawBits();
	return (*this);
}

/* 4 Destructor */
Fixed::~Fixed()
{
	std::cout << "Destructor called" << std::endl;
}
/*+++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++*/



/*+++++++++++++++++++++ Member Functions +++++++++++++++++++++++++++++++++++*/
int Fixed::getRawBits(void) const
{
	return (this->fixed_point_number_value);
}

void Fixed::setRawBits(int const raw)
{
	this->fixed_point_number_value = raw;
}
/*+++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++*/




/*++++++++++++++++++++++++++ Other Constructors and member functions ++++++++++++++++++++++++++++++++*/
//1 takes a constant integer as a parameter. It converts it to the corresponding fixed-point value
Fixed::Fixed(const int nb)
{
	std::cout << "Int constructor called" << std::endl;
	this->fixed_point_number_value = (nb * (256)); //256 = 2^8
}
/*+++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++*/
//2 t takes a constant floating-point number as a parameter. It converts it to the corresponding fixed-point value
// Calculate x = floating_input 	* 2^(fractional_bits) and Round x to the nearest whole number (e.g. round(x))
Fixed::Fixed(const float nbr)
{
	std::cout << "Float constructor called" << std::endl;
	this->fixed_point_number_value = (int)roundf(nbr * (256));
}
/*+++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++*/
//3  converts the fixed-point value to a floating-point value
float Fixed::toFloat(void) const
{
	return ((float)this->fixed_point_number_value / 256);
}
/*+++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++*/
//4  converts the fixed-point value to an integer value
int Fixed::toInt(void) const
{
	return ((int)this->fixed_point_number_value / (int)256);
}
/*+++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++*/

std::ostream &operator<<(std::ostream &outputt, Fixed const &rhs)
{
	outputt << rhs.toFloat();
	return (outputt);
}