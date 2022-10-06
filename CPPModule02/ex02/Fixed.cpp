/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: atabiti <atabiti@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/30 07:34:43 by atabiti           #+#    #+#             */
/*   Updated: 2022/09/01 08:56:38 by atabiti          ###   ########.fr       */
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
	*this = oldobject;
		// This part is the part where operator overloading/ Copy assignment operator is executed
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

// returns the raw value of the fixed-point value
int Fixed::getRawBits(void) const
{
	std::cout << "getRawBits member function called" << std::endl;
	return (this->fixed_point_number_value);
}

// sets the raw value of the fixed-point number
void Fixed::setRawBits(int const raw)
{
	std::cout << "setRawBits member function called" << std::endl;
	this->fixed_point_number_value = raw;
	//new 	this->fixed_point_number_value = raw			* Fixed:: fixed_point_number_value;
}
/*+++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++*/

/*______________________________________________Conversion______________________________________________ */

/*+++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++*/
//1 takes a constant integer as a parameter. It converts it to the corresponding fixed-point value
Fixed::Fixed(const int nb)
{
	this->fixed_point_number_value = (nb * (256)); //256 = 2^8
}
/*+++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++*/
//2 t takes a constant floating-point number as a parameter. It converts it to the corresponding fixed-point value
// Calculate x = floating_input* 2^(fractional_bits) and Round x to the nearest whole number (e.g. round(x))
Fixed::Fixed(const float nbr)
{
	this->fixed_point_number_value = (int)roundf(nbr * (256));
}
/*+++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++*/
//3  converts the fixed-point value to a floating-point value
float Fixed::toFloat(void) const
{
	return ((float)this->fixed_point_number_value / 256);
}
/*+++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++*/
//4  converts the fixed-point value to an integer valu
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
/*+++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++*/



/*__________ •  The 6 comparison operators: >, <, >=, <=, == and != __________*/
//   >
int Fixed::operator>(Fixed const &rhs)
{
	if (this->getRawBits() > rhs.getRawBits())
		return (1);
	else
		return (0);
}
// <
int Fixed::operator<(Fixed const &rhs)
{
	if (this->getRawBits() < rhs.getRawBits())
		return (1);
	else
		return (0);
}
// >=
int Fixed::operator>=(Fixed const &rhs)
{
	if (this->getRawBits() >= rhs.getRawBits())
		return (1);
	else
		return (0);
}
// <=
int Fixed::operator<=(Fixed const &rhs)
{
	if (this->getRawBits() <= rhs.getRawBits())
		return (1);
	else
		return (0);
}
// ==
int Fixed::operator==(Fixed const &rhs)
{
	if (this->getRawBits() == rhs.getRawBits())
		return (1);
	else
		return (0);
}
// !=
int Fixed::operator!=(Fixed const &rhs)
{
	if (this->getRawBits() != rhs.getRawBits())
		return (1);
	else
		return (0);
}

/* ____________________________________________________________________________ */









/*__________ • The 4 arithmetic operators: +, -, *, and / __________*/

Fixed Fixed::operator+(Fixed const &rhs)
{
	return (this->toFloat() + rhs.toFloat());
}
Fixed Fixed::operator-(Fixed const &rhs)
{
	return (this->toFloat() - rhs.toFloat());
}

Fixed Fixed::operator/(Fixed const &rhs)
{
	return (this->toFloat() / rhs.toFloat());
}

Fixed Fixed::operator*(Fixed const &rhs)
{
	return (this->toFloat() * rhs.toFloat());
}

/* __________________________________________________________________ */





/*__________ • The 4 increment/decrement (pre-increment and post-increment,
				pre-decrement and post-decrement) operators __________*/
//++i
Fixed Fixed::operator++()
{
	Fixed	tmp;
	tmp.fixed_point_number_value = ++fixed_point_number_value;
	return (tmp);
}

//i++
Fixed Fixed::operator++(int)
{
	Fixed	tmp;
	tmp.fixed_point_number_value = fixed_point_number_value++;
	return (tmp);
}

//--i
Fixed Fixed::operator--()
{
	Fixed	tmp;
	tmp.fixed_point_number_value = --fixed_point_number_value;
	return (tmp);
}

//i--
Fixed Fixed::operator--(int)
{
	Fixed	tmp;
	tmp.fixed_point_number_value = fixed_point_number_value--;
	return (tmp);
}

/* ________________________________________________________________ */









/* ________ four public overloaded member functions______________________ */

Fixed &Fixed::min(Fixed &a, Fixed &b)
{
	if (a.getRawBits() < b.getRawBits())
		return (a);
	else
		return (b);
}
const Fixed &Fixed::min(Fixed const &a, Fixed const &b)
{
	if (a.getRawBits() < b.getRawBits())
		return (a);
	else
		return (b);
}

Fixed &Fixed::max(Fixed &a, Fixed &b)
{
	if (a.getRawBits() > b.getRawBits())
		return (a);
	else
		return (b);
}
const Fixed &Fixed::max(Fixed const &a, Fixed const &b)
{
	if (a.getRawBits() > b.getRawBits())
		return (a);
	else
		return (b);
}

/* ________________________________________________________________ */
