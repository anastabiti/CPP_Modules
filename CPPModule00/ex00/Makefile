# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: atabiti <atabiti@student.42.fr>            +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/08/08 11:17:02 by atabiti           #+#    #+#              #
#    Updated: 2022/08/17 10:41:17 by atabiti          ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = megaphone

SRC = megaphone.cpp
	
OBJ =  megaphone.o
	
all : $(NAME)

$(OBJ) :
	clang++   -c -Wall -Wextra -Werror $(SRC)
 # -std=c++98
$(NAME) : $(OBJ)
	clang++ $(OBJ) -o $(NAME)

clean : 
	rm *.o

fclean : clean
	rm megaphone

re : fclean all
	