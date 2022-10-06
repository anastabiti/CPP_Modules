# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: atabiti <atabiti@student.42.fr>            +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/08/22 11:18:57 by atabiti           #+#    #+#              #
#    Updated: 2022/08/22 11:19:51 by atabiti          ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = harl
FLAGS = -Wall -Werror -Wextra -std=c++98
SRC = Harl.cpp main.cpp

OBJ =  Harl.o main.o

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