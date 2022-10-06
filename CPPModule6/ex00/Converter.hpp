/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Converter.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: atabiti <atabiti@student.1337.ma>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/19 12:50:23 by atabiti           #+#    #+#             */
/*   Updated: 2022/09/24 17:01:17 by atabiti          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CONVERTER_HPP
# define CONVERTER_HPP
# include <cfloat> //handle float limits
# include <climits> //handle numeric limits
# include <cstdlib> //handle numeric limits
# include <iomanip>
# include <iostream>
#define CH "char"
#define FL "float"
#define INTT "int"
#define DBL "double"


class Converter
{
  private:
	std::string type;
	char CHARACTER;
	int INTEGER;
	float FLOATT;
	double DOUBLE;
	int			checkover_under_flow;

  public:
  
	Converter();
	Converter(Converter const &rhs);
	Converter operator=(Converter const &rhs);
	~Converter();

	void settype(std::string ty);
	void setint(int i);
	void setfloat(float f);
	void setchar(char c);
	void setdouble(double db);
	std::string gettype();

	char getchar();
	int getint();
	float getfloat();
	double getdouble();
	//parsing
	bool is_pseudo_literals_double(std::string input);
	bool is_pseudo_literals_float(std::string input);
	bool ischar(std::string input);
	bool isint(std::string input);
	bool isfloat(std::string input);
	bool isdouble(std::string input);
	bool isPrintable( int input);
	//execute functions
	void from_char(std::string chartostr[]);
	void from_int(std::string chartostr[]);
	void from_float(std::string chartostr[]);
	void from_double(std::string chartostr[]);
};

#endif
