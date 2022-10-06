/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Array.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: atabiti <atabiti@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/26 12:54:46 by atabiti           #+#    #+#             */
/*   Updated: 2022/09/28 10:18:36 by atabiti          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ARRAY_HPP
# define ARRAY_HPP
# include <iostream>

template <typename T>
class Array
{
private :
	unsigned int arr_size;
	T *arr;

public:
	Array(): arr_size(0)
	{
		std::cout << "Default constructor is called " << std::endl;
		arr = new T[0]();
	}

	Array(unsigned int n) : arr_size(n)
	{
		std::cout << "Constructor is called (unsigned int n) " << std::endl;
		arr = new T[this->arr_size](); //add () : initialized by default.
	}

	Array(const Array &rhs)
	{
		std::cout << "Copy constructor is called " << std::endl;
		*this = rhs;
	}

	const Array &operator=(const Array &rhs)
	{
		std::cout << "Operator overload is called " << std::endl;
		this->arr_size = rhs.arr_size;
		this->arr = new T[rhs.arr_size]();
		unsigned int i = 0;
		while (i < arr_size)
		{
			this->arr[i] = rhs.arr[i];
			i++;
		}
		return (*this);
	}

	T &operator[]( 	unsigned int index)
	{
		if (index >= this->arr_size || index < 0 )
			throw(wrongindex());
		else
			return (this->arr[index]);
	}


	~Array()
	{
		std::cout << "Destructor is called " << std::endl;
		delete[] this->arr;
	}

	unsigned int size()
	{
		return (this->arr_size);
	}


	/* Handle Errors and exceptions         */
	class wrongindex : public std::exception
	{
		const char *what() const _NOEXCEPT
		{
			return ("Exception: index is out of bound!");
		}
	};
};

#endif