# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: atabiti <atabiti@student.42.fr>            +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/09/19 12:51:02 by atabiti           #+#    #+#              #
#    Updated: 2022/09/23 12:37:16 by atabiti          ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = Serial
SRC =  Data.cpp main.cpp
OBJ =  Data.o main.cpp
FALGS = -Werror -Wextra -Wall -std=c++98

all: $(NAME)

$(NAME) : $(OBJ)
$(OBJ):
	c++ $(FALGS)  $(FALGS) -c $(SRC)

$(NAME):
	c++ $(FALGS) $(OBJ) -o $(NAME)

clean :
	rm -f *.o
fclean: clean
	rm -f $(NAME)

re : fclean all 
