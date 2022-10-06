/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: atabiti <atabiti@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/26 08:04:30 by atabiti           #+#    #+#             */
/*   Updated: 2022/09/01 08:00:09 by atabiti          ###   ########.fr       */
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
	*this = oldobject;	// This part is the part where operator overloading/ Copy assignment operator is executed
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


/*+++++++++++++++++++++++ Member Functions ++++++++++++++++++++++++++++++++++ */

int Fixed::getRawBits(void) const
{
	std::cout << "getRawBits member function called" << std::endl;
	return (this->fixed_point_number_value);
}


void Fixed::setRawBits(int const raw)
{
	std::cout << "setRawBits member function called" << std::endl;
	this->fixed_point_number_value = raw;
}
/*+++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++*/
