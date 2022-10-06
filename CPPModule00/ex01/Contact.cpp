/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contact.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: atabiti <atabiti@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/10 10:07:48 by atabiti           #+#    #+#             */
/*   Updated: 2022/08/17 10:28:51 by atabiti          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Contact.hpp"
#include "PhoneBook.hpp"


void Contact::fun(PhoneBook& newphone)
{
	std::string datain, inputin;
	int nb, i, check, y, index, oldest, found;
	oldest = 0, nb = 0;

	start();
	while (1) // MAIN LOOP
	{
		found = 0;
		std::cout << "PhoneBook $ ";
		getline(std::cin, inputin);
		if (std::cin.eof())
		{
			std::cout << "\t\t\t\tEnd Of File ! " << std::endl;
			exit(0);
		}

/* ------------------------------------------------------------------------------------ ADD Command ------------------------------------------------------------------------------------ */



		
		if (inputin.compare("ADD") == 0)
		{
			/* --------------------------------------------------------------- Less than/equal 8 contacts ------------------------------------------------------------------------------------ */
			if (nb < 8)
			{
				/* ------------------------------------------ Get First Name  ------------------------------------------ */
				while (1)
				{
					std::cout << "First Name : ";
					getline(std::cin, datain);
					if (std::cin.eof())
					{
						std::cout << "\t\t\t\tEnd Of File ! " << std::endl;
						exit(0);
					}
					if (datain.empty())
						std::cout << "Cannot be empty !" << std::endl;

					if (datain.find_first_of("!@#&()–[{}]:;',?/*~`|/._+\\ \t\n") < datain.length())
					{
						std::cout << "Only alphabets are allowed" << std::endl;
						found = 1;
					}

					if (found == 0 && !datain.empty())
					{
						newphone.contacts[nb].firstname = datain;
						break ;
					}
					found = 0;
				}
				/*  ------------------------------------------ Get  Last Name  ------------------------------------------ */
				while (1)
				{
					std::cout << "Last Name : ";
					getline(std::cin, datain);
					if (std::cin.eof())
					{
						std::cout << "\t\t\t\tEnd Of File ! " << std::endl;
						exit(0);
					}
					if (datain.empty())
						std::cout << "Cannot be empty !" << std::endl;
					if (datain.find_first_of("!@#&()–[{}]:;',?/*~`|/._+\\ \t\n") < datain.length())
					{
						std::cout << "Only alphabets are allowed" << std::endl;
						found = 1;
					}

					if (found == 0 && !datain.empty())
					{
						newphone.contacts[nb].lastname = datain;
						break ;
					}
					found = 0;
				}

				/*  ------------------------------------------ Get  Nickname  ------------------------------------------ */

				while (1)
				{
					std::cout << "Nickname : ";
					getline(std::cin, datain);
					if (std::cin.eof())
					{
						std::cout << "\t\t\t\tEnd Of File ! " << std::endl;
						exit(0);
					}
					if (datain.empty())
						std::cout << "Cannot be empty !" << std::endl;

					if (datain.find_first_of("\\ \t\n") < datain.length())
					{
						std::cout << "Only alphabets are allowed" << std::endl;
						found = 1;
					}

					if (found == 0 && !datain.empty())
					{
						newphone.contacts[nb].nickname = datain;
						break ;
					}
					found = 0;
				}

				/*  ------------------------------------------ Get Phone number   ------------------------------------------ */
				while (1)
				{
					std::cout << "Phone number : ";
					getline(std::cin, datain);
					if (std::cin.eof())
					{
						std::cout << "\t\t\t\tEnd Of File ! " << std::endl;
						exit(0);
					}
					if (datain.empty())
						std::cout << "Cannot be empty !" << std::endl;
					i = 0;
					check = 0;
					/* ------------------ only numbers ------------------------- */
					while (datain[i])
					{
						if (isdigit(datain[i]) == 0)
						{
							check = 1;
							break ;
						}
						i++;
					}
					if (check == 1)
						std::cout << "Not Valid NUMBER !" << std::endl;
					if (check == 0 && !datain.empty())
					{
						newphone.contacts[nb].phonenumber = datain;
						break ;
					}
				}

				/*  ------------------------------------------ Get Darkest secret ------------------------------------------ */
				while (1)
				{
					std::cout << "Darkest secret : ";
					getline(std::cin, datain);
					if (std::cin.eof())
					{
						std::cout << "\t\t\t\tEnd Of File ! " << std::endl;
						exit(0);
					}
					if (datain.empty())
						std::cout << "Cannot be empty !" << std::endl;

					if (datain.find_first_of("\\ \t\n") < datain.length())
					{
						std::cout << "Only alphabets are allowed" << std::endl;
						found = 1;
					}

					if (found == 0 && !datain.empty())
					{
						newphone.contacts[nb].secret = datain;
						nb = nb + 1;
						break ;
					}
					found = 0;
				}
			}

			/* -------------------------------------------------------------- More than 8 contacts : User tries to add a 9th contact  ---------------------------------------------------------------------------- */
			else if (nb > 7)
			{
				/* ------------------------------------------ Get  First Name ------------------------------------------ */
				if (oldest > 7)
					oldest = 0;
				while (1)
				{
					std::cout << "First Name : ";
					getline(std::cin, datain);
					if (std::cin.eof())
					{
						std::cout << "\t\t\t\tEnd Of File ! " << std::endl;
						exit(0);
					}
					if (datain.empty())
						std::cout << "Cannot be empty !" << std::endl;

					if (datain.find_first_of("!@#&()–[{}]:;',?/*~`|/._+\\ \t\n") < datain.length())
					{
						std::cout << "Only alphabets are allowed" << std::endl;
						found = 1;
					}

					if (found == 0 && !datain.empty())
					{
						newphone.contacts[oldest].firstname = datain;
						break ;
					}
					found = 0;
				}
				/* ------------------------------------------ Get  Last Name ------------------------------------------ */
				while (1)
				{
					std::cout << "Last Name : ";
					getline(std::cin, datain);
					if (std::cin.eof())
					{
						std::cout << "\t\t\t\tEnd Of File ! " << std::endl;
						exit(0);
					}
					if (datain.empty())
						std::cout << "Cannot be empty !" << std::endl;
					if (datain.find_first_of("!@#&()–[{}]:;',?/*~`|/._+\\ \t\n") < datain.length())
					{
						std::cout << "Only alphabets are allowed" << std::endl;
						found = 1;
					}

					if (found == 0 && !datain.empty())
					{
						newphone.contacts[oldest].lastname = datain;
						break ;
					}
					found = 0;
				}

				/*  ------------------------------------------ Get  Nickname  ------------------------------------------ */

				while (1)
				{
					std::cout << "Nickname : ";
					getline(std::cin, datain);
					if (std::cin.eof())
					{
						std::cout << "\t\t\t\tEnd Of File ! " << std::endl;
						exit(0);
					}
					if (datain.empty())
						std::cout << "Cannot be empty !" << std::endl;
					if (datain.find_first_of("\\ \t\n") < datain.length())
					{
						std::cout << "Wrong input" << std::endl;
						found = 1;
					}

					if (found == 0 && !datain.empty())
					{
						newphone.contacts[oldest].nickname = datain;
						break ;
					}
					found = 0;
				}

				/* ------------------------------------------ get Phone number  ------------------------------------------ */
				while (1)
				{
					std::cout << "Phone number : ";
					getline(std::cin, datain);
					if (datain.empty())
						std::cout << "Cannot be empty !" << std::endl;
					i = 0;
					check = 0;
					/* ----------- only numbers  ------ */
					while (datain[i])
					{
						if (isdigit(datain[i]) == 0)
						{
							check = 1;
							break ;
						}
						i++;
					}
					if (check == 1)
						std::cout << "Not Valid NUMBER !" << std::endl;
					if (check == 0 && !datain.empty())
					{
						newphone.contacts[oldest].phonenumber = datain;
						break ;
					}
				}
				/* ------------------------------------------ Get Darkest secret ------------------------------------------ */
				while (1)
				{
					std::cout << "Darkest secret : ";
					getline(std::cin, datain);
					if (std::cin.eof())
					{
						std::cout << "\t\t\t\tEnd Of File ! " << std::endl;
						exit(0);
					}
					if (datain.empty())
						std::cout << "Cannot be empty !" << std::endl;
					if (datain.find_first_of("!@#&()–[{}]:;',?/*~`|/._+\\ \t\n") < datain.length())
					{
						std::cout << "Only alphabets are allowed" << std::endl;
						found = 1;
					}

					if (found == 0 && !datain.empty())
					{
						newphone.contacts[oldest].secret = datain;
						oldest = oldest + 1;
						break ;
					}
					found = 0;
				}
			}
		}

		/* ------------------------------------------------------------------------------------ SEARCH Command ------------------------------------------------------------------------------------ */
		else if (inputin.compare("SEARCH") == 0)
		{
			/* ------------------ Display the saved contacts as a list of 4 columns ------------------------- */
			std::cout << "SAVED CONTACTS : " << std::endl;
			std::cout << " _______________________________________________" << std::endl;
			std::cout << "|" << std::setw(11) << "Index"
						<< "|";
			std::cout << std::setw(11) << "First Name"
						<< "|";
			std::cout << std::setw(11) << "Last Name"
						<< "|";
			std::cout << std::setw(11) << "Nickname"
						<< "|" << std::endl;
			std::cout << " _______________________________________________" << std::endl;
			y = 0;
			while (y < nb)
			{
				std::cout << "|" << std::right << std::setw(11) << y << std::right << "|";
				if (newphone.contacts[y].firstname.length() > 10)
				{
					std::cout << std::right << std::setw(11) << newphone.contacts[y].firstname.substr(0,
							10).append(".") << "|";
				}
				else
					std::cout << std::right << std::setw(11) << newphone.contacts[y].firstname << "|";
				if (newphone.contacts[y].lastname.length() > 10)
				{
					std::cout << std::right << std::setw(11) << newphone.contacts[y].lastname.substr(0,
							10).append(".") << "|";
				}
				else
					std::cout << std::right << std::setw(11) << newphone.contacts[y].lastname.substr(0,
							10) << "|";
				if (newphone.contacts[y].nickname.length() > 10)
				{
					std::cout << std::right << std::setw(11) << newphone.contacts[y].nickname.substr(0,
							10).append(".");
				}
				else
				{
					std::cout << std::right << std::setw(11) << newphone.contacts[y].nickname.substr(0,
							10);
				}
				std::cout << std::right << "|" << std::endl;
				std::cout << " _______________________________________________" << std::endl;
				y++;
			}

			while (1)
			{
				std::cout << "Contact's index to be searched :";
				getline(std::cin, datain);
				if (std::cin.eof())
				{
					std::cout << "\t\t\t\tEnd Of File ! " << std::endl;
					exit(0);
				}
				if (datain.empty())
					std::cout << "\t\t\t\t\tField cannot be empty !" << std::endl;
				/* ------------------ Check if it is a digit ------------------------- */

				i = 0;
				check = 0;
				while (datain[i])
				{
					if (std::isdigit(datain[i]) == 0)
					{
						std::cout << "NOT VALID NUMBER!" << std::endl;
						check = 1;
						break ;
					}
					i++;
				}
				/* ------------------                         ------------------------- */

				/* ------------------  Convert input to int ------------------------- */

				if (!datain.empty() && check == 0)
				{
					index = std::atoi(datain.c_str());
					if (index >= 8 || index < 0 || index >= nb)
					{
						std::cout << "Error : number is out of range" << std::endl;
						break ;
					}
					/* display the contact information, one field per line.   */
					std::cout << "First Name : " << newphone.contacts[index].firstname << std::endl;
					std::cout << "Last Name : " << newphone.contacts[index].lastname << std::endl;
					std::cout << "Nickname : " << newphone.contacts[index].nickname << std::endl;
					std::cout << "Phone Number: " << newphone.contacts[index].phonenumber << std::endl;
					std::cout << "Darkest Secret: " << newphone.contacts[index].secret << std::endl;
					break ;
				}
				/* ------------------                         ------------------------- */
			}
		}

		/* ------------------------------------------------------------------------------------ EXIT Command ------------------------------------------------------------------------------------ */
		else if (inputin.compare("EXIT") == 0)
		{
			std::cout << "Warning : All contacts are lost forever! " << std::endl;
			exit(0);
		}
		if (std::cin.eof())
		{
			std::cout << "\t\t\t\tEnd Of File ! " << std::endl;
			exit(0);
		}
	}
}