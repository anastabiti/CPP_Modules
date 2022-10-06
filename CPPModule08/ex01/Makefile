# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: atabiti <atabiti@student.42.fr>            +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/09/30 09:08:54 by atabiti           #+#    #+#              #
#    Updated: 2022/10/04 08:56:54 by atabiti          ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = span
SRC = main.cpp  Span.cpp
OBJ = main.o Span.o
FLAGS = -Wall -Wextra -Werror  -std=c++98
HEADER = Span.hpp

all : $(NAME)

$(NAME) : $(OBJ)
$(OBJ) : $(SRC) $(HEADER)
	c++ -c $(FLAGS) $(SRC) 
$(NAME) :
	c++ $(OBJ) $(FLAGS) -o $(NAME)
clean :
	rm -f $(OBJ)
fclean : clean
	rm -f $(NAME)
re : fclean all