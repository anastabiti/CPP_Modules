/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Converter.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: atabiti <atabiti@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/19 12:50:27 by atabiti           #+#    #+#             */
/*   Updated: 2022/09/25 11:31:50 by atabiti          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Converter.hpp"

Converter::Converter()
{
	this->checkover_under_flow = false;
}

Converter::~Converter()
{
}

Converter::Converter(Converter const &rhs)
{
	*this = rhs;
}
Converter Converter::operator=(Converter const &rhs)
{
	this->CHARACTER = rhs.CHARACTER;
	this->INTEGER = rhs.INTEGER;
	this->FLOATT = rhs.FLOATT;
	this->DOUBLE = rhs.DOUBLE;
	return (*this);
}
/*++++++++++++++++++++++++++++++ Getter/Setters ++++++++++++++++++++++++++++++++++*/

void Converter::settype(std::string ty)
{
	this->type = ty;
}
void Converter::setint(int i)
{
	this->INTEGER = i;
}
void Converter::setfloat(float f)
{
	this->FLOATT = f;
}
void Converter::setchar(char c)
{
	this->CHARACTER = c;
}
void Converter::setdouble(double db)
{
	this->DOUBLE = db;
}
std::string Converter::gettype()
{
	return (this->type);
}
char Converter::getchar()
{
	return (this->CHARACTER);
}
int Converter::getint()
{
	return (this->INTEGER);
}
float Converter::getfloat()
{
	return (this->FLOATT);
}
double Converter::getdouble()
{
	return (this->DOUBLE);
}
/*+++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++*/

bool Converter::is_pseudo_literals_double(std::string input)
{
	if (input == "-inf" || input == "+inf" || input == "nan")
		return (true);
	return (false);
}
bool Converter::is_pseudo_literals_float(std::string input)
{
	if (input == "-inff" || input == "+inff" || input == "nanf")
		return (true);
	return (false);
}
bool Converter::ischar(std::string input)
{
	int	i;

	i = 0;
	while (input[i])
	{
		if (((int)input[i] >= 48 && (int)input[i] <= 57) || (int)input[i] < 32)
			return (false);
		i++;
	}
	return (true);
}

bool Converter::isint(std::string input)
{
	int	i;

	i = 0;
	if (input[i] == '+' || input[i] == '-')
		i++;
	while (input[i])
	{
		if ((int)input[i] < 48 || (int)input[i] > 57)
			return (false);
		i++;
	}
	return (true);
}
bool Converter::isfloat(std::string input)
{
	int	i;

	i = 0;
	if (input.find_last_of('f') > input.length())
		return (false);
	if (input[i] == '+' || input[i] == '-')
		while (input[i])
		{
			if (input[i] == 'f')
				i++;
			if ((int)input[i] < 46 || (int)input[i] > 57 || (int)input[i] == 47)
				return (false);
			i++;
		}
	return (true);
}
bool Converter::isdouble(std::string input)
{
	int	i;

	i = 0;
	if (input[i] == '+' || input[i] == '-')
		while (input[i])
		{
			i++;
			if ((int)input[i] < 46 || (int)input[i] > 57 || (int)input[i] == 47)
				return (false);
			i++;
		}
	return (true);
}
bool Converter::isPrintable( int input)
{
	if (input < 32 || input > 127)
		return (false);
	return (true);
}

/*+++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++*/

void Converter::from_char(std::string chartostr[])
{
	if (chartostr[1].length() == 1)
	{
		this->settype(CH);
		// std::cout << "Type ; " << this->gettype() << std::endl;
		this->setchar(chartostr[1][0]);
		this->setint(static_cast<int>(chartostr[1][0]));
		this->setfloat(static_cast<float>(this->getchar()));
		this->setdouble(static_cast<double>(this->getchar()));
		if (this->isPrintable(this->getchar()) == true)
		{
			std::cout << "char : '" << static_cast<char>(this->getchar()) << "'" << std::endl;
		}
		else
		{
			std::cout << "char: Non displayable" << std::endl;
		}
		std::cout << "int : " << this->getint() << "  " << std::endl;
		std::cout << std::fixed << std::setprecision(1) << "float : " << this->getfloat() << "f" << std::endl;
		std::cout << "double : " << this->getdouble() << "  " << std::endl;
	}
	else
		std::cerr << "More than one char" << std::endl;
}

