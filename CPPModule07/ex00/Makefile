# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: atabiti <atabiti@student.42.fr>            +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/09/24 11:30:39 by atabiti           #+#    #+#              #
#    Updated: 2022/09/28 09:22:15 by atabiti          ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = templates
SRC =  main.cpp
OBJ =  main.o 
FLAGS =  -Wall -Wextra -Werror -std=c++98

all : $(NAME)
$(NAME) : $(OBJ)
$(OBJ) :  $(SRC)
	c++ -c $(FLAGS) $(SRC)

$(NAME):
	c++ $(FLAGS) $(OBJ) -o $(NAME)

clean :
	rm -f $(OBJ)
fclean: clean
	rm -f $(NAME)

re : fclean all