# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: atabiti <atabiti@student.42.fr>            +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/09/01 11:33:39 by atabiti           #+#    #+#              #
#    Updated: 2022/09/07 09:15:44 by atabiti          ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = program
FLAGS = -Wextra -Werror -Wall -std=c++98
SRC = ClapTrap.cpp    main.cpp ScavTrap.cpp
OBJ = ClapTrap.o  main.o  ScavTrap.o

all : $(NAME)
 $(NAME) : $(OBJ)
$(OBJ) :
	c++ -c $(FLAGS)   $(SRC)
$(NAME):
	c++ $(OBJ) -o $(NAME)

clean :
	rm *.o
	
fclean : clean
	rm $(NAME)

re : fclean all