/*+++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++*/

void Converter::from_int(std::string chartostr[])
{
	this->settype(INTT);
	// std::cout << "Type ; " << this->gettype() << std::endl;
	long int x = atol(chartostr[1].c_str()); //to check overflow
	if (x > INT_MAX || x < INT_MIN)
	{
		checkover_under_flow = true;
	}
	if (checkover_under_flow == false)
	{
		this->setint((int)atoi(chartostr[1].c_str()));
		this->setchar(static_cast<char>(this->getint()));
		this->setfloat(static_cast<float>(this->getint()));
		this->setdouble(static_cast<double>(this->getint()));
		if (this->isPrintable(this->getchar()) == true)
		{
			std::cout << "char : '" << static_cast<char>(this->getchar()) << "'" << std::endl;
		}
		else
		{
			std::cout << "char: Non displayable" << std::endl;
		}
		std::cout << "int : " << this->getint() << "  " << std::endl;
		std::cout << std::fixed << std::setprecision(1) << "float : " << this->getfloat() << "f  " << std::endl;
		std::cout << "DOUBLE : " << this->getdouble() << "  " << std::endl;
	}
	else
	{
		std::cout << "char : impossible " << std::endl;
		std::cout << "int : impossible " << std::endl;
		std::cout << "Float : impossible " << std::endl;
		std::cout << "Double : impossible " << std::endl;
	}
}
/*+++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++*/

void Converter::from_float(std::string chartostr[])
{
	this->settype(FL);
	// std::cout << "Type ; " << this->gettype() << std::endl;
	this->setfloat(strtof(chartostr[1].c_str(), NULL));
	this->setdouble(static_cast<double>(this->getfloat()));
	this->setchar(static_cast<char>(this->getfloat()));
	this->setint(static_cast<int>(this->getfloat()));
	if (this->getfloat() > INT_MAX || this->getfloat() < INT_MIN)
	{
		checkover_under_flow = true;
	}
	if (this->isPrintable(this->getchar()) == true)
	{
		std::cout << "char : '" << static_cast<char>(this->getchar()) << "'" << std::endl;
	}
	else
	{
		std::cout << "char: Non displayable" << std::endl;
	}
	if (checkover_under_flow == false)
		std::cout << "int : " << this->getint() << std::endl;
	else
	{
		std::cout << "int : impossible " << std::endl;
	}
	std::cout << std::fixed << std::setprecision(1) << "float : " << this->getfloat() << "f  " << std::endl;
	std::cout << "double : " << this->getdouble() << "  " << std::endl;
}
/*+++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++*/

void Converter::from_double(std::string chartostr[])
{
	this->settype(DBL);
	// std::cout << "Type ; " << this->gettype() << std::endl;
	this->setdouble(strtod(chartostr[1].c_str(), NULL));
	this->setchar(static_cast<char>(this->getdouble()));
	this->INTEGER = static_cast<int>(this->getdouble() );
	this->setfloat(static_cast<float>(this->getdouble()));

	if (this->getdouble() > INT_MAX || this->getdouble() < INT_MIN)
	{
		checkover_under_flow = true;
	}
	if (this->isPrintable(this->getchar()) == true)
	{
		std::cout << "char : '" << static_cast<char>(this->getchar()) << "'" << std::endl;
	}
	else
	{
		std::cout << "char: Non displayable" << std::endl;
	}
	if (checkover_under_flow == false)
		std::cout << "int : " << this->getint() << std::endl;
	else
	{
		std::cout << "int : impossible " << std::endl;
	}
	std::cout << std::fixed << std::setprecision(1) << "float : " << this->getfloat() << "f" << std::endl;
	std::cout << "double : " << this->getdouble() << "  " << std::endl;
}

/*+++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++*/