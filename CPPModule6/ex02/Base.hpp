/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Base.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: atabiti <atabiti@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/23 09:57:35 by atabiti           #+#    #+#             */
/*   Updated: 2022/09/23 10:43:56 by atabiti          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef BASE_HPP
# define BASE_HPP
# include <iostream>


class Base
{
    public:
	virtual ~Base();
	Base *generate(void);

	void identify(Base *p);
	void identify(Base &p);
};



#endif