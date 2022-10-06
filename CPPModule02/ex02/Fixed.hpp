/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: atabiti <atabiti@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/30 07:34:40 by atabiti           #+#    #+#             */
/*   Updated: 2022/09/01 09:18:42 by atabiti          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef Fixed_HPP
# define Fixed_HPP
# include <cmath>
# include <iostream>
class Fixed
{
  private:
	int fixed_point_number_value;
	static const int fractional_bits = 8;

  public:
	//default constructor  that initializes the fixed-point number value to 0
	Fixed();
	Fixed(const Fixed &copyit);
	Fixed &operator=(const Fixed &rhs);
	~Fixed();
	int getRawBits(void) const;
	void setRawBits(int const raw);
	//new • A constructor that takes a constant integer as a parameter. It converts it to the corresponding fixed-point value.
	Fixed(const int nb);
	// A constructor that takes a constant floating-point number
	Fixed(const float nbr);
	float toFloat(void) const;
	int toInt(void) const;

	/* ____________________________________________________________ */

	Fixed operator+(Fixed const &rhs); // +
	Fixed operator-(Fixed const &rhs); // -
	Fixed operator/(Fixed const &rhs); // /
	Fixed operator*(Fixed const &rhs); // *
	/* ____________________________________________________________ */

	/* ____________________________________________________________ */
	//comparison
	int operator>(Fixed const &rhs);
	int operator<(Fixed const &rhs);
	int operator>=(Fixed const &rhs);
	int operator<=(Fixed const &rhs);
	int operator==(Fixed const &rhs);
	int operator!=(Fixed const &rhs);
	/* ____________________________________________________________ */

	/* ____________________________________________________________ */

	Fixed operator++();
	Fixed operator++(int);
	Fixed operator--();
	Fixed operator--(int);

	/* ____________________________________________________________ */

	static Fixed &min(Fixed &a, Fixed &b);
	static const Fixed &min(Fixed const &a, Fixed const &b);
	static Fixed &max(Fixed &a, Fixed &b);
	static const Fixed &max(Fixed const &a, Fixed const &b);
	/* ____________________________________________________________ */

	/* 

++i increments the value, then returns it.

i++ returns the value, and then increments it.
*/
};

//An overload of the insertion («) operator that inserts a floating-point representation of the fixed-point number into the output stream object passed as parameter
std::ostream &operator<<(std::ostream &outputt, Fixed const &rhs);

#endif
