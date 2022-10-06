/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   iter.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: atabiti <atabiti@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/26 08:41:00 by atabiti           #+#    #+#             */
/*   Updated: 2022/09/28 09:46:13 by atabiti          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>

template <typename L> void f1(L s)
{
    std::cout << s  <<std::endl;       
}


// differnt types : add new typename or  declare type explicitly
template <typename T, typename F>
void iter(T &adrs, int length, F FUNCC ) //The third parameter can be an instantiated function template.
{
    int i = 0 ;
    while(i < length)
     FUNCC(adrs[i++]);  
}