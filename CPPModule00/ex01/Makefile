# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: atabiti <atabiti@student.42.fr>            +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/08/12 08:40:39 by atabiti           #+#    #+#              #
#    Updated: 2022/08/17 10:41:22 by atabiti          ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = PHBOOK

SRC = Contact.cpp \
	program.cpp
	
OBJ =  Contact.o \
	program.o \
	
all : $(NAME)

$(OBJ) :
	clang++   -c -Wall -Wextra -Werror $(SRC)
 # -std=c++98
$(NAME) : $(OBJ)
	clang++ $(OBJ) -o $(NAME)

clean : 
	rm *.o

fclean : clean
	rm PHBOOK

re : fclean all
	