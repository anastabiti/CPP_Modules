# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: atabiti <atabiti@student.42.fr>            +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/08/19 08:33:16 by atabiti           #+#    #+#              #
#    Updated: 2022/08/19 09:21:00 by atabiti          ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = BraiiiiiiinnnzzzZ
FLAGS = -Wall -Werror -Wextra -std=c++98
SRC = main.cpp \
Zombie.cpp  \
randomChump.cpp  \
newZombie.cpp \

OBJ = main.o \
 Zombie.o \
 randomChump.o \
 newZombie.o \

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