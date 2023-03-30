# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: ayassir <ayassir@student.42.fr>            +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/12/26 10:16:30 by ayassir           #+#    #+#              #
#    Updated: 2022/12/26 10:16:32 by ayassir          ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME	=	Zombie

SRCS	=	main.cpp Zombie.cpp zombieHorde.cpp

FLAGS	=	-Wall -Wextra -Werror -std=c++98

HEADER	=	 Zombie.hpp

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