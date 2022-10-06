# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: atabiti <atabiti@student.42.fr>            +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/08/20 13:11:45 by atabiti           #+#    #+#              #
#    Updated: 2022/08/21 12:35:49 by atabiti          ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = sed
FLAGS =  -std=c++98 -Wall -Werror -Wextra
SRC = main.cpp

OBJ = main.o

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