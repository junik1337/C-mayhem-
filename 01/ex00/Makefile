# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: ayassir <ayassir@student.42.fr>            +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/12/10 14:32:52 by ayassir           #+#    #+#              #
#    Updated: 2022/12/26 09:57:15 by ayassir          ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME	=	Zombie

SRCS	=	main.cpp Zombie.cpp newZombie.cpp randomChump.cpp

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