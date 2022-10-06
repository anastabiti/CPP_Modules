/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: atabiti <atabiti@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/23 09:58:55 by atabiti           #+#    #+#             */
/*   Updated: 2022/09/25 11:20:19 by atabiti          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Base.hpp"
#include "A.hpp"


int	main(void)
{
    Base test1;
    Base *ptr = test1.generate();
    Base &ref = *ptr;
    test1.identify(ptr);
    // test1.identify(*ptr);
    test1.identify(ref);
   
    delete ptr;
	return (0);
}