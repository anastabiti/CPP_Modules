/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contact.hpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: atabiti <atabiti@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/10 10:07:51 by atabiti           #+#    #+#             */
/*   Updated: 2022/08/17 10:15:33 by atabiti          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef  CONTACT_HPP  
#define CONTACT_HPP
#include <iostream>
class Contact
{
    private:
    std::string      firstname;
    std::string      lastname;
    std::string      nickname;
    std::string      phonenumber;      
    std::string      secret;
  public:
    void fun( class PhoneBook &  phonebook);
};

#endif