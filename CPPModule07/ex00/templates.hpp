/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   templates.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: atabiti <atabiti@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/24 11:28:59 by atabiti           #+#    #+#             */
/*   Updated: 2022/09/28 09:20:35 by atabiti          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef TEMPLATES_HPP
# define TEMPLATES_HPP

template <typename T>
void	swap(T &a, T &x)
{
	T	tmp;

	tmp = a;
	a = x;
	x = tmp;
}


template <typename T>
T	min(T &a, T &b)
{
	if (a < b)
		return (a);
	else if (b < a)
		return (b);
	return (b);
}

template <typename T>
T	max(T &a, T &b)
{
	if (a > b)
		return (a);
	else if (b > a)
		return (b);
	return (b);
}

#endif