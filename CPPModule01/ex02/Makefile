# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: atabiti <atabiti@student.42.fr>            +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/08/20 09:21:20 by atabiti           #+#    #+#              #
#    Updated: 2022/08/23 09:59:33 by atabiti          ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = HI_THIS_IS_BRAIN
FLAGS = -Wall -Werror -Wextra -std=c++98
SRC = main.cpp \

OBJ = main.o \

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