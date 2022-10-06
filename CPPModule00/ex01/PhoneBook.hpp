/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: atabiti <atabiti@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/10 10:06:24 by atabiti           #+#    #+#             */
/*   Updated: 2022/08/17 10:15:14 by atabiti          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PHONEBOOK_HPP 
#define PHONEBOOK_HPP

#include <iostream>
#include "Contact.hpp"
#include "PhoneBook.hpp"
#include <iomanip>
#include <stdio.h>

class PhoneBook
{
    public:
    Contact contacts[8];      
};
void	start(void);

#endif