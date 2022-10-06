# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: atabiti <atabiti@student.42.fr>            +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/08/26 09:33:19 by atabiti           #+#    #+#              #
#    Updated: 2022/09/01 07:53:09 by atabiti          ###   ########.fr        #
#                                                                              #
# **************************************************************************** #


NAME = program
FLAGS = -Wall -Wextra -Werror -std=c++98

SRC = Fixed.cpp main.cpp
OBJ = Fixed.o main.o

all : $(NAME)

$(NAME) : $(OBJ)
$(OBJ) :
	c++ -c  $(FLAGS) $(SRC)
$(NAME) :
	c++ $(OBJ) -o $(NAME)


clean :
	rm *.o
fclean : clean
	rm $(NAME)

re : fclean all