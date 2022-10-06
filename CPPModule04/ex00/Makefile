# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: atabiti <atabiti@student.42.fr>            +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/09/07 11:05:04 by atabiti           #+#    #+#              #
#    Updated: 2022/09/08 11:19:08 by atabiti          ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = polym
SRC = Animal.cpp  main.cpp Dog.cpp Cat.cpp WrongAnimal.cpp  WrongCat.cpp
OBJ = Animal.o  main.o Dog.o Cat.o WrongAnimal.o   WrongCat.o
FLAGS = -Werror -Wextra -Wall -std=c++98

all : $(NAME)

$(NAME) : $(OBJ)

$(OBJ) :
	c++ -c $(FLAGS) $(SRC)
$(NAME) :
	c++ $(OBJ) -o $(NAME)

clean :
	rm *.o
fclean: clean
	rm $(NAME)
	
re : fclean all