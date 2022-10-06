# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: atabiti <atabiti@student.42.fr>            +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/09/30 09:08:54 by atabiti           #+#    #+#              #
#    Updated: 2022/10/03 12:45:00 by atabiti          ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = easyfind
SRC = main.cpp
OBJ = main.o
FLAGS = -Wall -Wextra -Werror  -std=c++98
HEADER = easyfind.hpp

all : $(NAME)

$(NAME) : $(OBJ)
$(OBJ) : $(SRC)  $(HEADER)
	c++ -c  $(FLAGS) $(SRC)
$(NAME) :
	c++ $(OBJ) $(FLAGS) -o $(NAME)
clean :
	rm -f $(OBJ)
fclean : clean
	rm -f $(NAME)
re : fclean all