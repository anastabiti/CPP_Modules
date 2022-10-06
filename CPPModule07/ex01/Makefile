# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: atabiti <atabiti@student.42.fr>            +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/09/26 08:41:08 by atabiti           #+#    #+#              #
#    Updated: 2022/09/28 10:22:13 by atabiti          ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = iter
SRC =  main.cpp
OBJ = main.o
FLAGS = -Werror -Wextra -Wall -std=c++98

all : $(NAME)
$(NAME) : $(OBJ)
$(OBJ) :  $(SRC)
	c++  -c  $(FLAGS) $(SRC)
 
 $(NAME) :
	c++ $(FLAGS)  $(OBJ) -o $(NAME)
clean :
	rm -f $(OBJ)
fclean : clean
	rm -f $(NAME)
re : fclean all
