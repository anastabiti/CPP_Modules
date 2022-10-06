# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: atabiti <atabiti@student.42.fr>            +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/08/20 09:41:34 by atabiti           #+#    #+#              #
#    Updated: 2022/08/20 09:42:29 by atabiti          ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = violence
FLAGS = -Wall -Werror -Wextra -std=c++98
SRC = HumanA.cpp HumanB.cpp Weapon.cpp main.cpp

OBJ =  HumanA.o HumanB.o Weapon.o main.o

all : $(NAME)

$(OBJ) :
	c++ -c $(FLAGS) $(SRC)
	
$(NAME) :  $(OBJ)
	c++ $(FLAGS) $(OBJ) -o $(NAME)

clean :
	rm *.o


fclean : clean
	rm $(NAME)

re : fclean all 