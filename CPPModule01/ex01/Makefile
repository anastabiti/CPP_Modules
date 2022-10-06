# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: atabiti <atabiti@student.42.fr>            +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/08/19 11:34:50 by atabiti           #+#    #+#              #
#    Updated: 2022/08/23 09:45:05 by atabiti          ###   ########.fr        #
#                                                                              #
# **************************************************************************** #


NAME = Moarbrainz
FLAGS = -Wall -Werror -Wextra -std=c++98
SRC = main.cpp \
Zombie.cpp  \
zombieHorde.cpp \

OBJ = main.o \
 Zombie.o \
 zombieHorde.o \

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