# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: junik <ayassir@student.42.fr>              +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/01/22 13:24:43 by ayassir           #+#    #+#              #
#    Updated: 2023/01/22 19:08:40 by junik            ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME	=	Animal

SRCS	=	main.cpp Animal.cpp Dog.cpp Cat.cpp WrongCat.cpp WrongAnimal.cpp

FLAGS	=	-Wall -Wextra -Werror -std=c++98

HEADER	=	Animal.hpp Dog.hpp Cat.hpp WrongCat.hpp WrongAnimal.hpp

CC		=	c++

OBJS	=	$(SRCS:%.c=%.o)

all: $(NAME)

%.o: %.c 
	$(CC) $(FLAGS) -c -o $@ $<
	
$(NAME): $(OBJS) $(HEADER)
	$(CC) $(FLAGS) $(SRCS) -o $(NAME)

clean:
	$(RM) $(NAME)

fclean: clean

re: fclean all