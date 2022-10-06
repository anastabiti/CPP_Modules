/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Harl.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: atabiti <atabiti@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/22 11:19:02 by atabiti           #+#    #+#             */
/*   Updated: 2022/08/23 10:39:31 by atabiti          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef  HARL_HPP
#define HARL_HPP
#include <iostream>

class Harl
{
private:
void debug( void );
void info( void );
void warning( void );
void error( void );
public:
    void complain( std::string level );
};



#endif