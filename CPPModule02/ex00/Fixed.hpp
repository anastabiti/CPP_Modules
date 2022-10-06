/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: atabiti <atabiti@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/26 07:53:15 by atabiti           #+#    #+#             */
/*   Updated: 2022/09/01 07:54:40 by atabiti          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FIXED_HPP
# define FIXED_HPP
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
};

#endif