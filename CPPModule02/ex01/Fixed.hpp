/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: atabiti <atabiti@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/26 09:33:12 by atabiti           #+#    #+#             */
/*   Updated: 2022/09/01 09:18:45 by atabiti          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FIXED_HPP
# define FIXED_HPP
# include <cmath>
# include <iostream>

class Fixed
{
  private:
	int fixed_point_number_value;
	static const int fractional_bits = 8;

  public:
	Fixed();	//default constructor  that initializes the fixed-point number value to 0
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
};

//An overload of the insertion («) operator that inserts a floating-point representation of the fixed-point number into the output stream object passed as parameter
std::ostream &operator<<(std::ostream &outputt, Fixed const &rhs);
#endif