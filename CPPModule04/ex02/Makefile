# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: atabiti <atabiti@student.42.fr>            +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/09/07 11:05:04 by atabiti           #+#    #+#              #
#    Updated: 2022/09/09 09:51:25 by atabiti          ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = program
SRC = Animal.cpp  main.cpp Dog.cpp Cat.cpp WrongAnimal.cpp  WrongCat.cpp Brain.cpp
OBJ = Animal.o  main.o Dog.o Cat.o WrongAnimal.o   WrongCat.o Brain.o
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