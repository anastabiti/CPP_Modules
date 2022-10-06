# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: atabiti <atabiti@student.42.fr>            +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/09/11 14:11:46 by atabiti           #+#    #+#              #
#    Updated: 2022/09/19 08:59:13 by atabiti          ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = Program
SRC = main.cpp Bureaucrat.cpp Form.cpp
OBJ = main.o Bureaucrat.o Form.o
FLAGS = -Werror -Wextra -Wall  -std=c++98

all : $(NAME)

$(NAME) : $(OBJ)
$(OBJ):
	c++ $(FLAGS) -c $(SRC)
$(NAME):
	c++  $(FLAGS)  $(OBJ) -o $(NAME)

clean :
	rm *.o
	
fclean : clean
	rm $(NAME)

re : fclean all