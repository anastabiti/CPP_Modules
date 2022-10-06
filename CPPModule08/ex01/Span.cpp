/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Span.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: atabiti <atabiti@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/30 10:24:59 by atabiti           #+#    #+#             */
/*   Updated: 2022/10/04 11:22:55 by atabiti          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Span.hpp"
#include <algorithm>
Span::Span()
{
	this->iterator = 0;
}

Span::~Span()
{
}
Span::Span(const Span &rhs)
{
	*this = rhs;
}

Span &Span::operator=(const Span &rhs)
{
	unsigned int	i;

	this->iterator = rhs.iterator;
	this->N = rhs.N;
	i = 0;
	while (i < rhs.iterator)
	{
		this->v1.push_back(rhs.v1[i]);
		i++;
	}
	return (*this);
}

Span::Span(unsigned int n)
{
	this->N = n;
	this->iterator = 0;
}

void Span::addNumber(int tobeadded)
{
	if (iterator >= N)
		throw(exp());
	this->v1.push_back(tobeadded);
	this->iterator++;
}

int Span::shortestSpan()
{
	unsigned int	i;
	int				holder;

	holder = 0;
	if (this->iterator <= 1)
		throw(exp());
	std::sort(this->v1.begin(), this->v1.end()); //sort them
	holder = this->v1[1] - this->v1[0];
	i = 1;
	while (i < this->iterator)
	{
		while (v1[i] == v1[i - 1])
			i++;
		if ((this->v1[i] - this->v1[i - 1]) < holder)
		{
			holder = this->v1[i] - this->v1[i - 1];
			// std::cout << " NEW MIN VALUE IS = " << holder << " Btw " << this->v1[i] << " and " << this->v1[i	- 1] << std::endl;
		}
		i++;
	}
	return (holder);
}

int Span::longestSpan()
{
	if (iterator <= 1)
		throw(exp());
	std::vector<int>::iterator itmin = std::min_element(v1.begin(), v1.end());
	std::vector<int>::iterator itmax = std::max_element(v1.begin(), v1.end());
	return (*itmax - *itmin);
}

int	generatethem(void)
{
	int	x;

	x = (rand() % 2 + 1);
	if (x == 1)
	{
		return (std::rand());
	}
	return (std::rand() % 999999 + 1);
}

void Span::fillthem()
{
	srand((unsigned)time(NULL));
	std::vector<int> nv(this->N - 1);
	std::generate(nv.begin(), nv.end(), generatethem);
	this->iterator = this->N - 1;
	this->v1 = nv;
}

void Span::printall(void)
{
	unsigned int	i;

	std::sort(v1.begin(), v1.end()); //sort them
	i = 0;
	while (i < this->iterator)
	{
		std::cout << this->v1[i] << std::endl;
		i++;
	}
}
