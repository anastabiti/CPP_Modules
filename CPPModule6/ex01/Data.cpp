/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Data.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: atabiti <atabiti@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/21 12:38:31 by atabiti           #+#    #+#             */
/*   Updated: 2022/09/24 08:48:33 by atabiti          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#include "Data.hpp"


uintptr_t serialize(Data* ptr)
{
    return (reinterpret_cast<uintptr_t>(ptr));
}


Data* deserialize(uintptr_t raw)
{
    return (reinterpret_cast<Data *>(raw));
}